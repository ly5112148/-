#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
string s[6];
int n;
int vis[6];
int ans;
void dfs(int p)
{
    if(p == n)
    {
        ans++;
        return;
    }
    for(int i =0; i < s[p].length(); i++)
    {
        if(vis[s[p][i]-'0'] == 0)
        {
            vis[s[p][i]-'0'] = 1;
            dfs(p+1);
            vis[s[p][i]-'0'] = 0;
        }
    }
}
int main()
{
    while(cin>>n)
    {
        ans =0;
        memset(vis,0,sizeof(vis));
        for(int i =0; i < n; i++)
            cin>>s[i];
        dfs(0);
        cout<<ans<<endl;
    }
}
