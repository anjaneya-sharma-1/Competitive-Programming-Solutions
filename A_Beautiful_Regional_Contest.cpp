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
    vector<ll>v(n);
    set<ll>st;
    ll ok=1;
    for(int i=0;i<n;i++){
        if(i==n/2&&st.size()<3){
            ok=0;
            
        }
        ll curr;
        cin>>curr;
        if(i==n/2&&(st.find(curr)!=st.end()&&st.size()==3)){
            ok=0;
        }
        if(i<n/2){
        st.insert(curr);}
        v[i]=curr;
    }
    if(n<10){
        cout<<"0 0 0"<<endl;
        return;
    }
    if(!ok){
        cout<<"0 0 0"<<endl;
        return;
    }

    st.erase(v[n/2]);
    int k=st.size();
    ll g=1;
    ll last=1;
    for(int i=1;i<n;i++){
        if(v[i]==v[0]){
            g++;
        }
        else{
            last=i;
            break;
        }
    }
    ll curr=v[last];
    ll s=0;
    for(int i=last;i<n;i++){
        if(v[i]==curr){
            s++;
        }
        else{
            if(s>g){
                last=i;
                break;
            }
            else{
                curr=v[i];
                s++;
            }
        }
    }
    curr=v[last];
    ll b=0;
    ll fb=0;
    for(int i=last;i<n;i++){
        if(v[i]==curr){
            b++;
        }
        else{
            if(b+g+s>n/2){
                break;
            }
            if(b>g){
                fb=b;
            }
            
                curr=v[i];
                b++;
            
        }
    }
    if(fb+g+s>n/2||g==0||s==0||fb==0||fb<=g){
        cout<<"0 0 0"<<endl;
    }
    else{
        cout<<g<<" "<<s<<" "<<fb<<endl;
    }


    
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