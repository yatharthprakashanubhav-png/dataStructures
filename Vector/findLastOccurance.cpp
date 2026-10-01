#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    int ele;
    cout<<"Enter element : ";
    cin>>ele;

    int occ=-1;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==ele){
            occ=i;
            break;
        }
    }

    cout<<"Last occurance : "<<occ;
    return 0;
}