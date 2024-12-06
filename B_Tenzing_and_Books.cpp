#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,x;
    ll curr =0;
    cin>>n>>x;
    ll c1=0,c2 =0,c3 =0;
    for(int i =0;i<n; i++){

        ll a;
        cin>>a;
        if(a|x==x&&(c1||i==0)){
            c1=1;
            curr|=a;
        }
        else{
            c1=0;
        }

        
    }
    for(int i =0;i<n; i++){
        ll a;
        
        cin>>a;
        if(a|x==x&&(c2||i==0)){
            c2=1;
            curr|=a;
        }
        else{
            c2=0;
        }
      
    }
    for(int i =0;i<n; i++){
        ll a;
        
        cin>>a;
        if(a|x==x&&(c3||i==0)){
            c3=1;
            curr|=a;
        }
        else{
            c3=0;
        }

    }
    
    cout<<( curr==x?"Yes":"No")<<endl;    
}

};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}