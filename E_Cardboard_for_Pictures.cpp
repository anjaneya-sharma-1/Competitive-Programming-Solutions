#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    vector<ll> v2;
    ll func(ll mid,ll c){
        ll result=0;
        for(ll i =0;i<v2.size();i++){
            result+=((2*mid+v2[i])*(2*mid+v2[i]));
            if(result>c){
                break;
            }
        }
        return  result;
    }
void solve() {
    ll n, c;
    cin>>n>>c;
    vector<ll> v(n);
    for(auto &a: v){
        cin>>a;
    }
    v2 =v;
    ll up =1e9;
    ll down = 0;
    
    while(down<=up){
        ll mid = (up-down)/2 +down;
        ll rs =func(mid,c);
        if(rs>c){
            up=mid-1;
        }
        else if(rs==c){
            cout<<mid<<endl;
            return;
        }
        else{
            down=mid+1;
        }
    }   
    
}

};
int main(){
    ll t;
    cin >> t;
    Solution s;
    while (t--) s.solve();
    return 0;
}