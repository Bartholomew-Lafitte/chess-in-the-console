#include <iostream>
const int FILES = 8;
const int RANKS = FILES;

void board() { // This code needs to be plugged into something before it can run
    char locationArrayFILES[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char locationArrayRANKS[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
    if (playerChoice == 1) {
        char locationArrayFILES[8] = {'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
        char locationArrayRANKS[8] = {'8', '7', '6', '5', '4', '3', '2', '1'};
    }
//int boardArray[FILES][RANKS];
    std::cout << "  #-aA-##-bB-##-cC-##-dD-##-eE-##-fF-##-gG-##-hH-#" << std::endl;
    for (int i1 = 0; i1 != FILES; i1++){
        std::cout << locationArrayRANKS[i1] << " " << std::flush;
        for (int i2 = 0; i2 != RANKS; i2++) {
            std::cout << "| " << locationArrayFILES[i2] << locationArrayRANKS[i1] << " |" << std::flush;
        }
        std::cout << "" << std::endl;
        std::cout << "  #----##----##----##----##----##----##----##----#" << std::endl;
    }
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    board();
    return 0;
}