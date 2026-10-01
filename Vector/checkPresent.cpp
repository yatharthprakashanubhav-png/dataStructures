//Given Q query, check if the given number is present in the array of not.
//note: value of all the elements in the array is less than 10 to th power 5
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    const int N = 1e5+10;
    vector<int> freq(N,0);

    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }

    cout<<"Enter quesries : ";
    int q;
    cin>>q;

    while(q--){
        int queryelement;
        cin>>queryelement;
        cout<<"Frequency : "<<freq[queryelement]<<endl;
    }
}
