#include<iostream>
#include<climits>
using namespace std;
// for non empty and non negative array 
int indexArr(int arr[], int size){

    int index=-1;
    int max=INT_MIN;
    for(int i=0; i<size; i++){
        if(max<arr[i]){
            max=arr[i];
            index = i;
        }
    }
    return index;
}
int main(){
    int arr[]={1,2,3,4,5,2,33,2,56,3,323,7};

    int size= sizeof(arr)/sizeof(arr[0]);

    int max = arr[indexArr(arr,size)];
    for(int i=0; i<size; i++){
        if(arr[i]==max) arr[i] = -1;
    }
    int sMax=arr[indexArr(arr,size)];
    cout<<"Second largest element : "<<sMax;
    return 0;
}