#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    vector<ll>arr(n);
    int num=1;
    int l=0;
    int r=n-1;
    if(n<=60&&k>(1LL<<(n-1))){
        cout<<-1<<endl;
        return;
    }
    for(int ll i=1;i<=n;i++){
        if(n - 1 - i > 60 ||k<=(1LL<<(n-i-1))){
            arr[l]=num;
            l++;
            num++;
        }
        else{
            arr[r]=num;
            r--;
            num++;
            k-=(1LL<<(n-i-1));}
    }
  
    
   
        for(ll i=0;i<n;i++){
            cout<<arr[i]<<" ";
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