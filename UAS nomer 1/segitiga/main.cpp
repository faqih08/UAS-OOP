#include<iostream>
using namespace std;

int main() {
    /*menghitung luas segitiga
        L = (a x t)/2

        L = Luas segitiga
        a = luas alas segitiga
        t = tinggi segitiga
    */
    double L, a, t;
    cout<<"menghitung Luas segitiga\n=================="<<endl;
    cout<<"masukan alas \t= ";
    cin>>a;
    cout<<"masukan tinggi \t= ";
    cin>>t;

    L = (a * t)/2;

    cout<<"Luas segitiga yang diketahui : "<<endl;
    cout<<"alas\t= "<<a<<"cm"<<endl;
    cout<<"tinggi\t= "<<t<<"cm"<<endl;
    cout<<"adalah : "<<endl;
    cout<<"L= (a x t)/2\nl = ("<<a<<" x "<<t<<")/2"<<endl;
    cout<<"L= "<<L<<" cm"<<endl;
    cout<<"Luas ssegitiga tersebut adalah = "<<L<<" cm"<<endl;

}
