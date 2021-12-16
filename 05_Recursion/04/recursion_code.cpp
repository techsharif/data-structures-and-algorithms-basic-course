#include <iostream>
using namespace std;

int f(int x){
    cout << x << endl;

    if (x<=1){
        return 1;
    }else{
        return f(x-1);
    }
}

int main()
{
    cout << "result: " << f(3);
    
    return 0;
}