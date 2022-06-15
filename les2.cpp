#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Need to enter ten elements in array.\n\n";
        cout << " Please enter \"" << i + 1 << "\" data element = ";
        cin >> *(arr+i);
        system("cls");
    }
   
    for (int j = 0; j < size; j++)
    {
        for (int i = 1; i < size; i++)
        {
            if (*(arr + i) < *(arr + (i-1))) 
			swap(*(arr + i), *(arr + (i - 1)));
        }
    }

    cout << "Sorted array of data:\n";
    for (int i = 0; i < size; i++)
    {
        cout << " arr[" << i<< "] = " << *(arr + i) << endl;
    }
    
    return 0;
}

