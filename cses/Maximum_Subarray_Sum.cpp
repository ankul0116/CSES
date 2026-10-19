#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    // vector<long long> pre(n);
    // int count=0;
    // for(int i=n-1;i>=0;i--){
    //     count=count+v[i];
    //     if(count<0){
    //         count=0;
    //     }
    //     pre[i]=count;
    // }
    // long long mx=INT_MIN;

    // for(int i=0;i<n;i++){
    //     mx=max(mx,pre[i]);
    // }
    // cout<<mx;

    long long sum =  -1e9;
   
    long long ans = -1e9;;

    for (int i = 0; i < n; i++) {
        sum = max(v[i], sum + v[i]);
        ans = max(ans, sum);
    }

    cout << ans;
    return 0;
}
