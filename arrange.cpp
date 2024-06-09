#include <iostream>
using namespace std;

int arrange(int arr[], int n)
{
   

    int i=0;
    int j=n-1;

    int even=2;
    int odd=1;


    while (i<n/2){
        arr[i]=odd;
        odd=odd+2;
        i++;

    }
    

    arr[n/2]=n;



    while (j>n/2){
        arr[j]=even;
        even=even+2;
        j--;
    }
}

int main()
{
	
		int n;
		cin >> n;

		int arr[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

	
}