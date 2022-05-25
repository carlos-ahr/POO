#include <iostream>
using namespace std;
class Ficticia{
    public:
    static int n;
    Ficticia(){n++;}
};
int Ficticia::n = 0;
int main(){
    Ficticia a;
    Ficticia b[5];
    cout << a.n << endl;
    Ficticia *c = new Ficticia;
    cout << Ficticia::n << endl;
    delete c;
}