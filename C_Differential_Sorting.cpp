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
    vector<ll>v;
    int c=0;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(i!=0&&x<v.back()){
            c++;
        }
        v.push_back(x);
        
    }

    if(v.size()==1||c==0){
        cout<<0<<endl;
    }
    else if(v[n-2]>v[n-1]||v[n-2]-v[n-1]>v[n-2]||v[n-2]-v[n-1]>v[n-1]||(v[n-2]-v[n-1]==v[n-1]&&v[n-1]!=v[n-2])){
        cout<<-1<<endl;
    }
    else{   
        cout<<n-2<<endl;
        for(int i=n-2;i>0;i--){
                cout<<i<<" "<<n-1<<" "<<n<<endl;
                
            }
        }
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