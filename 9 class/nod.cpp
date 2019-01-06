#include<bits/stdc++.h>
using namespace std;
int main(){
__int64 a,b;

while(cin>>a>>b){
do{
        if(a>b)
        a=a%b;
else b=b%a;

}while(a*b>0);
cout<<a+b<<endl;}
}
