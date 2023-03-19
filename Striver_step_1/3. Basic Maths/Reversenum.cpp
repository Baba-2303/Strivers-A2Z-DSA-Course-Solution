#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter a Number to be reversed: "<<endl;
    int Num,ld;
    cin>>Num;
    int reverseNum = 0;
    while(Num>0){
        ld = Num%10;
        reverseNum = (reverseNum*10)+ld;
        Num=Num/10;
    }
    cout<<"The Reverse of the number is: "<<reverseNum;

    return 0;
}