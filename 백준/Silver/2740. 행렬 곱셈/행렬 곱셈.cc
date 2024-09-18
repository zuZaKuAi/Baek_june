#include<iostream>
using namespace std;

int main()
{
	int n1, n2, n3, n4, startTime, finishTime;
	cin >> n1 >> n2;

	int** A = new int* [n1];
	for (int i = 0; i < n1; i++) {
		A[i] = new int[n2] ;
	}
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cin>>A[i][j];
		}
	}

	cin >> n3 >> n4;

	int** B = new int* [n3];
	for (int i = 0; i < n3; i++) {
		B[i] = new int[n4];
	}
	for (int i = 0; i < n3; i++)
	{
		for (int j = 0; j < n4; j++)
		{
			cin >> B[i][j];
		}
	}

	int** C = new int* [n1];
	for (int i = 0; i < n1; i++) {
		C[i] = new int[n4] { 0, };
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n4; j++) {
			C[i][j] = 0;
			for (int k = 0; k < n2; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n4; j++) {
			cout << C[i][j] << " ";
		}
		cout << endl;
	}


	for (int i = 0; i < n1; i++) {
		delete[] A[i];
	}
	for (int i = 0; i < n3; i++) {
		delete[] B[i];
	}
	for (int i = 0; i < n1; i++) {
		delete[] C[i];
	}
	delete[] A;
	delete[] B;
	delete[] C;


	return 0;
}
