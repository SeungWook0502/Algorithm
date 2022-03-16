#include <iostream>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	
	int max = 246912;
	
	vector<bool> n_list(max, true);
	n_list[0]=false;
	
	for(int i=2; i<=max; i++){
		for(int j=2; i*j<=max; j++){
			n_list[i*j-1] = false;
		}
	}
	
	while(true){
		int n;
		cin >> n;
		if(n == 0) break;
		int j=1;
		int cnt=0;
		for (vector<bool>::iterator i = n_list.begin(); i<n_list.end(); i++){
			if(j<=n*2){
				if(*i && j>n) cnt++;
			}
			if(j>n*2) break;
			j++;
		}
		cout << cnt << '\n';
	}
	return 0;
}
