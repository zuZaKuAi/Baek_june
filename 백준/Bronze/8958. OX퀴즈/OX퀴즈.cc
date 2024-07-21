#include <iostream> 
using namespace std;

int main() {
    char arr[81]{NULL,};
	int n, sum=0,i=0,count=0,j=0;
	cin >> n;
	while (i < n)
	{
        sum = 0,count = 0,j=0;
        cin >> arr;
        while (arr[j] != '\0')
        {
            if (arr[j] == 'O')
            {
                count++;
                sum += count;
                
            }
            else if (arr[j] == 'X')
            {
                count = 0;
            }
            j++;
        }
        j++;
        cout << sum<<endl;
		
		i++;
	}

	return 0;
}
