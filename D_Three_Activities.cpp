#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve() {
        ll n;
        cin >> n;

        priority_queue< pair<ll,ll>> pq1; 
        priority_queue<pair<ll,ll>> pq2; 
        priority_queue< pair<ll,ll>> pq3; 
        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            pq1.push({a,i}); 
        }
        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            pq2.push({a,i});
        }
        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            pq3.push({a,i}); 
        }


        ll sum=0;
        vector<pair<ll,ll>>v1;
        vector<pair<ll,ll>>v2;
        vector<pair<ll,ll>>v3;
        ll i =3;
        while(i--){
            v1.push_back(pq1.top());
            pq1.pop();
        }
        i=3;
        while(i--){
            v2.push_back(pq2.top());
            pq2.pop();
        }
        i=3;
        while(i--){
            v3.push_back(pq3.top());
            pq3.pop();
        }
        for(int i =0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(v1[i].second!=v2[j].second&&v2[j].second!=v3[k].second&&v1[i].second!=v3[k].second){
                        sum=max(sum,v1[i].first+v2[j].first+v3[k].first);}
                }
            }
        }
        cout << sum << endl; 
    }
};

int main() {
    ll t;
    cin >> t; 
    Solution s;
    while (t--) {
        s.solve(); 
    }
    return 0;
}
