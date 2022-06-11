#include <iostream>
#include <cstdlib>

int main()
{
    const int arrSize{10};
    int arrNumber[arrSize];
    
    // itinialization array
    for (int i{}; i < arrSize; i++)
    {
        std::cout << "Enter " << i + 1 << " number of array: ";
        std::cin >> *(arrNumber + i);
    }
    
    // array sorting
    for (int i{}; i < arrSize; i++)
    {
        for (int j{i+1}; j < arrSize; j++)
        {
            if (*(arrNumber + j) < *(arrNumber + i))
            {
                std::swap (*(arrNumber + i), *(arrNumber + j));
            }
        }
    }

    // printing sorted array
    std::cout << "Sorted array: ";
    for (int i{}; i < arrSize; i++)
        {
            std::cout << *(arrNumber + i) << " ";
        }  
return 0;
}
