#include <iostream>
using namespace std;
void transpose (int n, int arr[][100]) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            swap (arr[i][j], arr[j][i]);
        }
    }
}

void multiplication (int m, int n,int mat1[][100], int mat2[][100]) {
    if(m!=n) {
        cout << "Multiplication not possible";
    }
    else {
        int res[m][m];
        for(int i=0; i<m; i++) {
            for(int j=0; j<m; j++) {
                res[i][j] = 0;
                for(int k=0; k<m; k++) {
                    res[i][j]+= mat1[i][k] * mat2[k][j];
                }
                cout << res[i][j] << "\t";
            }
            cout << "\n";
        }
    }
}

int main() {
	// your code goes here
	int m,n;
	cin >> m >> n;
	int arr1[m][m], arr2[n][n];
	
	//taking inputs for arr1
	
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<m; j++) {
	        cin >> arr1[i][j];
	    }
	}
	
	for(int i=0; i<n; i++)
	{
	    for(int j=0; j<n; j++) {
	        cin >> arr2[i][j];
	    }
	}
	
	transpose(m,arr1);
	transpose(n,arr2);
	multiplication(m,n,arr1, arr2);
	return 0;
}
