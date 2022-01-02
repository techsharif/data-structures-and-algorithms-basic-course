#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {3, 1, 7, -1, 3, 2, 4, 9, -5, 6};
    int n = 10;
    
    int mn = arr[0];
    int mx = arr[0];
    
    for (int i=0; i<n; i++){
        int element = arr[i];
        if (mn > element){
            mn = element;    
        } 
        
        if (mx < element){
            mx = element;    
        } 
    }
    
    cout << "MIN: " << mn << "\n";
    cout << "MAX: " << mx << "\n";
    
    return 0;
}
