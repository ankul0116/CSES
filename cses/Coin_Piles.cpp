#include<iostream>
#include<vector>
using namespace std;
int main (){
  int t;
  
  cin>>t;
  vector<pair<long ,long>>v(t);
  for(int  i=0;i<t;i++){
    cin>>v[i].first;
    cin>>v[i].second;
  }
  for(int  i=0;i<t;i++){
    long long maxi =max(v[i].first,v[i].second);
    long long mini =min(v[i].first,v[i].second);
    if ((maxi + mini) % 3 == 0 && maxi <= 2 * mini) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

  }
  return 0;
}