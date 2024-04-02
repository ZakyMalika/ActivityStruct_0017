#include <iostream>

using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main() {
	mahasiswa mhs[3];
    for(int i=0;i<3;i++)
    {
        cout << "Data Ke- " <<(i + 1) <<":" << endl;
        cout << "Nomor Mahasiswa : ";
        getline(cin, mhs[i].nim); //error di vsc tidak error
        cout << "Nama Mahasiswa : ";
        getline(cin, mhs[i].nama);

        cout << "Alamat Mahasiswa : " << endl;
        cout << "\t Nama Desa : ";
        cin >> mhs[i].alamat.desa;
        cout << "\t Nama Kota : ";
        cin >> mhs[i].alamat.kota;

        cout << "Umur Mahasiswa : ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
        cout << endl;
    }

    for(int i=0;i<3;i++)
    {
        cout << endl;
        cout << "Data Mahasiswa ke- " <<(i+1) <<endl;
        cout << "\n NIM : " << mhs[i].nim;
        cout << "\n Nama : " << mhs[i].nama;
        cout << "\n Alamat : ";
        cout << "\n \t Nama Desa : " << mhs[i].alamat.desa;
        cout << "\n \t Nama Kota : " << mhs[i].alamat.kota;
        cout << "\n Umur : " << mhs[i].umur;
        cout << endl;
    }
}