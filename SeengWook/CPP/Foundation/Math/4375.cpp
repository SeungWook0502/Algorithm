#include <iostream>
#include <cmath>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;

	while(cin >> n){
		long long k = 0;
		int i;
		for(i=1; i<10000; i++){
            k = (k * 10 + 1) % n;
			if(k==0){
				cout << i << "\n";
				break;
			}
		}
	}

	return 0;
}
