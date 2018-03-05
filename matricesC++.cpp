#include <ctime>
#include <iostream>
#include <math.h>

using namespace std;

long a[500][500];
long b[500][500];
long c[500][500];
double Resultados[500];

void multi(int n){

    double prom,timeprom;
    double expo= pow(n,3.0);
    for (int l = 0; l < 10; l++) {
        double t0 = clock();
        int d = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; ++j) {
                d=0;
                for (int k = 0; k < n; ++k) {
                    d += a[i][k]*b[k][j];
                }
                c[i][j]=d;
            }
        }
        double t1 = clock();
        double time = (double(t1-t0)/CLOCKS_PER_SEC);
        prom += time;
    }
    timeprom = (prom/10)/expo;
    Resultados[n-1] = timeprom;
}

int main() {
    for (int i = 0; i < 400; i++) {
        for (int j = 0; j < 400; j++) {
            a[i][j]=1;
            b[i][j]=2;
        }
    }
    for (int k = 0; k <= 400; k+=1) {
        multi(k);
    }
    cout<<"[";
    for (int i = 0; i < 399; ++i) {
        cout<<Resultados[i]<<",";
    }
    cout<<Resultados[399]<<"]"<<endl;

    cout<<"[";
    for (int i = 1; i <= 399; ++i) {
        cout<<i<<",";
    }
    cout<<400<<"]";
    return 0;
}