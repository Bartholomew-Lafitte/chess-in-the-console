#include <iostream>
const unsigned char SIZE = int(8); // should allocate less memory than const short SIZE = 8;
unsigned char locationArrayFILES[SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
unsigned char locationArrayRANKS[SIZE] = {'8', '7', '6', '5', '4', '3', '2', '1'};
unsigned char pieceLocation[SIZE][SIZE][3] = // this determines the location of every piece on the board
        {
        "bR","bP","","","","","wP","wR",
        "bN","bP","","","","","wP","wN",
        "bB","bP","","","","","wP","wB",
        "bK","bP","","","","","wP","wK",
        "bQ","bP","","","","","wP","wQ",
        "bB","bP","","","","","wP","wB",
        "bN","bP","","","","","wP","wN",
        "bR","bP","","","","","wP","wR"
        };

int boardOrientation() {
    int i = 0;
    bool correctInput = false;
    while (!correctInput) {
        if (i == 0 || i == 1) {correctInput = true;}
        std::cout
                << "INPUTS:\n"
                << "White: 0\n"
                << "Black: 1\n"
                << ":";
        std::cin >> i;
    }
    if (i == 1) { // this is fucking disgusting
        int temp;
        temp = locationArrayFILES[0];
        locationArrayFILES[0] = locationArrayFILES[7];
        locationArrayFILES[7] = char(temp);
        temp = locationArrayFILES[1];
        locationArrayFILES[1] = locationArrayFILES[6];
        locationArrayFILES[6] = char(temp);
        temp = locationArrayFILES[2];
        locationArrayFILES[2] = locationArrayFILES[5];
        locationArrayFILES[5] = char(temp);
        temp = locationArrayFILES[3];
        locationArrayFILES[3] = locationArrayFILES[4];
        locationArrayFILES[4] = char(temp);
        temp = locationArrayRANKS[0];
        locationArrayRANKS[0] = locationArrayRANKS[7];
        locationArrayRANKS[7] = char(temp);
        temp = locationArrayRANKS[1];
        locationArrayRANKS[1] = locationArrayRANKS[6];
        locationArrayRANKS[6] = char(temp);
        temp = locationArrayRANKS[2];
        locationArrayRANKS[2] = locationArrayRANKS[5];
        locationArrayRANKS[5] = char(temp);
        temp = locationArrayRANKS[3];
        locationArrayRANKS[3] = locationArrayRANKS[4];
        locationArrayRANKS[4] = char(temp);
    }
    return 0;
}

void board(int boardOrientation) {
//int boardArray[FILES][RANKS];
    std::cout
    << "  #-" << locationArrayFILES[0] << char(locationArrayFILES[0]-32)
    << "-##-" << locationArrayFILES[1] << char(locationArrayFILES[1]-32)
    << "-##-" << locationArrayFILES[2] << char(locationArrayFILES[2]-32)
    << "-##-" << locationArrayFILES[3] << char(locationArrayFILES[3]-32)
    << "-##-" << locationArrayFILES[4] << char(locationArrayFILES[4]-32)
    << "-##-" << locationArrayFILES[5] << char(locationArrayFILES[5]-32)
    << "-##-" << locationArrayFILES[6] << char(locationArrayFILES[6]-32)
    << "-##-" << locationArrayFILES[7] << char(locationArrayFILES[7]-32)
    << "-#" << std::endl;

    for (unsigned char i1 : locationArrayRANKS){
        std::cout << i1 << " ";
        for (int i2 = 0; i2 != SIZE; i2++) {
            std::cout << "| " << " "/*locationArrayFILES[i2]*/ << " "/*locationArrayRANKS[i1]*/ << " |";
        }
        std::cout << "" << std::endl;
        std::cout << "  #----##----##----##----##----##----##----##----#" << std::endl;
    }
}

int pieces() { // determines how far on the board a piece of given type can move
    short K = 1; // king
    short Q = 8; // queen
    short R = 8; // rook
    short B = 8; // bishop
    short N = 2; // knight
    short P = 1; // pawn
    return 0;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    board(boardOrientation());

    return 0;
}