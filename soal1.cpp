// buat program inputan menggunakan fungsi untuk menampilkan biodata pribadi yang harus dibuat:
// 1. Profil(),untuk menampilkan nama,jenis kelamin
// 2. mahasiswa(), untuk menampilkan nim,jurusan, semester, target IPK
#include <iostream>
#include <string>
#include <limits>

using namespace std;

void Profil(const string &nama, const string &jenisKelamin) {
    cout << "===== Profil =====" << endl;
    cout << "Nama         : " << nama << endl;
    cout << "Jenis Kelamin: " << jenisKelamin << endl;
}

void mahasiswa(const string &nim, const string &jurusan, int semester, double targetIpk) {
    cout << "===== Data Mahasiswa =====" << endl;
    cout << "NIM     : " << nim << endl;
    cout << "Jurusan : " << jurusan << endl;
    cout << "Semester: " << semester << endl;
    cout << "Target IPK: " << targetIpk << endl;
}

int main() {
    string nama, jenisKelamin;
    string nim, jurusan;
    int semester;
    double targetIpk;

    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan jenis kelamin: ";
    getline(cin, jenisKelamin);

    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan jurusan: ";
    getline(cin, jurusan);
    cout << "Masukkan semester (angka): ";
    while(!(cin >> semester)){
        cout << "Input tidak valid. Masukkan angka untuk semester: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Masukkan target IPK (contoh 3.50): ";
    while(!(cin >> targetIpk)){
        cout << "Input tidak valid. Masukkan angka desimal untuk target IPK: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << endl;

    Profil(nama, jenisKelamin);
    mahasiswa(nim, jurusan, semester, targetIpk);

    return 0;
}