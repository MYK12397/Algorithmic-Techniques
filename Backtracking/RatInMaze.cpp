#include<bits/stdc++.h>
using namespace std;
void printsol(vector<vector<int>> &solMat, int n) {
	for (int i = 0; i < n; i++)
	{	for (int j = 0; j < n; j++)
			cout << solMat[i][j] << " ";
		cout << endl;
	}

}
void mazehelper(int &cnt, vector<vector<int>>&maze, int n, vector<vector<int>> &solMat, int x, int y) {
	if (x == n - 1 && y == n - 1) {
		++cnt;
		solMat[x][y] = 0;
		// printsol(solMat, n);

		return;
	}
	if (x >= n || x < 0 || y >= n || y < 0 || maze[x][y] == 1 || solMat[x][y] == 0)
		return;

	solMat[x][y] = 0;
	mazehelper(cnt, maze, n, solMat, x - 1, y);
	mazehelper(cnt, maze, n, solMat, x + 1, y);
	mazehelper(cnt, maze, n, solMat, x, y - 1);
	mazehelper(cnt, maze, n, solMat, x, y + 1);
	solMat[x][y] = 1;

}
void ratinMaze(int &cnt, vector<vector<int>> maze, int n) {
	vector<vector<int>> solMat(n, vector<int>(n, 1));
	mazehelper(cnt, maze, n, solMat, 0, 0);
}
int main() {
	int n; cin >> n;
	vector<vector<int>> maze(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> maze[i][j];
	int cnt = 0;
	ratinMaze(cnt, maze, n);

	cout << cnt;



	return 0;
}