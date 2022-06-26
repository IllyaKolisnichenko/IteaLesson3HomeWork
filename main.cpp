#include <iostream>
#include<algorithm>

int main()
{
    const int Size = 10;
    int array[Size] = {};
    for (int i = 0; i < Size; i++)
    {
        std::cin >> array[i];
    }
    std::sort(array, array + Size);
    int* pArr = array;
    for (int i = 0; i < Size; i++)
    {
        std::cout << pArr[i] << std::endl;
    }
    

    return 0;
}
