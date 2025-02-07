#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,m;
    cin>>n>>m;
    vector<string>grid(n);
    pair<ll,ll>start;
    pair<ll,ll>end;
    for(int i=0;i<n;i++){
        cin>>grid[i];
        for(int j=0;j<m;j++){
            if(grid[i][j]=='S'){
                start={i,j};
            }
            if(grid[i][j]=='T'){
                end={i,j};
            }
        }
    }
    vector<vector<ll>>dist(n,vector<ll>(m,INT_MAX));
    priority_queue<pair<ll,pair<vector<ll>,pair<ll,ll>>>,vector<pair<ll,pair<vector<ll>,pair<ll,ll>>>>,greater<pair<ll,pair<vector<ll>,pair<ll,ll>>>>>pq;
    pq.push({0,{vector<ll>(4,0),start}});
    while(!pq.empty()){
        auto curr=pq.top();
        pq.pop();
        ll d=curr.first;
        vector<ll>dir=curr.second.first;
        pair<ll,ll>pos=curr.second.second;
        ll i=pos.first;
        ll j=pos.second;
        if(dist[i][j]<=d){
            continue;
        }
        dist[i][j]=d;
        if(pos==end){
            cout<<d<<endl;
            return;
        }
         vector<ll>temp=dir;
        if(i-1>=0&&grid[i-1][j]!='#'&&dir[0]<3){
           
            temp[0]++;
            temp[1]=0;
            temp[2]=0;
            temp[3]=0;
            pq.push({d+1,{temp,{i-1,j}}});
            temp={dir};
        }
        if(i+1<n&&grid[i+1][j]!='#'&&dir[1]<3){
            
            temp[1]++;
            temp[0]=0;
            temp[2]=0;
            temp[3]=0;

            pq.push({d+1,{temp,{i+1,j}}});
            temp={dir};
        }
        if(j-1>=0&&grid[i][j-1]!='#'&&dir[2]<3){
            
            temp[2]++;
            temp[0]=0;
            temp[1]=0;
            temp[3]=0;
            pq.push({d+1,{temp,{i,j-1}}});
            temp={dir};
        }
        if(j+1<m&&grid[i][j+1]!='#'&&dir[3]<3){
            
            temp[3]++;
            temp[0]=0;
            temp[1]=0;
            temp[2]=0;
            pq.push({d+1,{temp,{i,j+1}}});
            temp={dir};
        }

    }
    cout<<-1<<endl;
    
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