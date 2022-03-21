#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int max = 10001;

	int cnt[max];

	fill_n(cnt,max,0);

	for(int i=0; i<n; i++){
		int num;
		cin >> num;
		cnt[num]++;
	}

	for(int i=0; i<max; i++){
		if(cnt[i]!=0){
			for(int j=0; j<cnt[i]; j++){
				cout << i << '\n';
			}
		}
	}

	return 0;
}