#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool crdi_compare(const pair<int, int> & a, const pair<int, int> & b);
bool idx_compare(const pair<int, int> & a, const pair<int, int> & b);

int main(){

	int n;
	cin >> n;

	vector<pair<int,int>> coordinates;

	for(int i=0; i<n; i++){
		int temp;
		cin >> temp;

		coordinates.push_back(pair<int, int>(i, temp));
	}

	sort(coordinates.begin(), coordinates.end(), crdi_compare);

	int cnt = 0;
	int temp = 0;
	for(vector<pair<int, int>>::iterator i = coordinates.begin(); i!=coordinates.end(); i++){
		if(temp == 0) temp = i->second;
		else if(i->second != temp){
			cnt++;
			temp = i->second;
		}
		i->second = cnt;
	}

	stable_sort(coordinates.begin(), coordinates.end(), idx_compare);

	for(auto i : coordinates) cout << i.second << ' ';

	return 0;
}

bool crdi_compare(const pair<int, int> & a, const pair<int, int> & b){
	return a.second < b.second;
}

bool idx_compare(const pair<int, int> & a, const pair<int, int> & b){
	return a.first < b.first;
}