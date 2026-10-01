#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter size of arrays : ";
    cin>>n>>m;
    
    int arr[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int ans[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            ans[i][j] = arr[j][i];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}