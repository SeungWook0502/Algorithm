#include <iostream>
#include <cmath>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, num;
	cin >> n;
	int max = 0;
	int min = 1000000;
	for(int i=0; i<n; i++){
		cin >> num;
		if(max<num) max = num;
		if(min>num) min = num;
	}
	cout << max*min << "\n";

	return 0;
}
