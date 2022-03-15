#include <iostream>

using namespace std;

int main(){

	int x, y;
	cin >> x >> y;

	int min = 66;
	char chess[x][y];

	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			cin >> chess[i][j];
		}
	}

	for(int i=0; i<=x-8; i++){
		for(int j=0; j<=y-8; j++){
			int wcnt=0, bcnt=0;
			for(int lo=i; lo<8+i; lo++){
				for(int lt=j; lt<8+j; lt++){
					if(lo%2==0){
						if(lt%2==0){
							if(chess[lo][lt] == 'W');
							else wcnt++;
						}
						else{
							if(chess[lo][lt] == 'B');
							else wcnt++;
						}
					}
					else{
						if(lt%2==0){
							if(chess[lo][lt] == 'B');
							else wcnt++;
						}
						else{
							if(chess[lo][lt] == 'W');
							else wcnt++;
						}
					}
				}
			}
			for(int lo=i; lo<8+i; lo++){
				for(int lt=j; lt<8+j; lt++){
					if(lo%2==0){
						if(lt%2==0){
							if(chess[lo][lt] == 'B');
							else bcnt++;
						}
						else{
							if(chess[lo][lt] == 'W');
							else bcnt++;
						}
					}
					else{
						if(lt%2==0){
							if(chess[lo][lt] == 'W');
							else bcnt++;
						}
						else{
							if(chess[lo][lt] == 'B');
							else bcnt++;
						}	
					}
				}
			}
			if(wcnt<min) min = wcnt;
			if(bcnt<min) min = bcnt;
		}
	}
	cout << min;

	return 0;
}