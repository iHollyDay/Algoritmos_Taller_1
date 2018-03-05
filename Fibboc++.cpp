#include <iostream>
#include <ctime>
using namespace std;
void fibo (int n){
    unsigned short  a=0;
    unsigned short  b=1;
    unsigned short  f=0;
    for (int i=0;i<n;i++){
        a=b;
        b=f;
        f=a+b;
        cout<< f <<"\t"<<i+2 <<endl;
    }
}

int main() {
    fibo(200);
    return 0;

}