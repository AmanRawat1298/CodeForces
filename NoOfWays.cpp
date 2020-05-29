#include<iostream> 
using namespace std; 

void printAllPathsUtil(int *mat, int i, int j, int m, int n, int *path, int pi) 
{ 
    if(i == m-1)
    {
        for(int k=j; k<n; k++)
            path[pi+k-j] = *((mat + i*n) + k); 
        for( int k=0; k < pi+n-j; k++)
        {
            cout<<path[k]<<" ";
        }
        cout<<endl;
        return;
    }
    if(j == n-1)
    {
        for(int k=i; k<m; k++)
            path[pi+k-i] = *((mat + k*n) + j);
        for( int k=0; k < pi+m-i; k++)
        {
            cout<<path[k]<<" ";
        }
        cout<<endl;
        return;
    }
    path[pi] = *((mat + i*n) + j);
    printAllPathsUtil(mat, i+1,j, m, n, path, pi+1);
    printAllPathsUtil(mat, i,j+1, m, n, path, pi+1);
} 
 
void printAllPaths(int *mat, int m, int n) 
{ 
    int *path = new int[m+n];
    printAllPathsUtil(mat, 0,0, m,n,path,0);
} 

int main() 
{ 
	int mat[2][3] = { {1, 2, 3}, {4, 5, 6} }; 
	printAllPaths(*mat, 2, 3); 
	return 0; 
} 
