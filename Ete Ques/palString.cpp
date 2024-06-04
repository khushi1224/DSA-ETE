#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    int i = 0; 
    int j = s.size()-1;
    bool pal = true;
    while(i>j){
        if(s[i]!=s[j]){
            pal = false;
            break;
        }
        i++;j--;
    }
    if(pal){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
