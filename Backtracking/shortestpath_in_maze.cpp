#include<bits/stdc++.h>
using namespace std;
#define M 35
#define N 35

bool safe(int mat[M][N],int vis[M][N], int x,int y){
	if(mat[x][y]==0||vis[x][y])
	return false;

	return true;
}
bool val(int x,int y){
	if(x<M && y<N && x>=0 && y>=0)
	return true;

	return false;
}
void path(int mat[M][N],int vis[M][N],int i,int j,int x,int y,int &dis,int dest){
	if(i==x&&j==y){
	dis=min(dis,dest);
	}

	vis[i][j]=1;
	if(val(i+1,j) && safe(mat,vis,i+1,j)){
	path(mat,vis,i+1,j,x,y,dis,dest+1);
	}

	if(val(i,j+1) && safe(mat,vis,i,j+1)){
	path(mat,vis,i,j+1,x,y,dis,dest+1);
	}

	if(val(i-1,j) && safe(mat,vis,i-1,j)){
	path(mat,vis,i-1,j,x,y,dis,dest+1);
	}

	if(val(i,j-1) && safe(mat,vis,i,j-1)){
	path(mat,vis,i,j-1,x,y,dis,dest+1);
	}

	vis[i][j]=0;

}

int main()
{
	int mat[M][N]={
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 },
        { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 },
        { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 },
        { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
        { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 },
        { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
        { 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
    };

    int vis[M][N];
    memset(vis,0,sizeof vis);
    int dist =INT_MAX;
    path(mat, vis,0,0,7,5,dist,0);

    if(dist!=INT_MAX)
    cout<<dist;
    else
    cout<<-1;


    return 0;
}
