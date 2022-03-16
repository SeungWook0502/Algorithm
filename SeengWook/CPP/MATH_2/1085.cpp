#include <iostream>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	
	int x, y, w, h, wx, hy;
	int min = 1000;
	cin >> x >> y >> w >> h;
	
	wx = w-x;
	hy = h-y;
	
	if(min>x) min = x;
	if(min>y) min = y;
	if(min>wx) min = wx;
	if(min>hy) min = hy;
	
	cout << min;
	
	return 0;
}
