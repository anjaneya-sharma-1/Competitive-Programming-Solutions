#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll l,r,g;
    cin>>l>>r>>g;

    l=(l/g +(l%g!=0))*g;
    r=(r/g)*g;
    if(l>r||(l==r&&l!=g)){
        cout<<-1<<" "<<-1<<endl;
    }
    else{
        if(l==r){
            cout<<g<<" "<<g<<endl;
            return;
        }
       
        ll A=l;
        ll B=l+g;
        ll iters=0;
        for(int i=l;i<=r;i+=g&&iters <=30,iters++){
            if(r-i<=B-A){
                break;
            }
            ll i2=0;
            for(int j=r;j>=i&&i2<=30;j-=g,i2++){
                if(__gcd(i,j)==g){
                    if(j-i>B-A){
                        
                        A=i;
                        B=j;
                        break;
                    }
                }
                if(j-i<B-A){
                    break;}
            }
            
        }
        cout<<A<<" "<<B<<endl;
        
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