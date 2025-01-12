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
    string s;
    cin>>s;
    ll a=0,b=0;
    ll c=1;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            a++;
        }
        else{
            b++;

        }
    }
    vector<ll>v;
    if(a!=b){
        cout<<-1<<endl;
        return;
    }
    a=0;b=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            if(b>0){
                b--;
                if(!v.empty() && v.back()==1){
                    c=2;
                }
                v.push_back(2);

               
                continue;
            }
            a++;
            if(!v.empty() && v.back()==2){
                    c=2;
                }
            v.push_back(1);
        }

        else if(a>0){
            a--;
            if(!v.empty() && v.back()==2){
                    c=2;
                }
            v.push_back(1);
        }
        else{
            if(!v.empty() && v.back()==1){
                    c=2;
                }
            v.push_back(2);
            b++;
        }
        
    }
    cout<<c<<endl;
    if(c==1){
        for(int i=0;i<v.size();i++){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
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