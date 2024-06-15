#include <iostream>
using namespace std;

int pivotIndex (int arr[],int n){

    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;

    int sum1=0;

    for (int i=0;i<=mid;i++){
        sum1=sum1+arr[i];
    }

    int sum2=0;

    for (int i=mid;i<n;i++){
        sum2=sum2+arr[i];
    }

    if(sum1==sum2){
        return mid;
    }

    else{
        return -1;

    }
    
}

int main(){

    int odd[6]={1,7,3,6,5,6};
    cout<<pivotIndex(odd,6)<<endl;

}