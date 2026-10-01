#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,4,6,7,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target,pairs=0;
    cout<<"Enter target : ";
    cin>>target;
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==target){
                pairs++;
            }
        }
    }

    cout<<"Total number of pairs : "<<pairs;
    return 0;
}