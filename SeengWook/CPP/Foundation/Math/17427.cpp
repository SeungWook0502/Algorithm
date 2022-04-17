#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int n;
	long long cnt = 0;
	cin >> n;

	for(int i=1; i<=n; i++){
		cnt += (n/i)*i;
	}


	cout << cnt << '\n';

	return 0;
}