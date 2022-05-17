#include <iostream>

using namespace std;

void mat_equal(int r, int c, int v);
int h, w, q;
int p1, p2, p3;
int mat[128][128];

int main(){

	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	cin >> h >> w;

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			cin >> mat[i][j];
		}
	}

	cin >> q;

	for(int i=0; i<q; i++){
		cin >> p1 >> p2 >> p3;
		mat_equal(p1-1, p2-1, p3);
	}

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			cout << mat[i][j] << ' ';
		}
		cout << '\n';
	}

	return 0;
}

void mat_equal(int r, int c, int v){

	int ori = mat[r][c];
	mat[r][c] = v;

	if(mat[r+1][c] == ori && r+1 < h) mat_equal(r+1, c, v);
	if(mat[r][c+1] == ori && c+1 < w) mat_equal(r, c+1, v);
	if(mat[r-1][c] == ori && r-1 >= 0) mat_equal(r-1, c, v);
	if(mat[r][c-1] == ori && c-1 >= 0) mat_equal(r, c-1, v);
	return;
}