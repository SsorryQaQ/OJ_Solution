#include <bits/stdc++.h>

#define MAX_N 10100
typedef long long i64;

using namespace std;

int W[MAX_N];
int C[MAX_N];
int dp[MAX_N];
int N,V;
void completePack(int *dp,int c,int w);

int main()
{
    freopen("F:\\github\\OJ_Solution\\POJ2393\\file.in","r",stdin);
    freopen("F:\\github\\OJ_Solution\\POJ2393\\file.out","w",stdout);

    for (int i=1;i<=N;i++)
        completePack(dp,C[i],W[i]);

    fclose(stdin);fclose(stdout);
    return 0;
}

void completePack(int *dp,int c,int w)
{
    for (int v=c;v<=V;v++)
        dp[v]=max(dp[v],dp[v-c]+w);
}