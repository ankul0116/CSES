#include<iostream>
#include<string>
using namespace std;
int main (){
   ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    int ans=1;
    int maxi=1;
    for(int i=1;i<str.length();i++){
      if(str[i]==str[i-1]){
            maxi++;
        ans=max(ans,maxi);
    
      }
      else maxi=1;

    }
    cout<<ans;
  return 0;
}