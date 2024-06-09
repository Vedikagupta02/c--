#include <iostream>
using namespace std;
void prefixSum(int arr[],int n,int output[]){
    //Write your code here
   
    


    for (int i=0;i<n;i++){
        int sum=0;
        
        for (int j=0;j<=i;j++){
            
            sum=sum+arr[j];


            
            


        }

        output[i]=sum;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int output[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    prefixSum(arr,n,output);
    for(int i = 0;i<n;i++){
        cout<<output[i]<<" ";
    }
}