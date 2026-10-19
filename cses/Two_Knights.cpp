#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k;
    cin >> k;

    for (long long n = 1; n <= k; n++) {
        long long total = (n * n) * (n * n - 1) / 2;
        long long attack = 4 * (n - 1) * (n - 2);
        cout << total - attack << endl;
    }
    
    return 0;
}
