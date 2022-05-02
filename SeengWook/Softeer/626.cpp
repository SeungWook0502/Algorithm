#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

bool pair_compare(const pair<string, vector<bool>> & a, const pair<string, vector<bool>> & b);
int find_room(vector<pair<string, vector<bool>>> roominfo, string roomname);

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	vector<bool> roomtime(9,true);
	vector<pair<string, vector<bool>>> roomname;

	int n, m;
	cin >> n >> m;

	for(int i=0; i<n; i++){
		string temp;
		cin >> temp;
		roomname.push_back(make_pair(temp,roomtime));
	}

	sort(roomname.begin(), roomname.end(), pair_compare);

	for(int i=0; i<m; i++){
		string temp;
		int stime, etime;
		cin >> temp >> stime >> etime;

		int roomnum = find_room(roomname, temp);
		if(roomnum == 51) continue;
		for(int j=stime; j<etime; j++) roomname[roomnum].second[j-9] = false;
	}

	for(int i=0; i<n; i++){
		cout << "Room " << roomname[i].first << ':' << '\n';

		int room_count = 0;
		for(int j=0; j<9; j++){
			if(roomname[i].second[j]){
				room_count++;
				for(int l=j+1; l<9; l++){
					if(!roomname[i].second[l]){
						j = l;
						break;
					}
					if(l+1==9) j = 9;
				}
			}
		}
		if(room_count != 0){
			cout << room_count << " available:" << '\n';
			for(int j=0; j<9; j++){
				if(roomname[i].second[j]){
					if(j==0) cout << "09" << '-';
					else cout << j+9 << '-';
					for(int l=j; l<9; l++){
						if(!roomname[i].second[l]){
							cout << l+9 << '\n';
							j = l;
							break;
						}
						if(l+1==9){
							cout << 18 << '\n';
							j = 9;
						}
					}
				}
			}
			if(i+1!=n) cout << "-----" << '\n';
		}
		else {
			if(i+1!=n) cout << "Not available" << '\n' << "-----" << '\n';
			else cout << "Not available" << '\n';
		}
		
	}

	return 0;
}

bool pair_compare(const pair<string, vector<bool>> & a, const pair<string, vector<bool>> & b){
	if(a.first < b.first) return true;
	return false;
}

int find_room(vector<pair<string, vector<bool>>> roominfo, string roomname){
	for(int i = 0; i<roominfo.size(); i++){
		if(!roominfo[i].first.compare(roomname)) return i;
	}
	return 51;
}