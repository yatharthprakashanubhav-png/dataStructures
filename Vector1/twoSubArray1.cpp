#include<iostream>
#include<vector>
using namespace std;
bool checkPrefixSuffixSum(vector<int> v){
    int total_sum = 0;
    for(int i=0; i<v.size(); i++){
        total_sum += v[i];
    }
    
    int prefix_sum = 0;
    for(int i=0; i<v.size(); i++){
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;
        
        if(suffix_sum == prefix_sum) return true;
    }
    return false;
}
int main(){
    vector<int> v;
    int size;
    cout<<"Enter size : ";
    cin>>size;

    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<checkPrefixSuffixSum(v);
    return 0;
}