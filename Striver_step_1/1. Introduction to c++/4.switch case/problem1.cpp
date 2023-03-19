#include<bits/stdc++.h>
using namespace std;
//write a program to take num 1 to 7 as input and give sunday to monday as output using switch case

int main(){
    cout<<"Enter number between 1 to 7: ";
    int n;
    cin>>n;
    switch(n){
        case 1:
            cout<<"sunday";
            break;
        case 2:
            cout<<"monday";
            break;
        case 3:
            cout<<"tuesday";
            break;
        case 4:
            cout<<"wednesday";
            break;
        case 5:
            cout<<"thursday";
            break;
        case 6:
            cout<<"friday";
            break;
        case 7:
            cout<<"saturday";
            break;
        default:
            cout<<"Enter valid Int between 1 to 7";
            break;
    }

    return 0;
}