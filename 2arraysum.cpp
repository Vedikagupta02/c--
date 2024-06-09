#include <iostream>
using namespace std;
void sumOfTwoArrays(int arr1[],int arr2[],int n,int arr3[]){

    int i=0;
    int j=0;

    int index=0;

    while (i<n && j<n){
        int sum=0;
        sum=arr1[i]+arr2[j];
        arr3[index]=sum;

        i++;
        j++;
        index++;
        
    }
   
}

int main(){

    int n;
    cin>>n;
    int arr1[n];
    int arr2[n];
    int arr3[n];
    
    for(int i = 0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i = 0;i<n;i++){
        cin>>arr2[i];
    }
    sumOfTwoArrays(arr1,arr2,n,arr3);
    for(int i = 0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    
    return 0;
}