#include <iostream>
#include <vector>

using namespace std;

char *star(int n);

int main(){
		
	int n;
	char *r;
	cin >> n;

	r = star(n);
	
	cout << r;	
	
	return 0;
}

char *star(int n){
	
	if(n==1){
		char a = '*';
		return &a;
	}
	char rec[3][3];
	char *t;
	t = star(n/3);
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			rec[i][j] = *t;
		}
	}
	
	return rec;
}
