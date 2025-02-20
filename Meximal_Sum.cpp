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
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    ll mex=0;
    while(mp[mex]>0){
        mex++;
    }
    ll l=0;
    ll mex1=0;
    ll mex2=0;
    map<ll,ll>mp2;
    ll sum=0;
    while(mex1!=mex&&l<n){
        mp2[a[l]]++;
        while(mp2[mex1]>0){
            mex1++;
        }
     
        l++;

    }
    
    l=max(0LL,l-1);
    ll r=n-1;
    mp2.clear();
    while(mex2!=mex&&r>l){
        mp2[a[r]]++;
        while(mp2[mex2]>0){
            mex2++;
        }
        
        r--;
    }
    r=min(n-1,r+1);
    for(ll i=0;i<=l;i++){
        sum+=a[i];
    }
    for(ll i=r;i<n;i++){
        sum+=a[i];
    }
    ll sub=0;
    ll mex3=0;
    //cout<<l<<r;
    for(ll i=l+1;i<r;i++){
        sub+=a[i];
        mp2[a[i]]++;
    }
    while(mp2[mex3]>0){
        mex3++;
    }
    if(mex3!=mex||mex2!=mex||mex1!=mex){
        cout<<-1<<" "<<-1<<endl;    
        return;
    }
    ll mini=sum-sub;
    vector<ll>count(mex,0);
    for(ll i=l+1;i<r;i++){
        if(a[i]<mex){
            count[a[i]]++;
        }
       
    }
    l++;
    r--;
    ll mini=0;
    while(l<r){
        
        if(a[l]<mex){
            if(count[a[l]]>1){
                count[a[l]]--;
                sub-=a[l];
                sum+=a[l];
                
            }
            else{
                break;
            }
            
        }
        else{
            sum+=a[l];
            sub-=a[l];
            mini=min(mini,sum-sub);
        }
        l++;
    }
    while(r>=l){
        if(a[r]<mex){
            if(count[a[r]]>1){
                count[a[r]]--;
                sub-=a[r];
                sum+=a[r];
                
            }
            else{
                break;
            }
            
        }
        else{
            sum+=a[r];
            sub-=a[r];
        }
        r--;
    }
    ll maxi=sum-sub;

    
    cout<<mini<<" "<<maxi<<endl;


    
    
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
        delete s; 

        }
    return 0;
}