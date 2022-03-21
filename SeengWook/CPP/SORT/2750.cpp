#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int num_list[n];

	for(int i=0; i<n; i++){
		cin >> num_list[i];
	}

	for(int i=0; i<n; i++){
		int min=1001, min_i=0;

		for(int j=i; j<n; j++){
			if(num_list[j] < min){
				min=num_list[j];
				min_i=j;
			}
		}
		int temp = num_list[min_i];
		num_list[min_i] = num_list[i];
		num_list[i] = temp;
	}

	for(int i=0; i<n; i++){
		cout << num_list[i] << '\n';
	}

	return 0;
}