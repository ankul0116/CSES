#include <bits/stdc++.h>
using namespace std;

void print(vector<int>& ap, vector<int>& bp) {
    cout << "YES" << endl; 
    
    for (int i = 0; i < ap.size(); i++) {
        cout << ap[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < bp.size(); i++) {
        cout << bp[i] << " ";
    }
    cout << endl;
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if (a + b > n) {
            cout << "NO\n";
            continue; // FIX 1: Skip to next testcase
        }
        
        // FIX 2: Removed the wrong 'if (b==0 && a!=0)' condition

        
        int draw = n - a - b;
        int card = n - draw;
        int x = a - b;
        
        vector<int> ap(n);
        vector<int> bp(n);
        for (int i = 0; i < n; i++) {
            ap[i] = i + 1;
            bp[i] = i + 1;
        }
        
        if (a == 0 && b == 0) { // FIX 3: Both zero means pure draw
             print(ap, bp); 
        }
        else if (a == 0 || b == 0) {
         cout << "NO\n";
            continue;
        }
       
          // Rotate bp right by 'x' elements within the active card range
          
        else {
          // FIX 5: Use abs(x) for left rotation because x is negative
         for (int i = 0; i < n; i++) {
             bp[i] = ((i + b) % n) + 1;
          }
          print(ap,bp);
        }
    }
    return 0;
}
