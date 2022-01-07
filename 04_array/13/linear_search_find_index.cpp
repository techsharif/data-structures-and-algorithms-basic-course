#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {3, 5, -1, 2, 5, 6, -3, 9, -4, 8};
    int n = 10;
    
    int key = 15;
    
    int result = -1;
    
    // linear search
    for (int i=0; i<n; i++){
        if (arr[i] == key){
            result = i;
            break;
        }  
    }
    
    cout << result ;
    
    
    return 0;
}
