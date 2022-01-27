#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector<int> non_self;
	int t;

	for (int i=1; i<10000; i++){
		t = 0;
		int k = 1;
		for (int j=0; j<4; j++, k*=10) t += (i/k)%10;
		t += i;

		non_self.push_back(t);
	}
	for (int i=1; i<10000; i++){
		int d = 1;
		for (vector<int>::iterator j = non_self.begin(); j<non_self.end(); j++){
			if (*j == i) d = 0;
		}
		if (d) cout << i << endl;
	}
	return 0;
}