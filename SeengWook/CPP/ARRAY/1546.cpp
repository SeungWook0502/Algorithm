#include <iostream>

using namespace std;

int main(){

	int n;
	float s = 0.0;
	float s_max = 0;
	float t = 0.0;

	cin >> n;

	float s_list[n];

	for (int i=0; i<n; i++){

		cin >> s;
		s_list[i] = s;
		if (s > s_max) s_max = s;
	}

	for (int i=0; i<n; i++){
		t += (s_list[i] / s_max * 100)/n;
	}
	cout << t;

	return 0;
}