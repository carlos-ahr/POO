#include <iostream>
using namespace std;
int operacion(int a, int b){
    return a * b;
}
double operacion(double a, double b){
    return a/b;
}
int main(){
    int x = 5, y = 2;
    double n = 5.0, m = 2.0;
    cout<<operacion(x,y)<<endl;
    cout<<operacion(n, m)<<endl;
    return 0;
}