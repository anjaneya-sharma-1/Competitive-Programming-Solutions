#include <bits/stdc++.h>

using uint = unsigned;
using bol = bool;

const uint T=2000;
const uint R=200000;

uint Ord[R+5];
uint Nxt(uint p,uint o)
{
    uint x=p/T,y=p%T;
    if(o&1)y=y/3*3+3-y%3;
    if(o&2)x=x/3*3+3-x%3;
    return x*T+y;
}

bol G[2][T*T];uint Ans[2];

int main()
{
#ifdef MYEE
    freopen("QAQ.in","r",stdin);
    freopen("QAQ.out","w",stdout);
#endif
    for(uint i=2,tp=0;i<T&&tp<R;i++)if(i%3==2)
    {
        for(uint x=1;x<i&&tp<R;x+=3)Ord[tp++]=x*T+i-x;
    }
    else if(!(i%3))
    {
        for(uint x=1;x<=i-2&&tp<R;x++)
            if(x%3==1)Ord[tp++]=x*T+i-x;
            else if(x%3==2)Ord[tp++]=x*T+i-x-2,Ord[tp++]=x*T+i-x;
        Ord[tp++]=(i-1)*T+1;
    }
    uint t;scanf("%u",&t);
    while(t--)
    {
        uint q;scanf("%u",&q);
        for(uint i=0;i<q*4;i++)G[0][Ord[i]]=G[1][Ord[i]]=0;
        Ans[0]=Ans[1]=0;
        while(q--)
        {
            uint t;scanf("%u",&t);while(G[t][Ord[Ans[t]]])Ans[t]++;
            t=Ord[Ans[t]];printf("%u %u\n",t/T,t%T);
            G[1][t]=1;for(uint o=0;o<4;o++)G[0][Nxt(t,o)]=1;
        }
    }
    return 0;
}
