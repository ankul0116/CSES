#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;

    long long expectedSum = n * (n + 1) / 2;

    long actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        
        actualSum += x;
    }

    cout << expectedSum - actualSum;
    return 0;
}