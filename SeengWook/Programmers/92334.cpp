#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }
 
    return answer;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;

    vector<vector<bool>> report_log(id_list.size(), vector<bool>(id_list.size(), false));
    vector<string> report_split;

    for(int i=0; i<report.size(); i++){
    	report_split = split(report[i], ' ');
    	for(int j=0; j<report_split.size(); j++){
    		auto user = find(id_list.begin(), id_list.end(), report_split[0]);
    		auto dst = find(id_list.begin(), id_list.end(), report_split[1]);

    		report_log[dst-id_list.begin()][user-id_list.begin()] = true;
    	}
    }

    vector<bool> report_list;
    for(int i=0; i<report_log.size(); i++){
    	int report_cnt = 0;
    	for(int j=0; j<report_log[i].size(); j++){
    		if(report_log[i][j]) report_cnt++;
    	}
    	if(report_cnt>=k) report_list.push_back(true);
    	else report_list.push_back(false);
    }

    answer.assign(id_list.size(), 0);
    for(int i=0; i<report_log.size(); i++){
    	for(int j=0; j<report_log[i].size(); j++){
    		if(report_log[j][i] && report_list[j]) answer[i]++;
    	}
    }

    return answer;
}

int main(){

	// vector<string> id_list = {"muzi", "frodo", "apeach", "neo"};
	// vector<string> report = {"muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"};
	vector<string> id_list = {"con", "ryan"};
	vector<string> report = {"ryan con", "ryan con", "ryan con", "ryan con"};
	int k = 2;
	vector<int> answer;

	answer = solution(id_list, report, k);

	for(int i=0; i<answer.size(); i++){
		cout << answer[i] << ' ';
	}

	return 0;
}