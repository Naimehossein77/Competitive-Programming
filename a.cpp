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
#define what(x) cerr << "Line " << __LINE__ << ": " << (#x) << " = " << (x) << endl;
using namespace std;
using ll =long long;


int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;

    	vi v;
    	for(int i=9;i>0;i--)
    	{
    		if(n-i>=0)n-=i,v.pb(i);
    	}
    	sort(all(v));
    	if(n==0){
    	for(auto x:v)cout<<x; cout<<endl;}
    	else cout<<-1<<endl;




    }

}

























