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
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<1<<endl;
        cout<<1<<endl;
        return;
    }
    vector<ll>ans1(n);
    vector<ll>ans2(n);
    vector<ll>vis1(n+1,0);
    vector<ll>vis2(n+1,0);
    for(ll i=0;i<n;i++){
        if(vis1[a[i]]==0){
            ans1[i]=a[i];
            ans2[i]=a[i];
            vis1[a[i]]=1;
            vis2[a[i]]=1;
        }
    }
  
    ll k=1;
    for(ll i=0;i<n;i++){
        if(ans1[i]==0){
            while(vis1[k]==1){
                k++;
            }
            ans1[i]=k;
            vis1[k]=1;
        }
        

    }
    stack<ll>st;
    vis2[0]=1;
    ll j=0;
    for(ll i=0;i<n;i++){
        if(ans2[i]){
            while(j!=ans2[i]){
                if(vis2[j]==0){
                    st.push(j);
                    vis2[j]=1;
                }
                j++;
            }
        }
        else{
            ans2[i]=st.top();
            st.pop();
        }
    }
    




    for(ll i=0;i<n;i++){
        cout<<ans1[i]<<" ";
    }
    cout<<endl;
    for(ll i=0;i<n;i++){
        cout<<ans2[i]<<" ";
    }
    cout<<endl;

    
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