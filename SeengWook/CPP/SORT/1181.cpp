#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

bool str_compare(string a, string b);

int main(){

	int n;
	cin >> n;

	vector<string> str;

	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		if(str.empty()) str.assign(1,s);
		else{
			auto it = find(str.begin(), str.end(), s);
			if(it == str.end()){
				str.push_back(s);
			}
		}
	}

	sort(str.begin(), str.end(), str_compare);

	for(auto i=str.begin(); i!=str.end(); i++){
		cout << *i << '\n';
	}
	return 0;
}

bool str_compare(string a, string b){
	if(a.length() < b.length()) return true;
	else if(a.length() == b.length()){
		if(a.compare(b)<0) return true;
	}
	return false;
}