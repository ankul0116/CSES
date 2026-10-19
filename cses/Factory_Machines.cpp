#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long target;
    cin >> target;

    vector<long long> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    long long s = 1;
    long long e = *min_element(v.begin(), v.end()) * target;
    long long ans = e;

    while(s <= e){
        long long mid = s + (e - s) / 2;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum += mid / v[i];
            if(sum >= target) {
            break; // optimization
            }
        }

        if (sum >= target){
            ans = mid;
            e = mid - 1; // try smaller time
        } else {
            s = mid + 1; // need more time
        }
    }

    cout << ans << endl;
    return 0;

}