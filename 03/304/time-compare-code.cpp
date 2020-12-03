#include<bits/stdc++.h>
using namespace std;

long MOD = 1000007;
long solution01(long n){
    long sum = 0;
    long item = 0;
    for (int i=1; i<=n; i++){
        item = (item + i) % MOD;
        sum = (sum + item) % MOD;
    }
    return sum;

}

long solution02(long n){
    long sum = 0;
    long item = 0;
    for (int i=1; i<=n; i++){
        item = 0;
        for (int j=1; j<=i; j++){
            item = (item + j) % MOD;
        }
        sum = (sum + item) % MOD;
    }
    return sum;

}

void calc(long n){

    time_t start;
    time_t end;
    double seconds;
    long answer;

    cout << "For " << n << ":\n";

    auto start_time = std::chrono::high_resolution_clock::now();

    answer = solution01(n);

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;

    cout << "Solve 01 -> " << answer << " " << std::chrono::duration_cast<std::chrono::microseconds>(time).count() << "\n";


    start_time = std::chrono::high_resolution_clock::now();

    answer = solution02(n);

    end_time = std::chrono::high_resolution_clock::now();
    time = end_time - start_time;
    cout << "Solve 02 -> " << answer << " " << std::chrono::duration_cast<std::chrono::microseconds>(time).count() << "\n";
}

int main(){

    calc(1);
    calc(10);
    calc(100);
    calc(1000);
    calc(10000);

    return 0;
}
