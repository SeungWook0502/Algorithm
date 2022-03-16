#include <iostream>

using namespace std;

int main(){

	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int n;
	cin >> n;

	for(int i=0; i<n; i++){
		int h, w, x, t;
		cin >> h >> w >> x;

		if(x%h==0){
			t=h*100 + (x/h);
		}
		else{
			t=(x%h)*100 + (x/h+1);
		}

		cout << t << endl;
	}

	return 0;
}