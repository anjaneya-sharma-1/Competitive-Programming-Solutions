#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    ll q,t;
    cin>>t>>q;
    
    ll n=s1.size();
    vector<ll>j(q,-1);
    ll time=0;
    string curr1=s1;
    string curr2=s2;
    ll temp=q;
    ll diff=0;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            diff++;
        }
    }
    while(temp--){
        ll type;
        cin>>type;
        if(type==1){
            ll pos;
            cin>>pos;
            pos--;
            
            diff-=((s1[pos]!=s2[pos]));
            if(time+t-1<q){
            j[time+t-1]=s1[pos]!=s2[pos];}
        }
        else if(type==2){
            ll w1;
            ll pos1;
            ll w2;
            ll pos2;
            cin>>w1>>pos1>>w2>>pos2;
            ll curr=(s1[pos1-1]!=s2[pos1-1])+(s1[pos2-1]!=s2[pos2-1]);
            swap(((w1==1)?s1[pos1-1]:s2[pos1-1]),((w2==1)?s1[pos2-1]:s2[pos2-1]));
            diff+=((s1[pos1-1]!=s2[pos1-1])+(s1[pos2-1]!=s2[pos2-1])-curr);
        }
        else{
            cout<<(diff==0?"YES":"NO")<<endl;
        }
        if(j[time]!=-1){
            diff+=j[time];
        }
        


        time++;

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