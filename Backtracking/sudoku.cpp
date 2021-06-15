#include<bits/stdc++.h>
using namespace std;
#define N 9
void display(int board[N][N]){
	for(int i=0;i<9;i++){
			for(int j=0;j<9;j++)
		 cout<<board[i][j]<<" ";
cout<<'\n';
	}
}
bool isvalid(int board[N][N],int x,int y,int val){
	for(int i=0;i<N;i++){///row-check
	if(board[x][i]==val)
	return false;
	}

	for(int j=0;j<N;j++) //column-check
		{
		if(board[j][y]==val)
		return false;
		}

	int smi=(x/3)*3;
	int smj=(y/3)*3;


		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(board[smi+i][smj+j]==val)
				return false;
			}
		}

	return true;
}
void solvesudoku(int board[N][N],int i,int j){
	if(i==N){
		display(board);
		return;
	}
		int ni=0,nj=0;
		if(j==N-1)
		{
		ni=i+1;
		nj=0;
		}
		else{
		ni=i;
		nj=j+1;
		}
			if(board[i][j]!=0)
			solvesudoku(board,ni,nj);
		else{
			for(int po=1;po<=9;po++){
			if(isvalid(board,i,j,po)==true)
			{
			board[i][j]=po;
			solvesudoku(board,ni,nj);
			board[i][j]=0;
			}
			}
		}
}

int main()
{
	int board[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };



solvesudoku(board,0,0);
}