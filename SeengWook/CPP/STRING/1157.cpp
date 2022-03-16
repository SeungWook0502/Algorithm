#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

	string s;
	cin >> s;
	vector<int> v(26,0);

	for(int i=0; i<s.length(); i++){
		v[int(tolower(s[i]))-97]++;
	}

	int n = 0;
	int m;
	bool b = false;

	for(int i=0; i<v.size(); i++){
		if(n<v[i]){
			n = v[i];
			m = i;
			b = true;
		}
		else if(n==v[i]){
			b = false;
		}
	}
	if(b){
		cout << (char)(m+65) << endl;
	}
	else{
		cout << "?" << endl;
	}
	return 0;
}