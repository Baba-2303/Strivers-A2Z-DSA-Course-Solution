#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long sumOfSeries(long long N) {
        long long sum = 0;
        for(int i=1;i<=N;i++){
            sum = sum + (i*i*i);
        }
        return sum;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<< ob.sumOfSeries(N)<<"\n";
    }
    return 0;
}