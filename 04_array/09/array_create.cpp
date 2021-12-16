#include <iostream>
using namespace std;

int main()
{
    int arr1[5];
    cout << "arr1[3] -> " << arr1[3] << "\n";
    
    int arr2[5] = {3, -1, 5, 4, 7};
    cout << "arr2[3] -> " << arr2[3] << "\n";
    
    int arr3[5] = {0};
    cout << "arr3[3] -> " << arr3[3] << "\n";
    
    int arr4[5] = {3, -1};
    cout << "arr4[1] -> " << arr4[1] << "\n";
    cout << "arr4[3] -> " << arr4[3] << "\n";
    
    return 0;
}
