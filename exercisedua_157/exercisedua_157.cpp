#include <iostream>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
public:
	string nama_penerbit;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) : nama_penerbit(pNama) {
		cout << "penerbit \"" << nama_penerbit << "\" \n";
	}

	void TambahPengarang(pengarang*);
	void cetakPengarang();
};

class pengarang {
public:
	string nama_pengarang;
	vector<penerbit*> daftar_penerbit;
	pengarang(string pNama) : nama_pengarang(pNama) {
		cout << "pengarang \"" << nama_pengarang << "\" \n";
	}

	void TambahPenerbit(penerbit*);
	void cetakPenerbit();
};

void penerbit::TambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void penerbit::cetakPengarang() {
	cout << "\nDaftar pengarang pada penerbit \"" << this->nama_penerbit << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama_pengarang << "\n";
	}
	cout << endl;
}




