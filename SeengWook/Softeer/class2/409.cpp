#include <iostream>
#include <vector>

using namespace std;

int rec_check(vector<vector<int>> &mat, int i, int j, int mat_case, int sec);

int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int rec_size;
	cin >> rec_size;

	vector<vector<int>> mat(rec_size, vector<int>(rec_size, 0));
	vector<int> sec_list;

	int section = 1;
	for(int i=0; i<rec_size; i++){
		string m;
		cin >> m;
		for(int j=0; j<rec_size; j++){

			if(m[j]=='1'){
				int 
				if(i==0 && j==0) mat[i][j] = section;
				else if(i==0) section = rec_check(mat, i, j, 1, section);
				else if(j==0) section = rec_check(mat, i, j, 2, section);
				else section = rec_check(mat, i, j, 0, section);
			}
		}
	}

	for(int i=0; i<rec_size; i++){
		for(int j=0; j<rec_size; j++){
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}

int rec_check(vector<vector<int>> &mat, int f, int s, int mat_case, int sec){

	if(mat_case == 0){
		if(mat[f-1][s-1] != 0) mat[f][s] = mat[f-1][s-1];
		else if(mat[f-1][s] != 0) mat[f][s] = mat[f-1][s];
		else if(mat[f][s-1] != 0) mat[f][s] = mat[f][s-1];
		else mat[f][s] = ++sec;
	}
	else if(mat_case == 1){
		if(mat[f][s-1] != 0) mat[f][s] = mat[f][s-1]; // i 0
		else mat[f][s] = ++sec;
	}
	else{
		if(mat[f-1][s] != 0) mat[f][s] = mat[f-1][s]; // j 0
		else mat[f][s] = ++sec;
	}

	return sec;
}