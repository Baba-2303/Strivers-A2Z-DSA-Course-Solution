//print n to 1 with backtracking recursion
#include<bits/stdc++.h>
using namespace std;
void printbt(int i,int n){
    if (i>3) return;
    printbt(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printbt(1,n);

    return 0;
}
