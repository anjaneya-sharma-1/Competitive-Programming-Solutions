#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    bool check(string x,string s){
        if(x.size()<s.size()){
            return 0;
        }
        for(int i=0;i<=x.size()-s.size();i++){
            bool chck=1;
            for(int j=0;j<s.size();j++){
                if(s[j]!=x[i+j]){
                    chck=0;
                    break;
                }
            }
            if(chck){
                return 1;
            }
        }
        return 0;
    }
void solve() {
    ll n,m;
    cin>>n>>m;
    string x ,s;
    cin>>x>>s;
    ll t=0;
    while(x.size()<=10*s.size()||t<=1){
        if(check(x,s)){
            cout<<t<<endl;
            return;
        }
        t++;
        x+=x;
    }
    cout<<-1<<endl;

    
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
      

        }
    return 0;
}