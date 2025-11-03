#include <iostream>
using namespace std;

int bil1, bil2;

void kali(){
    int hasil = bil1 * bil2;
    
    cout << "A x B = " << hasil << endl;
}

int main(){
    cout << "A : " ;
    cin >> bil1;
    cout << "B : " ;
    cin >> bil2;

    kali();

    return 0;
}