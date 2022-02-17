#include <iostream>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int max = 10000;
	
	vector<bool> n_list(max, true);
	n_list[0]=false;
	
	for(int i=2; i<=max; i++){
		for(int j=2; i*j<=max; j++){
			n_list[i*j-1] = false;
		}
	}
	
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		for(int j=x/2; j>=2; j--){
			if(n_list[j-1] && n_list[x-j-1]){
				cout << j << ' ' << x-j << '\n';
				break;
			}
		}
	}
	
	return 0;
}
