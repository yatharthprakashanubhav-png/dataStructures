#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};

    int size= sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;
    int sMax = INT_MIN;
    
    for(int i=0; i<size; i++){
        if(arr[i]>max) max = arr[i];
    }

    for(int j=0; j<size; j++){
        if(sMax<arr[j] && arr[j]<max) sMax = arr[j];
    }

    cout<<"Second largest element in list : "<<sMax;
    return 0;
}