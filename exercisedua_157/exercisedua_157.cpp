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
	cout << "\nDaftar pengarang yang menaungi penerbit \"" << this->nama_penerbit << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama_pengarang << "\n";
	}
	cout << endl;
}

void pengarang::TambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
	pPenerbit->TambahPengarang(this);

}

void pengarang::cetakPenerbit() {
	cout << "Daftar penerbit yang dinaungi pengarang \"" << this->nama_pengarang << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama_penerbit << "\n";
	}
	cout << endl;
}




