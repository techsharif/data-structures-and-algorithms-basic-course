#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {3, 1, 7, -1, 3, 2, 4, 9, -5, 6};
    int n = 10;
 
    int sum = 0;
    
    for (int i=0; i<n; i++){
        int element = arr[i];
        sum = sum + element;
    }
    
    cout << "SUM: " << sum << "\n";
    cout << "AVG: " << sum * 1.0 / n << "\n";
    
    return 0;
}
