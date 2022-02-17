#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int m, n, min;
	cin >> m >> n;
	bool fst = true;
	int sum = 0;
	vector<int> n_list;
	
	for(int i=1; i<=n; i++){
		bool cmp = true;
		
		if(i != 1){
			for(int j=1; j<i; j++){
				if(i%j == 0 && j != 1){
					cmp = false;
					break;
				}
			}
		}
		if(cmp && i != 1) n_list.push_back(i);
	}
	
	
	for (vector<int>::iterator i = n_list.begin(); i<n_list.end(); i++){
		cout << *i << ' ';
	}

	
	for(int i = m; i<=n; i++){
		if ( std::find(n_list.begin(), n_list.end(), i) != n_list.end() ){
			if(fst){
				min = i;
				fst = false;
			}
			sum += i;
		}
	}
	
	if(sum == 0) cout << -1;
	else cout << sum << '\n' << min << endl;
	return 0;
}
