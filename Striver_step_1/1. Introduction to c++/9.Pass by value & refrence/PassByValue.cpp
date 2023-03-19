#include<bits/stdc++.h>
using namespace std;

void do_something(int num1,string str){
    num1 = num1 + 5;
    str[0] = 'T';
    cout<<"This is inside do_something() function:\n"<<num1<<" "<<str<<endl;
    // num1 and str stores copy of value of n and s, the value of n and s remains same!
}

int main(){
    int n = 10;
    string s = "Raj";
    do_something(n,s);
    cout<<"This is in main function after calling do_something()\n"<<n<<" "<<s<<" "<<endl;



    return 0;
}