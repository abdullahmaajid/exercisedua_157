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



