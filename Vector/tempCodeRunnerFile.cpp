#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};

    int size= sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;
    int sMax = INT_MIN;
    
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            sMax = max;
            max = arr[i];
        }
        else if(arr[i] > sMax){
            sMax = arr[i];
        }
    }

    cout<<"Second largest element in list : "<<sMax;
    return 0;
}