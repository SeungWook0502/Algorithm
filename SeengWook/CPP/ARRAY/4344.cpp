#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	for (int i=0; i<n; i++){
		int m;
		float t = 0;
		int c = 0;
		cin >> m;
		float s_list[m];

		for (int j=0; j<m; j++){
			float s;
			cin >> s;
			s_list[j] = s;
			t += s;
		}

		for (int j=0; j<m; j++){
			if (s_list[j]>(t/(float)m)) c++;
		}
		cout << fixed;
    	cout.precision(3);
		cout << float(c)/float(m)*100 << "%" << endl;

	}

	return 0;
}