#include <iostream>
#include <string>

using namespace std;

int main(){

	int arr[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	int n;

	for (int i=0; i<10; i++){
		cin >> n;
		for (int j=0; j<10; j++){
			if (arr[j]==-1){
				arr[j]=n%42;
				break;
			}
			else if (arr[j]==n%42){
				break;
			}
		}
	}
	int i;
	for (i=0; i<10 && arr[i]!=-1; i++);
	cout << i;

	return 0;
}