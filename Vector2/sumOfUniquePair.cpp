// Given a vector arr[] sorted in increasing order of n size and an integer x, find the number (Hard) atGPT Classic of unique pairs that exist in the array whose absolute sum is exactly x.
#include<iostream>
#include<vector>
using namespace std;
vector<int> create(int size){
    vector<int> v;
    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    return v;
}
int sumOfUniquePair(vector<int> &v, int x){
    int count = 0;
    for(int i=0,j=v.size()-1; i<j;){
        if(v[i]+v[j]==x){
            count++;
            i++,j--;
        }
        else if(v[i]+v[j]<x) i++;
        else j--;
    }
    return count;
}
int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;

    vector<int> arr = create(size);

    int x;
    cout<<"Enter the value of x : ";
    cin>>x;

    cout<<"Total unique pair : "<<sumOfUniquePair(arr,x);
    return 0;
}