#include<iostream>
#include<vector>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
     cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    long long count=0;
    for(int i=0;i<n;i++){
      if(v[i]>count+1){
        break;
      }
      count+=v[i];
    }
    cout<<count+1;
    return 0;
}