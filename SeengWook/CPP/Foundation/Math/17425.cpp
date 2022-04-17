#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long cnt;
	vector<int> n_list(1000000,0);

	for(int i=1; i<1000000; i++){

		for(int j=1; j<=i; j++){
			n_list[i-1] += (i/j)*j;
		}
	}

	int n, m;
	cin >> n;

	

	for(int i=1; i<n; i++){

		cin >> m;
		cout << n_list[m-1] << '\n';
	}

	return 0;
}