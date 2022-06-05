#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    const int arrSize{10};
    int arrNumber[arrSize];
    
    // itinialization array
    for ( int i{}; i < arrSize; i++)
    {
        cout << "Enter " << i+1 << " number of array: ";
        cin >> *(arrNumber + i);
    }
    
    // array sorting
    
    for ( int i{}; i < arrSize; i++)
    {
    for (int j{i+1}; j < arrSize; j++)
    {
    if ( *(arrNumber + j) < *(arrNumber + i))
    {
        swap ( *(arrNumber + i), *(arrNumber + j) );
    }
    }
    }
    // printing sorted array
    cout << "Sorted array: ";
    for ( int i{}; i < arrSize; i++)
        {
            cout << *(arrNumber + i) << " ";
        }
    
return 0;
}