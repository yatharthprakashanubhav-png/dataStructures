#include<iostream>
#include<vector>
using namespace std;
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
    
    bool flag = false;
    int pre = 0;
    for(int i=0; i<size-1; i++){
        pre += v[i];
        int suf = 0;
        for(int j=i+1; j<size; j++){
            suf += v[j];
        }
        if(pre == suf){
        flag = true;
        break;
        }
    }
    cout<<flag;
    return 0;
}