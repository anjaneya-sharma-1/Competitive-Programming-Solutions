#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100000
#define MOD 1000000007
 
void solve(){
    ll n,x;
    cin>>n>>x;
    ll bitn=0;
    ll bitx=0;
    ll nc=n;
    ll xc=x;
    if(x==n){
        cout<<x<<endl;
        return;
    }
    
    if(x>n||((x&n)!=x)){
        cout<<-1<<endl;
        return;
    }
    while(nc>0){
        bitn++;
        nc=nc/2;
    }
    while(xc>0){
        bitx++;
        xc=xc/2;
    }
    if(x==0){
        cout<<(ll)pow(2,bitn)<<endl;
        return;
    }
    ll count=0;
    ll ans=0; 
    for(int i=0;i<bitn;i++){
        if(((x>>i)&1)==0&&((n>>i)&1)==1){
            count=i;
        }
    }
    ll count2=0;
    for(int i=bitn-1;i>=0;i--){
        if(((x>>i)&1)==1&&((n>>i)&1)==1){
            count2=i;
            
        }
    }
    if(count<count2-1){
        cout<<(ll)pow(2,count)+n<<endl;
    }
    else{
        cout<<-1<<endl;
    }
  
 
 
    
    
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) solve();
}