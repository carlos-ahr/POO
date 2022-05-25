#include <iostream>
using namespace std;
class Mama{
public:
    Mama(){
        cout << "Mama: son indispensables" << endl;
    }
    Mama(int a){
        cout << "Mama: como crear energia" << endl;
    }
};
class Tia : public Mama{
public:
    Tia(int a) { cout << "Tia Alta, dedicada, divertida CLAUDIA" << endl; }
};
class Hijos : public Mama{
public:
    Hijos(int a) : Mama(a) { cout << "Hijos de la boveda celeste bendicion" << endl; }
};
int main(){
    Tia Claudia(0);
    Hijos Luis(0);
    return 0;
}