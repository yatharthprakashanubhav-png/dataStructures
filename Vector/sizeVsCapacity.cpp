#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(13);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(13);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(13);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(13);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(13);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(13);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    

    v.resize(10);
    cout<<"Size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    return 0;
}