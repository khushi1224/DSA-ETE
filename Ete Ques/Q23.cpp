#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{   
    int n , m ; cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));

    for(int i =0 ;i <n;i++){
        for(int j =0 ; j<n ;j++){
            cin>>arr[i][j];
        }
    }
    vector<int> row(n,0) , col(m,0);
    for(int i =0;i<n;i++){
        for(int  j =0 ;j<m;j++){
            if(arr[i][j] == 1){
                row[i]=1;
                col[j]=1;
            }
        }
    }
      for(int i =0;i<n;i++){
        for(int  j =0 ;j<m;j++){
            if(row[i]== 1 || col[j]==1){
                arr[i][j] = 1;
            }
        }
    }
        for(int i =0 ;i <n;i++){
        for(int j =0 ; j<n ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
