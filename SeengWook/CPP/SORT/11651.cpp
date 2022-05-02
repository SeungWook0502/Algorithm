#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int>> v;

bool pair_compare(const pair<int, int> & a, const pair<int, int> & b);

int main(){

	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;
		v.push_back(pair<int, int>(a, b));
	}

	sort(v.begin(), v.end(),pair_compare);

	for(auto i : v) cout << i.first << ' ' << i.second << '\n';

	return 0;
}

bool pair_compare(const pair<int, int> & a, const pair<int, int> & b){
	if(a.second < b.second) return true;
	else if(a.second == b.second){
		if(a.first < b.first) return true;
	}
	return false;
}