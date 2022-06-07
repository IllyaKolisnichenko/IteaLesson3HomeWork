#include<iostream>
#include<cmath>
#include<Windows.h>
#include<ctime>
using namespace std;
void main()
{
	//setlocale(LC_ALL, "");
	srand(time(0));
	int const size = 10;
	int array[size];
	cout << "intput array :" << endl;
	
	
	for (int i = 0;i < size;i++)
		array = array[i];
			cin >> *(array+1);

		
		for (int i = 0;i < size;i++)
		{
			for (int j = size - 1;j > i;j--)
			{
				if (*(array[j]) <*( array[j - 1]))
					swap(*(array[j]), *(array[j - 1]));

			}
		}
		for (int i = 0;i < size;i++)
		{
			
			cout << "To access the first element, go to this pointer " << *(array + 1) << endl;

		}
		cout << endl;

}