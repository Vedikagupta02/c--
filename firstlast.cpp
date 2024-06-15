#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s=0;
    int e=n-1;

    

    int mid=s+(e-s)/2;

    int ans=-1;


    while (s<=e){
        if (arr[mid]==key){

            ans=mid;
            e=mid-1;
        }

        if (arr[mid]<key){
            s=mid+1;
        }
        else if (arr[mid]>key){
            e=mid-1;

        }
        mid=s+(e-s)/2;

    }

    return ans;

    


}

int LastOcc(int arr[], int n, int key){
    int s=0;
    int e=n-1;

    

    int mid=s+(e-s)/2;

    int ans=-1;

    while (s<=e){
        if (arr[mid]==key){
            ans=mid;
            s=mid+1;

        }

        if (arr[mid]<key){
            s=mid+1;
        }
        else if (arr[mid]>key){
            e=mid-1;

        }
        mid=s+(e-s)/2;

    }
    return ans;

    


}



int main(){

    int even[11]={1,2,3,4,4,4,4,4,4,4,5};

    cout<<firstOcc(even,11,4)<<endl;
    cout<<LastOcc(even,11,4)<<endl;

    return 0;

}