#include<bits/stdc++.h>
using namespace std;
void pairfun1(int a, int b){
    pair<int , int> pvar = {a,b};
    cout<<"inside fun1 --> "<<pvar.first<<" "<<pvar.second;
    cout<<endl;
}
void pairfun2(int a ,int b ,float c ,char d){
    pair<int , pair<int , pair<float , char>>> pvar = {a,{b,{c,d}}};
    cout<<"inside fun2 --> "<<pvar.first<<" "<<pvar.second.first<<" "<<pvar.second.second.first<<" "<<pvar.second.second.second;
    cout<<endl;
}

int main() {
    int a,b;
    float c;
    char d;
    cout<<"Enter 2 integers a,b and float c respectively: ";
    cin>>a>>b>>c;
    cout<<"Enter char d: ";
    cin>>d;
    //store a,b in pairs and print it
    pairfun1(a,b);
    //store a,b,c in pairs and print it
    pairfun2(a,b,c,d);

    


    return 0;
}