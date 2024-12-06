#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n;
    cin>>n;
    map<int,int> m;
    vector<vector<int>>arr;
    for(int i =0;i<n;i++){
        ll k;
        cin>>k;
        vector<int> p;
        for(int j =0;j<k;j++){
            ll c;
            cin>>c;
            m[c]++;
            p.push_back(c);

        }
        arr.push_back(p);
    }
    for(int i =0;i<arr.size();i++){
        int c =1;
        for(int j=0;j<arr[i].size();j++){
            if(m[arr[i][j]]==1){
                c=0;
                break;
            }
        }
        if(c){
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
    
}

};
int main(){
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}