#include <iostream>
#include <vector>
#include <utility>

using namespace std;

#define O true
#define X false

void f_num_slice(int num, int num_list[]);

bool g_digitnum[11][7] = {
		{O,O,O,X,O,O,O}, // 0
		{X,X,O,X,X,O,X}, // 1
		{O,X,O,O,O,X,O}, // 2
		{O,X,O,O,X,O,O}, // 3
		{X,O,O,O,X,O,X}, // 4
		{O,O,X,O,X,O,O}, // 5
		{O,O,X,O,O,O,O}, // 6
		{O,O,O,X,X,O,X}, // 7
		{O,O,O,O,O,O,O}, // 8
		{O,O,O,O,X,O,O}, // 9
		{X,X,X,X,X,X,X}  // off
	};


int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<int,int>> beaf_numlist;
	int t;
	cin >> t;

	for(int i=0; i<t; i++){
		int before, after;
		int before_num[5] = {-1,-1,-1,-1,-1};
		int after_num[5] = {-1,-1,-1,-1,-1};
		int diff_cnt = 0;

		cin >> before >> after;
		beaf_numlist.push_back(make_pair(before,after));

		f_num_slice(beaf_numlist[i].first, before_num);
		f_num_slice(beaf_numlist[i].second, after_num);

		for(int j=0; j<5; j++){
			for(int l=0; l<7; l++){
				if(g_digitnum[before_num[j]][l] != g_digitnum[after_num[j]][l]) diff_cnt++;
			}
		}

		cout << diff_cnt << '\n';
	}

	return 0;
}

void f_num_slice(int num, int num_list[]){

	int num_point = 0;
	while(num != 0){
		num_list[num_point] = num%10;
		num /= 10;
		num_point++;
	}
	for(;num_point<5;num_point++) num_list[num_point] = 10;
}