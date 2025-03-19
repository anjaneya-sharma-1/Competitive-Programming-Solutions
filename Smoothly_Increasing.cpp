#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    bool check(ll a, ll b, ll c) {
    
    if(a == -1 && c == -1)
        return true;

    if(a == -1)
        return (b < c);
    
    if(c == -1)
        return (a < b);
    
    return (a < b && b < c && (b - a) < (c - b));
}

void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==2){
        cout<<"11"<<endl;
        return;
    }
    vector<ll>prev(n+2,0);
    vector<ll>suff(n+2,0);
    prev[0]=a[1]>a[0];
    ll d1=-1;
    ll d2=a[1]-a[0];
    for(int i=1;i<n-1;i++){
        prev[i]=prev[i-1]&&check(a[i-1],a[i],a[i+1]);
        if(prev[i]){
            if(d1==-1){
                d1=d2;
                d2=a[i+1]-a[i];
            }
            else{
                prev[i]=d2*d2<d1*(a[i+1]-a[i]);
            }
        }
    }
    d1=-1;
    d2=a[n-1]-a[n-2];
    suff[n-1]=a[n-2]<a[n-1];
    for(int i=n-2;i>=1;i--){
        suff[i]=suff[i+1]&&check(a[i-1],a[i],a[i+1]);
        if(suff[i]){
            if(d1==-1){
                d1=d2;
                d2=a[i+1]-a[i];
            }
            else{
                suff[i]=d2*d2<d1*(a[i+1]-a[i]);
            }
        }
    }
    string ans="";
    d1=-1;
    d2=a[1]-a[0];
    for(int i=0;i<n;i++){
        if(i==0){
            if(i+2>=n||suff[i+2]){
                ans+="1";
            }
            else{
                ans+="0";
            }
        }
        else if(i==n-1){
            if(i-2<0||prev[i-2]){
                ans+="1";
            }
            else{
                ans+="0";
            }
        }
        else{

            if((i-2>=0?prev[i-2]:1)&&(i+2<n?suff[i+2]:1)){
                if(check((i-2>=0?a[i-2]:(ll)-1),a[i-1],a[i+1])&&check(a[i-1],a[i+1],(i+2<n?a[i+2]:(ll)-1))){
                    if(d1==-1){
                        d1=d2;
                        d2=a[i+1]-a[i];
                    }
                    else{
                        if(!(d2*d2<d1*(a[i+1]-a[i-1]))){
                            d1=d2;
                            d2=a[i+1]-a[i];
                        };
                    }
                    ans+="1";
                }
                else{
                    ans+="0";
                }
            }
            else{
                ans+="0";
            }
            
        }
    }
    cout<<ans<<endl;

    
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