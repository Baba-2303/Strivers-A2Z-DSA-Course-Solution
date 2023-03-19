//print the name 5 times using recursion
#include<bits/stdc++.h>
using namespace std;

int cnt = 1;
void printjsr(){
    if(cnt==6) return;
    cout<<cnt<<".Jai Shree Ram!"<<endl;
    cnt++;
    printjsr();
}
int main(){
    printjsr();
    return 0;
}