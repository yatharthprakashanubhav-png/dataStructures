#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter size of first arrays : ";
    cin>>n>>m;

    int arr1[n][m];
    
    cout<<"Enter elements of first array"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr1[i][j];
        }
    }

    int p,q;
    cout<<"Enter size of second array : ";
    cin>>p>>q;

    int arr2[p][q];
    
    cout<<"Enter elements of second array"<<endl;
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>arr2[i][j];
        }
    }
    if(m!=p){
        cout<<"array cannot be multiplied as the number of coloumns in first array is not equals to the number of rows in second array";
        return 0;
    }
    int ans[n][q];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int value=0;
            for(int k=0; k<m; k++){
                value += arr1[i][k] * arr2[k][j];
            }
            ans[i][j] = value;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<q; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}