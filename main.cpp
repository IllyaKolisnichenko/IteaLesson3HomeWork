#include <iostream>

void bubbleSort(int arr[], int size);

int main() {
    const int size = 10;
    int numbersArray[size]{};

    for(int i = 0; i < size; i++){
        std::cin >> numbersArray[i];
    }
    bubbleSort(numbersArray, size);
    for(int j = 0; j < size; j++){
        std::cout << numbersArray[j];
    }
    return 0;
}
