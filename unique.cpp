#include <iostream>
using namespace std;

//function
int findUnique(int arr[], int size)
{
    int ans=0;
    for (int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;

    
}

//main function
int main()
{

	
		int size;
		cin >> size;
		int input[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	

	return 0;
}