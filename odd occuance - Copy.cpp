
#include <bits/stdc++.h>
using namespace std;


int getOddOccurrence(int arr[], int arr_size)
{
	int res = 0;
	for (int i = 0; i < arr_size; i++)
		res = res ^ arr[i];

	return res;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	

	
	cout << getOddOccurrence(arr, n);

	return 0;
}

