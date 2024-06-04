#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n ,k;
    cin>>n >>k;
    vector<int>arr(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
