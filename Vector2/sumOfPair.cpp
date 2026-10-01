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
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]+v[j]==x) return true;
        }
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