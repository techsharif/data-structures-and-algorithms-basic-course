#include <bits/stdc++.h>
using namespace std;

/// n == 1, 1
/// n == 5, ss(4) + 5
/// ss(5) = 1+2+3+4+5 = 15
/// ss(4) = 1+2+3+4
/// ss(4) + 5 = 1+2+3+4  + 5 = ss(5)

int sequence_sum(int n){
    if (n==1) return 1;

    return sequence_sum(n-1) + n;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << sequence_sum(4) << "\n";


    return 0;
}

