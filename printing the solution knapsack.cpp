#include<bits/stdc++.h>
#define fr(i,a,n) for(ll i=a;i<n;i++)
#define YES cout<<"YES"<<endl
#define all(v) v.begin(),v.end()
#define NO cout<<"NO"<<endl
#define pb(x) emplace_back(x)
#define fastio std::ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define vi vector<ll>
#define mi map<ll,ll>
#define pi pair<ll,ll>
#define what(x) cout<< ": " << (#x) << " = " << (x) << endl;
using namespace std;
using ll =long long;
ll n;
float v[100][5];
ll dp[105][10005];
ll rec(int i,int e)
{
          if(i>n)return 0;

          if(dp[i][e]!=-1)return dp[i][e];

          ll x=0,y=0;

          for(int j=i+1;j<=n;j++)
          {
                    if(i==j)continue;
                    if(e<v[j][2])
                    {
                              //cout<<e<<" "<<v[j][2]<<endl;
                              x=max(x,(ll)(v[j][4]+rec(j,v[j][3])));
                    }
                    y=rec(j,v[i][3]);
          }

           return dp[i][e]=max(x,y);
}


void print_solution(int i,int endtime , int changed_attendenceafterminus)
{
          if(i>n)return;

          if(dp[i][endtime]==changed_attendenceafterminus)
          {
                    print_solution(i+1,endtime,changed_attendenceafterminus);
          }
          else
          {
                    cout<<i<<" ";
                    print_solution(i+1,v[i][3],changed_attendenceafterminus-v[i][4]);
          }

}



int main()
{
          while(1)
          {
                    cin>>n;
                    if(n==0)return 0;
                    memset(dp,-1,sizeof dp);


                    for(int i=1;i<=n;i++)
                    {
                              float x,s,e,man;
                              cin>>x>>s>>e>>man;
                              ll a=x;
                              v[a][1]=a;
                              v[a][2]=s;
                              v[a][3]=e;
                              v[a][4]=man;


                    }
                    int ans=rec(0,0);

                    print_solution(1,0,ans);
                    cout<<ans<<endl;

          }



}
