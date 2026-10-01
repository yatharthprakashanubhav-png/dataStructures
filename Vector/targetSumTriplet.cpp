#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,1,2,4,0,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target,triplet=0;
    cout<<"Enter target : ";
    cin>>target;
    for(int i=0; i<size-2; i++){
        for(int j=i+1; j<size-1; j++){
            for(int k=j+1; k<size; k++){
                if(arr[i]+arr[j]+arr[k]==target) triplet++;
            }
        }
    }
    cout<<"Total number of triplets : "<<triplet;
    return 0;
}