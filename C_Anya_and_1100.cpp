#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    ll chck(const string& s, ll strt, ll end) {
    ll c=0;
    if (end > s.length()) end = s.length();
    if(strt<0) strt = 0;
    for (ll i = strt; i <= end - 4; ++i) {
        if (s.substr(i, 4) == "1100") {
            c +=1;
        }
    }
    return c;
}
void solve() {
    string s ;
    cin>>s;
    ll n = s.size();    
    ll q;
    cin>>q;
    ll c =chck(s,0,n);
    for(int j =0;j<q;j++){
        //cout<<c<<" ";
        ll i, k;
        cin>>i>>k;
        i--;
        ll h =chck(s,i-3,i+4);
         s[i]=k+'0';
        if(h==0){
            c+=chck(s,i-3,i+4);
        }
        else{
            c-=h;
            c+=chck(s,i-3,i+4);
        }
        cout<<(c<=0?"NO":"YES")<<endl;
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