#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    set<int> st;

    int left = 0;
    int ans = 0;

    for (int right = 0; right < n; right++) {

        while (st.count(a[right])) {
            st.erase(a[left]);
            left++;
        }

        st.insert(a[right]);

        ans = max(ans, right - left + 1);
    }

    cout << ans << '\n';

    return 0;
}