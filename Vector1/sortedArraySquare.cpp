#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int absolute(int a){
    return a<0? -a : a;
}
void sortedSquareArray(vector<int> &v){
    vector<int> ans;
    int i=0,j=v.size()-1;
    while(i<=j){
        if(absolute(v[i]) < absolute(v[j])){
            ans.push_back(v[j]*v[j]);
            j--;
        }
        else{
            ans.push_back(v[i]*v[i]);
            i++;
        }
    }

    reverse(ans.begin(),ans.end());
    for(int x:ans){
        cout<<x<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortedSquareArray(v);
    return 0;
}