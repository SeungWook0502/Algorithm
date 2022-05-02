#include <iostream>
#include <vector>

using namespace std;

#define max 1000001

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<ll> n_list(max,1);

	for(int i=2; i<max; i++){
		for(int j=1; j*i<max; j++){
			n_list[i*j] += i;
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