// Rotate arry by k
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int k;
    cout<<"Enter value of k : ";
    cin>>k;
    if(k>n) k = k%n;

    int v[5];
    for(int i=0; i<n; i++){
        if(i<k){
            v[i]=arr[n-k+i];
        }
        else{
            v[i]=arr[i-k];
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}