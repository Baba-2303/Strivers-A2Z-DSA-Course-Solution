// //write a program to store the name of your friends in vector!
#include<bits/stdc++.h>
using namespace std;
// vector<string> add_to_vector(vector<string> vec,int n){
//     for(int i = 0; i<n ; i++){
//         string name;
//         cout<<"Enter the name of your friend no."<<i+1<<" : ";
//         cin>>name;
//         vec.emplace_back(name);
//     }

//     return vec;
// }
// void print_using_iterator(vector<string> vec2){
//     cout<<"Im pirnting using iterator= ";
//     for(auto it = vec2.begin(); it!=vec2.end(); it++){
//         cout<<*(it)<<" ";
//     }
//     cout<<endl;
// }

// void print_using_for_each(vector<string> vec2){
//     cout<<"Im printing using for each: ";
//     for(string i : vec2){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }

// void print_using_index(vector<string> vec2, int n){
//     cout<<"Im printing using index[] ";
//     for(int i = 0 ; i < n ; i++){
//         cout<<vec2[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter the length of vector: \n";
//     cin>>n;
//     vector<string> vec;
    
//     vector<string> vec2 = add_to_vector(vec,n);

//     print_using_iterator(vec2);
//     print_using_for_each(vec2);
//     print_using_index(vec2,n);



//     return 0;
// }
void printvec(vector<int> v){
    int size = v.size();
    for (int i = 0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec = {1,3,5,7,9};
    printvec(vec);
    vec.erase(vec.begin());
    printvec(vec);
    vec.insert(vec.begin(),1);
    printvec(vec);
    vec.insert(vec.end(),2);
    printvec(vec);
    vec.pop_back();
    printvec(vec);

    vector<int> vec2 = {2,4,6,8};
    vec.swap(vec2);
    printvec(vec);
    vec.clear();
    cout<<vec.empty();
    return 0;
}