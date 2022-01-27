#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false); // c/c++ io sync 해제
	cin.tie(NULL); // in/out 해제 -> 버퍼 유지, 개별 작동
	int T, a, b;
 
	cin >> T;
	for(int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
 
	return 0;
}