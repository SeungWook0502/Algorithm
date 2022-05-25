#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;

    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());

    int zero = 0;
    int eqls = 0;

    for(int i=0; i<lottos.size(); i++){
        for(int j=0; j<lottos.size(); j++){
            if(lottos[i] == win_nums[j]){`
                eqls++;
                break;
            }
            else if(lottos[i] == 0){
                zero++;
                break;
            }
            else if(lottos[i] < win_nums[j]) break;
        }
    }

    if(eqls+zero<2) answer.push_back(6);
    else if(eqls+zero>6) answer.push_back(1);
    else answer.push_back(7-(eqls+zero));

    if(eqls<2) answer.push_back(6);
    else answer.push_back(7-eqls);

    for(int i=0; i<answer.size(); i++) cout << answer[i] << ' ';

    return answer;
}

int main(){

    vector<int> lottos = {45, 4, 35, 20, 3, 9};
    vector<int> win_nums = {20, 9, 3, 45, 4, 35};

    lottos = solution(lottos, win_nums);

    return 0;
}