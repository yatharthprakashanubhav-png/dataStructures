// Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists (Me a pair in the array whose absolute difference is exactly x.
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
bool absoluteSum(vector<int> v,int x){
    int n = v.size();
    int i = 0;
    int j = 1;
    while(i<n && j<n){
        if(abs(v[i] - v[j]) == x) return true;
        else if(abs(v[i] - v[j]) < x) j++;
        else i++;
    }
    return false;
}
int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;

    vector<int> arr = create(size);

    int x;
    cout<<"Enter the value of x : ";
    cin>>x;

    cout<<absoluteSum(arr,x);
    return 0;
}