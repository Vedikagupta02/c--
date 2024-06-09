#include <iostream>
using namespace std;
void maximum_candy(int n, int arr[],int extraCandies,bool output[]){
   //Write your code

   

   int maxElement=0;

   

   for (int i=0;i<n;i++){
      maxElement=max(maxElement,arr[i]);

      
   }

   

   for (int i=0;i<n;i++){
      if ((arr[i]+extraCandies)>=maxElement){
         output[i]=true;
      }
      else{
         output[i]=false;
      }
   }
   
   
}

int main(){
    int n,extraCandies;
    cin>>n>>extraCandies;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bool output[n];
    
    maximum_candy(n,arr,extraCandies,output);

    for(int i = 0;i<n;i++){
        if(output[i]){
            cout<<"True ";
        }
        else{
            cout<<"False ";
        }
    }
}