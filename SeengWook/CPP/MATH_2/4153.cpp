#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string rw(int max, int min1, int min2);

int main(){
	ios::sync_with_stdio(false);
	
	while(true){
		int x, y ,z;
		cin >> x >> y >> z;
		
		if(x==0 && y==0 && z==0) break;
		
		if(x>y){
			if(x>z) cout << rw(x, y, z) << '\n';
			else cout << rw(z, x, y) << '\n';
		}
		else{
			if(y>z) cout << rw(y, x, z) << '\n';
			else cout << rw(z, x, y) << '\n';
		}
	}
	
	return 0;
}

string rw(int max, int min1, int min2){
	if(max*max == min1*min1 + min2*min2) return "right";
	else return "wrong";
}
