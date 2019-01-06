#include<bits/stdc++.h>
using namespace std;
int main(){
string s,str="AEIOUYaeiouy";
int p,l;
getline(cin,s);
l=s.size();
p=str.find(s[l-2]);
if(p>=0)
    cout<<"YES"<<endl;
else cout<<"NO"<<endl;

}
