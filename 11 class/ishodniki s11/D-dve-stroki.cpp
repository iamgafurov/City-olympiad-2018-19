#include <bits/stdc++.h>
using namespace std ;
vector<string> getNumbers(string a){
	vector<string> numbers ;
	string c = a ;
	string d = "";
	for(int i = 0; i < a.size() ; i++){
		numbers.push_back(c + d);

		d += c[0];
		c.erase(0 , 1);
		if(numbers.back()[0] == '0')
			numbers.pop_back();
	}
	return numbers;
}

string getMaxNumber(string a){

	vector<string> numbers = getNumbers(a);

	sort(numbers.begin() , numbers.end());

	return numbers[numbers.size() - 1];
}

string getMinNumber(string b){

	vector<string> numbers = getNumbers(b);

    sort(numbers.begin() , numbers.end());

	return numbers[0];
}
string getMinus(string a , string b){

	int dop = 0 ;
	vector<int> verr ;
	string zeros = "";
	for(int i = 1 ; i <= a.size() - b.size() ; i ++){
		zeros += "0";
	}
	b = zeros + b ;
	for(int i = a.size() - 1 ; i >= 0 ; i-- ){
		int s = int(a[i]) - dop - int(b[i]);
		dop = 0 ;
		if(s < 0){
			s += 10 ;
			dop = 1 ;
		}
		verr.push_back(s);
	}
	
	while(verr.size() > 1 && verr.back() == 0){
		verr.pop_back();
	}
	reverse(verr.begin() , verr.end());
	string minus = "";
	for(int i : verr){
		minus += char(i + 48);
	}
	return minus;
}
int main() {
	string a , b ;
	cin >> a >> b ;
	a = getMaxNumber(a);
	b = getMinNumber(b);
	if(a.size() > b.size()){
		cout << getMinus(a , b);
	}
	else if(a.size() < b.size()){
		cout << "-" + getMinus(b , a);
	}
	else{
		if(a < b){
			cout <<"-" + getMinus(b , a);
		}
		else cout << getMinus(a , b);
	}
}