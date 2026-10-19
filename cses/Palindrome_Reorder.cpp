#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin>>s;
  vector<int>freq(26,0);
  for (char c : s)
        freq[c - 'A']++;

  int oddCount=0;
  int oddChar=-1;
  for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 1) {
            oddCount++;
            oddChar = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string left = "", middle = "";
     for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 == 0) {
          left=left+string(freq[i] / 2,char('A'+i));

        }
      }
         if (oddChar != -1) {
        middle = string(freq[oddChar], char('A' + oddChar));
    
      }
      string right = left;
    reverse(right.begin(), right.end());
  cout<<left+middle+right;
    return 0;

}