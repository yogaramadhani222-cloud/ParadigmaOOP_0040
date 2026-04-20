#include <iostream>
using namespace std;

class barang {

public:
    string nama;
    int jumlah;
    string kategori;
    int tanggalproduksi;

    void printdata() {
        cout << "Nama: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalproduksi << endl;
    }
}; //batas class

int main(){

    barang brg;

    barang elektronik;
    barang non_elektronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 1;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalproduksi = 20230101;

    non_elektronik.nama = "Meja";
    non_elektronik.jumlah = 1;
    non_elektronik.kategori = "Non-Elektronik";
    non_elektronik.tanggalproduksi = 20230201;

P
    elektronik.printdata();
    non_elektronik.printdata();
    brg.printdata();
}