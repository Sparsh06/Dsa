#include<iostream>
using namespace std;

long long binpow(long long a,long long b){
    if(b == 0)
    return 1;
    long long res = binpow(a,b/2);
    if (b % 2)
    {
      return res * res * a;
    }
    else{
        return res * res;
    }
}

int main(){
    binpow(1467,14576);
    cout << binpow(1467,14576);
    return 0;
}