#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int total_movie;
    cin >> total_movie;
    vector<pair<int,int>>timing;
    for(int i=0;i<total_movie;i++){
        int start_time,end_time;
        cin>>start_time>>end_time;
        timing.push_back({end_time,start_time});
        
    }
    int prev_end=0;
    int max_movie=0;
    //sort vector according to ending time of movie
    sort(timing.begin(), timing.end());
    for( auto[end_time,start_time] :timing){
        if(start_time>=prev_end){
            max_movie++;
            prev_end=end_time;
        }
        
    }
    cout << max_movie<<"\n";
    return 0;
}