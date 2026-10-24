#include <bits/stdc++.h>
using namespace std;
int main (){
  int n;
  cin>>n;
  int a;
  vector<int>v(n+1);
  for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    v[x]=i;
  }
  int ans=1;

  // Check consecutive numbers 1->2, 2->3, etc.
    for (int i = 2; i <=n; i++) {
        // If (i+1) appears before (i), we need a new round
        if (v[i ] < v[i-1]) {
            ans++;
        }
    }
  cout<<ans<<"\n";
  return 0;
}