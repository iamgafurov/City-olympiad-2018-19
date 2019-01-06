#include<iostream>
using namespace std;
int main() {

int n,k,c=0,x=0,a[550]={0};
cin>>n>>k;
while (c<n-1) {
for (int i=1;i<=k;i++) {
x++;
if (x>n)
x=x-n;
if (a[x]==1) {
while (a[x]==1) {
x++;
if (x>n)
x=x-n;
}
}
}
a[x]=1;
c++;
}
for (int i=1;i<=n;i++) {
if (a[i]==0)
cout<<i;
}
///*/*system("pause")*/*/;
return 0;
}
