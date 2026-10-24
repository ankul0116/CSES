#include<bits/stdc++.h>
using namespace std;
int main (){
  int n;
  cin>>n;
  queue<int>q;
  for(int i=1;i<=n;i++){
    q.push(i);
  }
  bool check =true;
  while(check){
    int front1=q.front();
    q.pop();
    if(q.empty()){
      cout<<front1;
      check=false;
      return 0 ;
      
    }
    int front2=q.front();
    q.pop();
    cout<<front2<<" ";
    q.push(front1);

  }
  return 0;
}