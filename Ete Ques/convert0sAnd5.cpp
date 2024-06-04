#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string n;
    cin>>n;
    for(int i =0 ; i<n.length();i++){
        if(n[i]=='0'){
            n[i] = '5';
        }
        else{
            continue;
        }
        
    }
    for(int i =0 ;i <n.length();i++){
        cout<<n[i];
    }

    return 0;
}
