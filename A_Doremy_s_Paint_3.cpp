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
    vector<ll>a(n);
    map<ll,ll>mp;
    ll count=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
        if(mp[a[i]]==1){
            count++;
        }
    }
    if(count==1){
        cout<<"Yes"<<endl;
        return;
    }
    if(count>2){
        cout<<"No"<<endl;
        return;
    }
    ll elem1=-1;
    ll elem2=-1;
    for(int i=0;i<n;i++){
        if(elem1==-1){
            elem1=a[i];
        }
        else if(a[i]!=elem1){
            elem2=a[i];
            break;
        }
    }
    ll count1=mp[elem1];
    ll count2=mp[elem2];
    if(abs(count1-count2)<=1){
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}