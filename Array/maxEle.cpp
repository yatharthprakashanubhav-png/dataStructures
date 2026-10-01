#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4,51,6,7,8,9};

    int max = INT_MIN;
    for(int a:arr){
        if(max<a) max=a;
    }

    cout<<max;
    return 0;
}
