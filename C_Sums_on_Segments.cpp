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
    ll a[n];
    ll ind=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]!=1&&a[i]!=-1){
            ind=i;
        }
    }
    ll sum=0;
    ll maxi=0;
    ll mini=0;
    ll sum2=0;
    for(int i=0;i<ind;i++){
        sum+=a[i];
        sum2+=a[i];
        if(sum<0){
            sum=0;
        }
        if(sum2>0){
            sum2=0;
        }
        mini=min(mini,sum2);
        maxi=max(maxi,sum);
    }
    sum=0;
    sum2=0;
    for(int i=ind+1;i<n;i++){
        sum+=a[i];
        sum2+=a[i];
        if(sum<0){
            sum=0;
        }
        if(sum2>0){
            sum2=0;
        }
        mini=min(mini,sum2);
        maxi=max(maxi,sum);
    }
    sum=0;
    ll mx1=0;
    ll mi1=0;
    for(int i=ind-1;i>=0;i--){
        sum+=a[i];
        mx1=max(mx1,sum);
        mi1=min(mi1,sum);
    }
    sum=0;
    ll mx2=0;
    ll mi2=0;
    for(int i=ind+1;i<n;i++){
        sum+=a[i];
        mx2=max(mx2,sum);
        mi2=min(mi2,sum);
    }
    mi1+=mi2;
    mx1+=mx2;
    ll l=a[ind]+mi1;
    ll r=a[ind]+mx1;
    vector<ll> v;
    for(int i=mini;i<=maxi;i++){
        v.push_back(i);
    }
    for(int i=l;i<=r;i++){
        v.push_back(i);
        
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
   

    
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