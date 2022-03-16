#include <iostream>

using namespace std;

int main(){

	int h, m, t;
	cin >> h >> m >> t;
	int rh, rm;

	rm = (m+t)%60;

	rh = h+((m+t)/60);
	if(rh > 23) rh = rh-24;

	cout << rh << ' ' << rm;

	return 0;
}