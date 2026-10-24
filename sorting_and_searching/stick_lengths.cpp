#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long mid = v[n / 2];
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += abs(v[i] - mid);
    }

    cout << ans;
    return 0;
}
