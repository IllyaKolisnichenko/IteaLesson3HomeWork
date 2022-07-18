#include <iostream>
#include <algorithm>
int main()
{
	std::cout << "enter 10 numbers" << std::endl;
	
	int arr[10] = { }; // initialization of array

	for (short i = 0; i < 10; i++)
	{
		std::cin >> *(arr + i);  //input of array elements
	}

	std::sort(arr, arr + 10); // sort of array

	std::cout << std::endl;

	for (short i = 0; i < 10; i++)
	{
		std::cout << *(arr + i) << " "; //displaying of array elements
	}

	return 0;
}
