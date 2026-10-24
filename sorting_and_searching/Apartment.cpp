#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main (){
  long n,m,k;
  cin>>n>>m>>k;
  vector<long long >need;
  vector<long long >vacant;

  for(int i=0;i<n;i++){
   long long a;
    cin>>a;
    need.push_back(a);
  }
  for(int i=0;i<m;i++){
    long long b;
    cin>>b;
    vacant.push_back(b);
  }

  sort(need.begin(),need.end());
  sort(vacant.begin(),vacant.end());
  int i = 0, j = 0, count = 0;
    while (i < n && j < m) {
        if (vacant[j] < need[i] - k) {
            j++; // Apartment too small, check next apartment
        } else if (vacant[j] > need[i] + k) {
            i++; // Apartment too big for this person, move to next person
        } else {
            // Found a match
            count++;
            i++;
            j++;
        }
    }
 
  cout<<count;
  return 0;
}