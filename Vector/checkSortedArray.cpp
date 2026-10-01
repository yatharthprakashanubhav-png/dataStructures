#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v[]={1,2,3,4,5,6,7};

    bool flag = true;
    for(int i=1; i<7; i++){
        if(v[i]>v[i-1]) continue;
        else flag = false;
    }

    if(flag==true) cout<<"Array is sorted";
    else cout<<"Array is not sorted";
    return 0;
}