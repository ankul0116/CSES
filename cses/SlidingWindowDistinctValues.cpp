#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    map<int,int> freq;

    // first window
    for(int i = 0; i < k; i++) {
        freq[nums[i]]++;
    }

    cout << freq.size() << " ";

    // sliding window
    for(int i = k; i < n; i++) {

        freq[nums[i-k]]--;

        if(freq[nums[i-k]] == 0) {
            freq.erase(nums[i-k]);
        }

        freq[nums[i]]++;

        cout << freq.size() << " ";
    }

    return 0;
}