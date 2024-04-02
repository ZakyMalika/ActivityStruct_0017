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
	cout << "Nomor Mahasiswa : ";
	getline(cin, mhs.nim); //error di vsc tidak error
	cout << "Nama Mahasiswa : ";
	getline(cin, mhs.nama);

	cout << "Alamat Mahasiswa : " << endl;
	cout << "\t Nama Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\t Nama Kota : ";
	cin >> mhs.alamat.kota;

	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;


	cout << endl;
	cout << "\n NIM : " << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\n Alamat : ";
	cout << "\n \t Nama Desa : " << mhs.alamat.desa;
	cout << "\n \t Nama Kota : " << mhs.alamat.kota;
	cout << "\n Umur : " << mhs.umur;
}