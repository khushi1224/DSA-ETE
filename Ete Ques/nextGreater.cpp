#include<iostream>
using namespace std;
void printNGE(int n ,int arr[]){
    int next;
    for(int i =0 ; i<n ;i++){
        next = -1;
        for(int j=1 ;j<n ;j++){
            if(arr[i]<arr[j]){
                next = arr[j];
                break;
            }
        }
        cout<<next<<" ";
    }

}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    printNGE(n,arr);
    return 0;
}
