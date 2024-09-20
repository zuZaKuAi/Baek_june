#include<iostream>
using namespace std;

int M[1025][1025];
/*
int devide(int* n)
{
	int N = *n, sum = 0, tmp[4];
	for (int i = 0; i < 4; i++)
	{
		cin >> tmp[i];
		tmp[i]--;
	}
	sum = M[tmp[2]][tmp[3]]; 
	if (tmp[0] > 0)
		sum -= M[tmp[0] - 1][tmp[3]]; 
	if (tmp[1] > 0)
		sum -= M[tmp[2]][tmp[1] - 1];
	if (tmp[0] > 0 && tmp[1] > 0)
		sum += M[tmp[0] - 1][tmp[1] - 1]; 

	return sum;
}*/


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	int  sum = 0, tmp[4];
	cin >> n >> m;
	/*
	int** M = new int* [n];
	for (int i = 0; i < n; i++) {
		M[i] = new int[n];
	}
	*/

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int tmp;
			cin >> tmp;
			M[i][j] = tmp;
			if (i > 0) M[i][j] += M[i - 1][j];
			if (j > 0) M[i][j] += M[i][j - 1];
			if (i > 0 && j > 0) M[i][j] -= M[i - 1][j - 1];
		}
	}

	for (int k = 0; k < m; k++)
	{
		 sum = 0;
		for (int i = 0; i < 4; i++)
		{
			cin >> tmp[i];
			tmp[i]--;
		}
		sum = M[tmp[2]][tmp[3]];
		if (tmp[0] > 0)
			sum -= M[tmp[0] - 1][tmp[3]];
		if (tmp[1] > 0)
			sum -= M[tmp[2]][tmp[1] - 1];
		if (tmp[0] > 0 && tmp[1] > 0)
			sum += M[tmp[0] - 1][tmp[1] - 1];
		cout << sum << "\n";
	}
	
	/*
	for (int i = 0; i < n; i++) {
		delete[] M[i];
	}
	delete[] M;
	*/
	return 0;
}