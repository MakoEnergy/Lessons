// Includes up here
#include <iostream>
#include <algorithm>

enum BoardSize
{
    Width = 8,
    Height = 8
};

enum Moves
{
    UpUpLeft = 0,
    UpUpRight,
    DownDownLeft,
    DownDownRight,
    LeftLeftUp,
    LeftLeftDown,
    RightRightUp,
    RightRightDown,
    MaxMoves
};

void MovePos(int MoveID, int& PosX, int& PosY)
{
    switch(MoveID)
    {
        case UpUpLeft:        PosX += 1;  PosY += 2;  break;
        case UpUpRight:       PosX -= 1;  PosY += 2;  break;
        case DownDownLeft:    PosX += 1;  PosY -= 2;  break;
        case DownDownRight:   PosX -= 1;  PosY -= 2;  break;
        case LeftLeftUp:      PosX += 2;  PosY += 1;  break;
        case LeftLeftDown:    PosX += 2;  PosY -= 1;  break;
        case RightRightUp:    PosX -= 2;  PosY += 1;  break;
        case RightRightDown:  PosX -= 2;  PosY -= 1;  break;
    }
}

bool IsValidPos(bool Board[Width][Height], int PosX, int PosY)
{
    bool XIsInBounds = PosX < Width && PosX >= 0;
    bool YIsInBounds = PosY < Height && PosY >= 0;
    bool NotVisited = !Board[PosX][PosY];
    return XIsInBounds && YIsInBounds && NotVisited;
}

int GetNumJumps(bool Board[Width][Height], int PosX, int PosY)
{
    int NumJumps = 0;
    for( int Move = 0 ; Move < MaxMoves ; ++Move )
    {
        int DestX = PosX;
        int DestY = PosY;
        MovePos(Move,DestX,DestY);
        if( IsValidPos(Board,DestX,DestY) ) {
            ++NumJumps;
        }
    }
    return NumJumps;
}

// Main
int main()
{
    bool Chessboard[Width][Height];// = {};
    std::fill(&Chessboard[0][0],&Chessboard[0][0] + sizeof(Chessboard),false);

    int KnightPosX = 0;
    int KnightPosY = 0;
    Chessboard[KnightPosX][KnightPosY] = true;
    std::cout << "Starting knight position is 0,0." << std::endl;
    while( GetNumJumps(Chessboard,KnightPosX,KnightPosY) > 0 )
    {
        int LowestNumJumps = 100;
        int BestPickX = -1;
        int BestPickY = -1;

        std::cout << "Scanning positions around [" << KnightPosX << "," << KnightPosY  << "]." << std::endl;
        for( int Move = 0 ; Move < MaxMoves ; ++Move )
        {
            int DestX = KnightPosX;
            int DestY = KnightPosY;
            MovePos(Move,DestX,DestY);
            if( IsValidPos(Chessboard,DestX,DestY) ) {
                int NumJumps = GetNumJumps(Chessboard,DestX,DestY);
                if( NumJumps > 0 && NumJumps < LowestNumJumps ) {
                    LowestNumJumps = NumJumps;
                    BestPickX = DestX;
                    BestPickY = DestY;
                }
            }
        }

        //std::cout << "Validating best match at [" << BestPickX << "," << BestPickY << "]." << std::endl;
        if( IsValidPos(Chessboard,BestPickX,BestPickY) ) {
            std::cout << "Moving to position [" << BestPickX << "," << BestPickY << "] with " << LowestNumJumps << " available jumps." << std::endl;
            KnightPosX = BestPickX;
            KnightPosY = BestPickY;
            Chessboard[KnightPosX][KnightPosY] = true;
        }else{
            std::cout << "Ran out of valid positions.  Exiting." << std::endl;
            break;
        }
    }

    int FoundGapCount = 0;
    for( int X = 0 ; X < Width ; ++X )
    {
        for( int Y = 0 ; Y < Height ; ++Y )
        {
            if( !Chessboard[X][Y] ) {
                std::cout << "Found a non-visited point at [" << X << "," << Y << "]." << std::endl;
                FoundGapCount++;
            }
        }
    }
    if( FoundGapCount != 0 ) {
        std::cout << FoundGapCount << " non-visited points were found.  Exercise failed." << std::endl;
        return 1;
    }

    std::cout << "Success!" << std::endl;
    return 0;
}
