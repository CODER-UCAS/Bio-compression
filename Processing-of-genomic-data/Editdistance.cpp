//
// Created by WLSYH on 2021/4/26.
//

#include<iostream>
#include<cstring>

using namespace std;
const int N=1010;

int dp[N][N];
int cnt[N];
string str[N];
int n,m;

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>str[i];
    string s;
    int t,a;
    for(int i=1;i<=m;i++)
    {
        a=0;
        memset(dp,0,sizeof(dp));
        cin>>s>>t;
        for(int j=1;j<=n;j++)
        {
            for(int k=0;k<=str[j].length();k++)
                dp[k][0]=k;
            for(int k=0;k<=s.length();k++)
                dp[0][k]=k;
            for(int k=1;k<=str[j].length();k++)
            {
                for(int l=1;l<=s.length();l++)
                {
                    dp[k][l]=min(dp[k-1][l]+1,dp[k][l-1]+1);
                    dp[k][l]=min(dp[k-1][l-1]+(str[j][k-1]!=s[l-1]),dp[k][l]);
                }
            }
            if(dp[str[j].length()][s.length()]<=t)
                a++;
        }
        cout<<a<<endl;
    }
    return 0;
}