#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main(){

	int n, m;
	cin >> n >> m;

	vector<pair<int, int>> GBC_first_log;
	vector<pair<int, int>> GBC_second_log;

	int exceed_max = 0;

	int GBC_h = 0;
	for(int i=0; i<n; i++){
		int GBC_m, GBC_mps;
		cin >> GBC_m >> GBC_mps;
		GBC_h += GBC_m;
		GBC_first_log.push_back(make_pair(GBC_h, GBC_mps));
	}

	GBC_h = 0;
	for(int i=0; i<m; i++){
		int GBC_m, GBC_mps;
		cin >> GBC_m >> GBC_mps;
		GBC_h += GBC_m;
		GBC_second_log.push_back(make_pair(GBC_h, GBC_mps));
	}

	int f_point = 0, s_point = 0;
	for(int i=0; i<=GBC_h;){
		
		if(f_point >= GBC_first_log.size() && s_point >= GBC_second_log.size()) break;
		if(f_point >= GBC_first_log.size()) f_point--;
		if(s_point >= GBC_second_log.size()) s_point--;
		

		if(exceed_max < (GBC_second_log[s_point].second - GBC_first_log[f_point].second)) exceed_max = GBC_second_log[s_point].second - GBC_first_log[f_point].second;
		

		if(GBC_first_log[f_point].first < GBC_second_log[s_point].first){
			f_point++;
			i = GBC_first_log[f_point].first;
		}
		else if(GBC_first_log[f_point].first > GBC_second_log[s_point].first){
			s_point++;
			i = GBC_second_log[s_point].first;
		}
		else{
			f_point++;
			s_point++;
			i = GBC_first_log[f_point].first;
		}

	}

	cout << exceed_max;

	return 0;
}