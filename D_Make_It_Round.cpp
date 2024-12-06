#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
   
        ll count2=0;
        ll count5=0;
        ll temp=n;
        while(temp%2==0){
            temp/=2;
            count2++;
        }
        temp=n;
        while(temp%5==0){
            temp/=5;
            count5++;
        }
        ll curr=1;
        while(curr*2<=m&&count2<count5){
            count2++;
            curr*=2;
        }
        while(curr*5<=m&&count5<count2){
            count5++;
            curr*=5;
        }
        while(curr*10<=m){
            curr*=10;
        }
        if(curr==1){
            cout<<n*m<<endl;
            return;
        }
        ll k =m/curr;
      
        cout<<curr*n*k<<endl;
    
   
    
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