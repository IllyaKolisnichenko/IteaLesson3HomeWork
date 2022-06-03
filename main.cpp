#include "header.h"

int main() {
    int numbersArray[10]{};

    for(int i = 0; i < 10; i++){
        std::cin >> numbersArray[i];
    }
    bubbleSort(numbersArray, 10);
    for(int j = 0; j < 10; j++){
        std::cout << numbersArray[j];
    }
    return 0;
}
