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
    vector<int>arr(n);
    ll c=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i!=0&&((arr[i]==3&&arr[i-1]==2)||(arr[i]==2&&arr[i-1]==3))&&c){
            cout<<"Infinite"<<endl;
            c=0;
        }
    }
    if(c){
        cout<<"Finite"<<endl;
        ll ans=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==1){
                if(arr[i+1]==2){
                    ans+=3;
                }
                else if(arr[i+1]==3){
                    ans+=4;
                }
            }
            else if(arr[i]==2){
                if(arr[i+1]==1){
                    ans+=3;
                }
            }
            else if(arr[i]==3){
                if(arr[i+1]==1){
                    ans+=4;
                }
            }
        }
        for(int i=0;i<n-2;i++){
            if(arr[i]==3&&arr[i+1]==1&&arr[i+2]==2){
                ans--;
            }
        }
        cout<<ans<<endl;
    }
    

    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}