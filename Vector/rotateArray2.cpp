// Rotate arry by k
#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    int k;
    cout<<"Enter value of k : ";
    cin>>k;
    if(k>arr.size()) k = k%arr.size();

    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    
    for(int i:arr){
        cout<<i<<" ";
    }
    return 0;
}