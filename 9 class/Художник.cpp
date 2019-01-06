#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n,x1,y1,x2,y2 ,m,k,s=0;
int main(){


cin>>n>>m>>k;
for(int t=0;t<k;t++)
{cin>>x1>>y1>>x2>>y2;
 for(int i=x1;i<x2;i++)
  for(int j=y1;j<y2;j++)
a[i][j]=1;
}
for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
if(a[i][j]==0)s++;
}}
cout<<s<<endl;
}
