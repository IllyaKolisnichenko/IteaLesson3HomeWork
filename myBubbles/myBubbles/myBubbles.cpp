// myBubbles.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// My version Bubbles
//

#include <iostream>

int main()
{
    std::cout << "Enter size of array:  ";
    int sizeArray;
    std::cin >> sizeArray;
    int* myArray = new int[sizeArray];
    std::cout << "Enter elements of array:" << std::endl;
    int i = 0;
    while (i != sizeArray)
    {
        std::cin >> myArray[i];
        i++;
    }
    std::cout << "You've got array : {";
    for (int k = 0; k < sizeArray; k++)
    {
        std::cout << myArray[k] << " ";
    }
    std::cout << "}" << std::endl;

    for (int k = 0; k < sizeArray; k++)
    {
        for (int p = k + 1; p < sizeArray; p++)
        {

            if (myArray[k] > myArray[p])
            {
                int tempArray{};
                tempArray = myArray[k];
                myArray[k] = myArray[p];
                myArray[p] = tempArray;
            }
        }
    }
    
    std::cout << "You've got sorted array : {";
    for (int k = 0; k < sizeArray; k++)
    {
        std::cout << myArray[k] << " ";
    }
    std::cout << "}";

    return 0;
}
