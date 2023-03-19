//print upto n using recursion
#include<bits/stdc++.h>
using namespace std;

void printNN(int cnt,int n){
    if (cnt > n) return;
    cout<<cnt<<endl;
    printNN(++cnt,n);
}
int main(){
    int n;
    cout<<"Enter the no.: ";
    cin>>n;
    printNN(1,n);

    return 0;
}