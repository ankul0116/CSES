#include <bits/stdc++.h>
using namespace std;

vector<string> gray(int n) {

    if(n == 1) {
        return {"0", "1"};
    }

    vector<string> prev = gray(n - 1);

    vector<string> ans;

    // prepend 0
    for(string s : prev) {
        ans.push_back("0" + s);
    }

    // prepend 1 in reverse order
    for(int i = prev.size() - 1; i >= 0; i--) {
        ans.push_back("1" + prev[i]);
    }

    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<string> ans = gray(n);

    for(string s : ans) {
      
        cout << s << endl;
    }
}