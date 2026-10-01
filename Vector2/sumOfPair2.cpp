//Q2 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists (Easy) a pair in the array whose sum is exactly x.
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
bool sumOfAPair(vector<int> &v, int x){
    for(int i=0,j=v.size()-1; i<j;){
        if(v[i]+v[j]==x) return true;
        else if(v[i]+v[j]<x) i++;
        else j--;
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

    cout<<sumOfAPair(arr,x);
    return 0;
}