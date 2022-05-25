/*
 * 27/03/22
*/
#include <iostream>
using namespace std;
template <class T>
T GetMax(T a,T b){
    T resultado;
    resultado = (a>b)? a : b;
    return resultado;
};
int main(){
    int i = 5, j = 6, k;
    float l = 8.6, m = 9.7, n;
    k = GetMax<int>(i, j);
    n = GetMax<float>(l, m);
    cout << k << endl << n << endl;
    return 0;
}
