#include <iostream>
using namespace std;

int pivot(int arr[],int n){
    int s=0;
    int e=n-1;

    int m=s+(e-s)/2;

    while(s<e){
        if (arr[0]<=arr[m]){
            s=m+1;
        }
        else{
            e=m;
        }

        m=s+(e-s)/2;
    }

    return s;



}

int main(){

    int arr[5]={3,8,10,17,1};
    cout<<pivot(arr,5)<<endl;

}