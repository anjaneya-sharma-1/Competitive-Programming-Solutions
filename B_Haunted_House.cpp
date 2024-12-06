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
    reverse(s.begin(),s.end());
    string s2 =s;
    vector<ll>v;
    v.push_back(0);
    int r =1;
    ll count=0;
    for(int i=0;i<n;i++){
        ll total=v.back();
        if(count==0){count+=(s[i]=='1');}
        int prev= r;
        if(total==-1){
            cout<<-1<<" ";
            continue;
        }
        if(count==0){
            cout<<0<<" ";
            r++;
            continue;
        }
        while(s[r]=='1'&&r<n){
            count++;
            r++;
        }
        if(r>=n){
            cout<<-1<<" ";
            v.push_back(-1);
            continue;
        }
        if(count>0){
            total+=count;
            s2[r]='1';
            cout<<total<<" ";
            v.push_back(total);
            r++;
            continue;
        }

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