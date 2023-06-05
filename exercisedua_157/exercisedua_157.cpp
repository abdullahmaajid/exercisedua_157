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




