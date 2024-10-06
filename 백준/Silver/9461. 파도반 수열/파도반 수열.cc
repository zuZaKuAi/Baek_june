#include<iostream>

using namespace::std;

long long change(long long a[], int* n)
{
	long long tmp;
	tmp = a[0]+a[1];
	a[0] = a[1];
	a[1] = a[2];
	a[2] = tmp;
	*n=*n-1;
	if (*n <= 3)
		return tmp;
	tmp = change(a, n);
	return tmp;
	
}

int main() {
	int n,k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		long long a[3]{ 1,1,1 };
		cin >> n;
		if (n < 4)
			cout << 1<<"\n";
		else {
			cout << change(a, &n)<<"\n";
		}
	}

	return 0;
}