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
    map<ll,ll>m;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll curr;
        cin>>curr;
        v.push_back(curr);
    }
    ll maxi=*max_element(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        ll curr =maxi+1;
        //cout<<maxi<<i<<" ";
        ll t=k-(curr-v[i]);
        if(t==0&&i+1<n&&v[i+1]>=curr-1){
            maxi=curr;
        }
        for(int j=1;j+i<n&&t>0;j++){
            ll d =curr-j;
            if(v[i+j]>=d){
                maxi=curr;
                while(t-j>=0&&d<v[i+j]){
                    t-=j;
                    d++;
                    maxi++;
                    curr++;
                }
                if(t-j-1>=0){
                    curr++;
                    d++;
                    t-=j;
                    t-=1;
                }
                else{
                    break;
                }
            }
            t-=(d-v[i+j]);
            if(t==0&&i+j+1<n&&v[i+j+1]>=d-1){
                maxi=curr;
                
                break;
            }
            if(t<=0){
                break;
            }
               
        }        
    }
    cout<<maxi<<endl;
    
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