#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool cmp_price(const pair<int, int> & a, const pair<int, int> & b);

int main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int bag_max, n;
	cin >> bag_max >> n;
	vector<pair<int, int>> gem_list;

	for(int i=0; i<n; i++){
		int gem_weight, gem_price;
		cin >> gem_weight >> gem_price;

		gem_list.push_back(make_pair(gem_weight, gem_price));
	}

	// sort(gem_list.begin(), gem_list.end(), cmp_price);

	int bag_price = 0;
	for(int i=0; i<gem_list.size(); i++){
		if(bag_max <= 0) break;

		if(gem_list[i].first <= bag_max){
			bag_price += gem_list[i].first * gem_list[i].second;
			bag_max -= gem_list[i].first;
			gem_list.erase(gem_list.begin()+i);
			i--;
			gem_list.shrink_to_fit();
		}
		else{
			bag_price += bag_max * gem_list[i].second;
			bag_max = 0;
		}
	}

	cout << bag_price;

	return 0;
}

bool cmp_price(const pair<int, int> & a, const pair<int, int> & b){

	if(a.second > b.second) return true;
	else{
		if(a.first < b.first) return true;
	}
	return false;
}