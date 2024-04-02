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
	mahasiswa mhs;
	cout << "Nomor Mahasiswa : ";
	getline(cin, mhs.nim); //error di vsc tidak error
	cout << "Nama Mahasiswa : ";
	getline(cin, mhs.nama);
}