//pirnt n to 1 using recursion
#include<bits/stdc++.h>
using namespace std;
void reversePrint(int n){
    if (n==0) return;
    cout<<n<<" ";
    n--;
    reversePrint(n);
}
int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    reversePrint(n);
    return 0;
}