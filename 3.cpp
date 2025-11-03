#include <iostream>
using namespace std;

int faktorial (int deret){
    if(deret == 0) return 1;
    else return deret * faktorial(deret - 1);
}

int main(){
    int bil;

    cout << "Masukkan bilangan faktorial : ";
    cin >> bil;

    cout << "!" << bil << " = " << faktorial(bil) << endl;
    return 0;
}