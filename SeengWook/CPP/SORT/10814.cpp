#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

vector<pair<int, string>> str;

bool str_compare(const pair<int, string> & a, const pair<int, string> & b);

int main(){

	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		int age;
		string name;
		cin >> age >> name;
		if(str.empty()){
			str.assign(1, pair<int, string>(age, name));
		}
		else{
			str.push_back(pair<int, string>(age, name));
		}
	}

	sort(str.begin(), str.end(), str_compare);

	for(auto i : str) cout << i.first << ' ' << i.second << '\n';
	return 0;
}

bool str_compare(const pair<int, string> & a, const pair<int, string> & b){
	if(a.first < b.first) return true;
	else if(a.first == b.first) return true;
	return false;
}