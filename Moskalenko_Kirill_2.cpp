#include <iostream>

int main()
{
	std::cout << "enter 10 numbers" << std::endl;
	
	int arr[10] = { }; // initialization of array

	for (short i = 0; i < 10; i++)
	{
		std::cin >> *(arr + i);  //input of array elements
	}

	for (size_t i = 0; i < 10 - 1; i++) // sort of array
	{
		for (size_t j = 0; j < 10 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				short temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	} 

	std::cout << std::endl;

	for (short i = 0; i < 10; i++)
	{
		std::cout << *(arr + i) << " "; //displaying of array elements
	}

	std::cout << std::endl;

	return 0;
}
