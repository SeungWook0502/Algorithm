#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct Mode{
	int num;
	int cnt = 0;
}Mode;


int negative(int n);
bool mode_compare(const Mode & a, const Mode & b);

int main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int n_list[n];
    int sum = 0;
	Mode cnt_list[n];

    for(int i=0; i<n; i++){

    	cin >> n_list[i];

    	sum += n_list[i];
    	int cnt_cmp = i;
    	for(int j=0; j<i; j++){
    		if(cnt_list[j].num == n_list[i]){
    			cnt_cmp = j;
    			break;
    		}
    	}
		cnt_list[cnt_cmp].num = n_list[i];
		cnt_list[cnt_cmp].cnt++;
    	
    }

    //mean
    if(((float)sum/(float)n) > 0) cout << int(((float)sum/(float)n)+0.5) << '\n';
    else cout << int(((float)sum/(float)n)-0.5) << '\n';

    //median
    sort(n_list, n_list+n);
    cout << n_list[n/2] << '\n';

    //mode
    sort(cnt_list, cnt_list+n, mode_compare);
    if(cnt_list[0].cnt == cnt_list[1].cnt) cout << cnt_list[1].num << '\n';
    else cout << cnt_list[0].num << '\n';

    //range
    if((sizeof n_list/4) != 1 && n_list[0] != 0 && n_list[n-1] != 0) cout << negative(n_list[n-1] - n_list[0]) << '\n';
    else if((sizeof n_list/4) == 1) cout << '0' << '\n';
    else if(n_list[0] == 0) cout << negative(n_list[n-1]) << '\n';
    else if(n_list[n-1] == 0) cout << negative(n_list[0]) << '\n';

	return 0;
}

int negative(int n){

	if(n>0) return n;
	else return n*-1;

}

bool mode_compare(const Mode & a, const Mode & b){
	if(a.cnt > b.cnt) return true;
	else if(a.cnt == b.cnt){
		if(a.num < b.num) return true;
	}
	return false;
}