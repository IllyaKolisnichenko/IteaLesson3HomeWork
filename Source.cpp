#include<iostream>
#include<cmath>
#include<Windows.h>
#include<ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int const size = 4;
	int array[size];
	cout << "введите массив:" << endl;
	
	
		for (int i = 0;i < size;i++)
		
			cin >> array[i];

		
		//cout << endl;
		for (int i = 0;i < size;i++)
		{
			for (int j = size - 1;j > i;j--)
			{
				if (array[j] < array[j - 1])
					swap(array[j], array[j - 1]);

			}
		}
		for (int i = 0;i < size;i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
		cout << "Для доступа к первому элементу перейдите по этому указателю" <<*(array+1)<< endl;

}