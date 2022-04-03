#include "Matrix.hpp"
#include "Matrix.cpp"
using namespace std;
using namespace zich;

int main (){
    Matrix a (2,2);
    cin>>a;
    cout<<endl;

    Matrix b ({2,2,2,2}, 2,2);
    cout << a << endl;
    cout << b << endl;
    Matrix c(2,2);
    c = a + b;
    cout<< c << endl;


    return 0;
}