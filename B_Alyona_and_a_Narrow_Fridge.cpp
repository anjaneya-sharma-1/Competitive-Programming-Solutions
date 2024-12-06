#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll chck(vector<ll>&v,ll h,ll n,ll m)
    {
        vector<ll>a= {v.begin(),v.begin()+m};
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        for(int i=0;i<m;i+=2)
        {
            h-=a[i];
            if(h<0)
            return 0;
        }
        
    
    return 1;
    }
void solve() {
    ll n,h;
    cin>>n>>h;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    int l =1;
    int r = n;
    int maxi=0;
    while(l<=r){
        int m = (l+r)/2;
       
        if(chck(a,h,n,m)){
         
            maxi=m;
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    
    cout<<maxi<<endl;
}

};
int main(){
    ll t=1;

    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}