#include <iostream>
using namespace std;

int binarySearch(int arr[],int n, int key){
    int start=0;
    int end=n-1;

    int mid=(start+(end-start/2));

    while (start<=end){

        if (key==arr[mid]){
            return mid;
        }

        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+(end-start/2));

    }
    return -1;
}

int main(){

    int even[6]={2,4,6,8,10,12};

    int odd[5]={1,3,5,7,9};

    int out1=binarySearch(even,6,8);
    cout<<out1<<endl;
    int out2=binarySearch(odd,5,9);
    cout<<out2<<endl;

}