#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    v.push_back(23);
    v.push_back(53);
    v.push_back(3);
    v.push_back(63);
    v.push_back(8);
    v.push_back(66);
    v.push_back(2);

    vector<int> v1;

    /*
    v.size(); //return size of vector
    v.resize(8); // used to resize vector size
    v.capacity(); // return the capacity of vector
    v.push_back(4); // add element at last
    v.insert(2,45);  // for a particular element
    v.begin(); //return the first position of vector
    v.end(); //return the last position of the vector
    v.pop_back(); //delete last element
    v.erase(3); //delete element at a particular position
    v.clear(); //used to clear all elements in a vetor

*/

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
}