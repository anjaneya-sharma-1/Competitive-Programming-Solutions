#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    double n,k;
    cin>>n>>k;
    double sum = 0;

    for(double i =1;i<=n;i++){
        double curr;
        cin>>curr;
            double mini  = min({i,n-i+1,n-k+1});
            if(mini<k){
                sum+=curr*mini;
            }
            else{
                sum+=curr*k;
            }
    }
    double res = sum/((n-k+1));
    cout<<fixed<<setprecision(6)<<(double)sum/((n-k+1))<<endl;
    
}

};
int main(){
    ll t=1;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}