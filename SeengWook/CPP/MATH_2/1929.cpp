#include <iostream>
#include <vector>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	
	int m, n;
	cin >> m >> n;
	
	vector<bool> n_list;
	n_list.assign(n,true);
	
	for(int i=2; i<=n; i++){
		for(int j=2; i*j<=n; j++){
			n_list[i*j-1] = false;
		}
	}
	int j=1;
	for (vector<bool>::iterator i = n_list.begin(); i<n_list.end(); i++){
		if(m<=j && n>=j && j!=1){
			if(*i) cout << j << '\n';
		}
		j++;
	}
	return 0;
}
