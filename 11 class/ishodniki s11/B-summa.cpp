//

#include<bits/stdc++.h>
using namespace std;
vector<int> getS(int a){
    vector<int> verr ;
    while(a > 0){
        verr.push_back(a % 10);
        a /= 10;
    }
    return verr;
}
int main(){
    int a , b ;
    cin >> a >> b ;
    int mx = 1 ;
    vector<int> aNumbers = getS(a);
    vector<int> bNumbers = getS(b);
    vector<int> answer;
    for(auto i : aNumbers)
        mx = max(mx , i);
    for(auto i : bNumbers)
        mx = max(mx , i);
    mx ++ ;
    while (aNumbers.size() < bNumbers.size())
        aNumbers.push_back(0);
    while (bNumbers.size() < aNumbers.size())
        bNumbers.push_back(0);
    aNumbers.push_back(0) , bNumbers.push_back(0);
    int ost = 0 ;
    for(int i = 0 ; i < aNumbers.size() ; i++){
        answer.push_back((aNumbers[i] + bNumbers[i] + ost) % mx);
        ost = (aNumbers[i] + bNumbers[i] + ost) / mx;
    }
    while (answer.back() == 0)
        answer.pop_back();
    cout << answer.size();
}

