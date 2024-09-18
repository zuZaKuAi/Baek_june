#include<iostream>
#include<algorithm>
using namespace std;

int** devide(int* n, int** M)
{
	int N = *n;
	int** newM = new int* [*n/2];
	for (int i = 0; i < *n/2; i++) {
		newM[i] = new int[*n/2];
	}
	int tmp[4];
	for (int i = 0; i <N-1 ; i += 2) {
		for (int j = 0; j < N-1; j += 2) {
			tmp[0] = M[i][j]; tmp[1] = M[i+1][j]; tmp[2] = M[i][j+1]; tmp[3] = M[i+1][j+1];
			sort(tmp, tmp + 4);
			newM[i/2][j/2] = tmp[2];
		}
	}
	*n /= 2;
	return(newM);

	for (int i = 0; i < *n/2; i++) {
		delete[] newM[i];
	}
	delete[] newM;
}

int main() {
	int n;
	cin >> n;
	int** M = new int* [n];
	for (int i = 0; i < n; i++) {
		M[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			cin >> M[i][j];
		}
	}
	while (n > 1)
	{
		M = devide(&n, M);
	}

	cout << M[0][0];

	for (int i = 0; i < n; i++) {
		delete[] M[i];
	}
	delete[] M;
	
}