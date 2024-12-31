#include <iostream>
#include <string>
using namespace std;

struct Pasien {
    string nama;
    int umur;
    string penyakit;
};

void tambahPasien(Pasien pasien[], int &jumlahPasien) {
    cout << "Masukkan nama pasien: ";
    cin.ignore();
    getline(cin, pasien[jumlahPasien].nama);
    
    cout << "Masukkan umur pasien: ";
    cin >> pasien[jumlahPasien].umur;
    
    cout << "Masukkan nama penyakit: ";
    cin.ignore();
    getline(cin, pasien[jumlahPasien].penyakit);
    
    jumlahPasien++;
    cout << "Data pasien berhasil ditambahkan.\n\n";
}

void tampilkanPasien(const Pasien pasien[], int jumlahPasien) {
    if (jumlahPasien == 0) {
        cout << "Tidak ada data pasien.\n\n";
        return;
    }
    
    cout << "\nDaftar Pasien:\n";
    for (int i = 0; i < jumlahPasien; i++) {
        cout << "Pasien " << i + 1 << ":\n";
        cout << "Nama: " << pasien[i].nama << endl;
        cout << "Umur: " << pasien[i].umur << endl;
        cout << "Penyakit: " << pasien[i].penyakit << "\n\n";
    }
}


int main() {
    const int MAX_PASIEN = 100;
    Pasien pasien[MAX_PASIEN];
    int jumlahPasien = 0;
    int pilihan;

    do {
        cout << "Menu Pendataan Penyakit Pasien:\n";
        cout << "1. Tambah Data Pasien\n";
        cout << "2. Tampilkan Daftar Pasien\n";
        cout << "3. Keluar\n";
        cout << "Pilih opsi (1-3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahPasien(pasien, jumlahPasien);
                break;
            case 2:
                tampilkanPasien(pasien, jumlahPasien);
                break;
            case 3:
                cout << "Terima kasih, program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid, coba lagi.\n\n";
        }
    } while (pilihan != 3);

    return 0;
}