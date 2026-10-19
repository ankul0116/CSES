#include <bits/stdc++.h>
using namespace std;
bool is_possible(vector<int>&freq){
  int max_freq  =0;
  int total_left=0;
  for(int i=0;i<26;i++){

     max_freq = max(max_freq, freq[i]);
        total_left += freq[i];
    }

    return max_freq <= (total_left + 1) / 2;

}

int main() {

string s;
 cin>>s;
 int n=s.length();
 vector<int>freq(26,0);
 for(auto i : s){
  int a=i-'A';
  freq[a]++;
 }
 string ans="";
 char last='\0';
 for(int i=0;i<n;i++){
   bool placed = false;
  // for exicographically minimal 
  for(int j=0;j<26;j++){
    char ch=j+'A';
    if(freq[j]==0 || ch==last ){
      continue;
    }
    freq[j]--;
    if(is_possible(freq)){
      ans.push_back(ch);
      last=ch;
       placed = true;
      break;


    }
    else{
      freq[j]++;

    }
  }

 }
 if(ans.length()==n){
  cout<<ans;
 }
 else cout<<-1;


  return -1;

}