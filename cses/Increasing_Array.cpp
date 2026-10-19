#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long arr[n];
    for(long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long count = 0;

    for(long long i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            long long diff = arr[i - 1] - arr[i];
            count += diff;
            arr[i] = arr[i - 1];  // make non-decreasing
        }
    }

    cout << count << endl;
    return 0;
}
