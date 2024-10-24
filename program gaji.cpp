#include <iostream>
#include <string>
using namespace std;

double pokok(int jamKerja){
    const double gajiPerJam = 7500.0;
    return gajiPerJam * jamKerja;
}

double lembur(int jamKerja){
    const double gajiLemburPerJam = 7500.0 * 1.5;
    if (jamKerja > 8){
        return gajiLemburPerJam * (jamKerja - 8);
    }
    return 0.0;
}

double makan(int jamKerja){
    const double uangMakan = 10000.0;
    if (jamKerja >= 9){
        return uangMakan;
    }
    return 0.0;
}

double transport(int jamKerja){
    const double uangTransport = 13000.0;
    if (jamKerja >= 10) {
        return uangTransport;
    }
    return 0.0;
}

int main(){
    string nip = "2410631170085";
    string nama = "Muhammad Alfiansyah Suardi";
    int jamKerja = 9;

    double gajiPokok = pokok(jamKerja);
    double gajiLembur = lembur(jamKerja);
    double gajiMakan = makan(jamKerja);
    double gajiTransport = transport(jamKerja);

    cout << "\n= Rincian Gaji Karyawan PT. XYZ =\n";
    cout << "NIP: " << nip << endl;
    cout << "Nama: " << nama << endl;
    cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
    cout << "Gaji Lembur: Rp. " << gajiLembur << endl;
    cout << "Uang Makan: Rp. " << gajiMakan << endl;
    cout << "Uang Transport: Rp. " << gajiTransport << endl;

    double totalGaji = gajiPokok + gajiLembur + gajiMakan + gajiTransport;
    cout << "Total Gaji: Rp. " << totalGaji << endl;

    return 0;
}
