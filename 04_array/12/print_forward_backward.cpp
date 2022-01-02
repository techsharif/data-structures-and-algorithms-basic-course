#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {3, 1, 7, -1, 3, 2, 4, 9, -5, 6};
    int n = 10; 
    
    cout << "Forward: ";
    for (int i=0; i<n; i++){
        int element = arr[i];
        cout << element << " ";
    }
    cout << "\n\nBackward: ";
    for (int i=n-1; i>=0; i--){
        int element = arr[i];
        cout << element << " ";
    }
    
    return 0;
}
