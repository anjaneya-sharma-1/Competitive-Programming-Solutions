#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    string s;
    cin>>s;
    vector<int>v(26,0);
    int count=0;
    for(int i=0;i<s.size();i++){
        if(v[s[i]-'a']==0){
            count++;
        }
        v[s[i]-'a']++;
    }
    if(count==1){
        cout<<"YES"<<endl;
        return;
    }
    char st=s[0];
    string k;
    k+=st;
    vector<int>l(26,0);
    for(int i=1;i<s.size();i++){
        if(s[i]==st){
            break;
        }
        else{
            k+=s[i];
            if(l[s[i]-'a']==1){
                cout<<"NO"<<endl;
                return;
            }
            l[s[i]-'a']++;
        }
    }
    int h=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=k[h]){
            cout<<"NO"<<endl;
            return;
        }
        h=(h+1)%k.size();
    }
    cout<<"YES"<<endl;
    
    
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