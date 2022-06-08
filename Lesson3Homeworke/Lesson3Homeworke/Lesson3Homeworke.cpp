// Lesson3Homeworke.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

    int lenBetw2Elem = sizeArray / 1.247;
    int firstElement = 0;
    while (lenBetw2Elem >= 1)
    {
            
            for (int p = firstElement; p < sizeArray - lenBetw2Elem; p++)
            {

                if (myArray[firstElement+p] > myArray[lenBetw2Elem+p])
                {
                    int tempArray{};
                    tempArray = myArray[firstElement+p];
                    myArray[firstElement+p] = myArray[lenBetw2Elem + p];
                    myArray[lenBetw2Elem + p] = tempArray;
                }
            }
        
        lenBetw2Elem /= 1.27;
    }

    std::cout << "You've got sorted array by brush method : {";
    for (int k = 0; k < sizeArray; k++)
    {
        std::cout << myArray[k] << " ";
    }
    std::cout << "}";



    return 0;
}
