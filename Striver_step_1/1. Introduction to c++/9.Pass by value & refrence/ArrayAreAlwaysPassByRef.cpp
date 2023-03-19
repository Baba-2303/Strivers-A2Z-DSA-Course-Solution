#include<bits/stdc++.h>
using namespace std;
void printer(int n, int arr[]){
    for(int i= 0; i<n; i++){
        arr[i]=arr[i]+10;
        cout<<"inside printer() function"<<arr[i]+10<<endl;
    }
}

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    printer(n,arr);
    for(int i= 0; i<n; i++){
        cout<<"inside main() function"<<arr[i]<<endl;
    }
    return 0;
}
//arrays are always passed by reference