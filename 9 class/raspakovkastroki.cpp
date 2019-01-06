#include<iostream>
 #include<string.h>
#include<fstream>
 using namespace std;
  int main(){     int n=0;  int res=1,cur=0;
  string u;
  ofstream out("output.txt");
  ifstream in("input.txt");
  in>>u;
   for(int i=0;i<u.size();i++)
        { if (u[i]-48>=0&&u[i]-48<=9)
         { if (u[i+1]-48>=0&&u[i+1]-48<=9)
         { res=((u[i]-48)*10)+(u[i+1]-48);
   i++; i++;
    }
     else { res=u[i]-48; i++; }
     } for(int y=0;y<res;y++)
      { out<<u[i]; cur++;
if (cur>=40) { out<<endl;
cur=0; }   }
if (cur>=40) { out<<endl; }
 res=1;
  }           }
