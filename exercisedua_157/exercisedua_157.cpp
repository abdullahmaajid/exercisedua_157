#include <iostream>																				// membuat wadah
#include <vector>																				// menambahkan wadah vector
using namespace std;																			// menggunakan namespace standar

class pengarang;																				// membuat class pengarang
class penerbit {																				// membuat class penerbit
public:																							// akses modifier public
	string nama_penerbit;																		// tipe data string untuk nama penerbit
	vector<pengarang*> daftar_pengarang;														// menggunakan vector (sejenis array dinamis)
	penerbit(string pNama) : nama_penerbit(pNama) {												// constructor. membuat objek penerbit dengan parameter pNama untuk nama penerbit
		cout << "penerbit \"" << nama_penerbit << "\" \n";										// menampilkan nama penerbit
	}

	void TambahPengarang(pengarang*);															// metod tambahpengarang dengan parameter pengarang
	void cetakPengarang();																		// metod cetak pengarang
};

class pengarang {																				// membuat class pengarang
public:																							// akses modifier public
	string nama_pengarang;																		// tipe data string untuk nama pengarang
	vector<penerbit*> daftar_penerbit;															// menggunakan vector (sejenis array dinamis)
	pengarang(string pNama) : nama_pengarang(pNama) {											// constructor. membuat objek penerbit dengan parameter pNama untuk nama pengarang
		cout << "pengarang \"" << nama_pengarang << "\" \n";									//  menampilkan nama pengarang
	}

	void TambahPenerbit(penerbit*);																// metod tambahpenerbit dengan parameter pengarang
	void cetakPenerbit();																		// metod cetak penerbit
};

void penerbit::TambahPengarang(pengarang* pPengarang) {											// objek pengarang dengan parameter pPengarang dalam TambahPengarang yang di sinkronkan dengan penerbit
	daftar_pengarang.push_back(pPengarang);														// progam supaya data baru yang diinputkan selalu berada di akhir
}
void penerbit::cetakPengarang() {																// mensinkronkan antara cetakPengarang dan penerbit
	cout << "\nDaftar pengarang yang menaungi penerbit \"" << this->nama_penerbit << "\":\n";	// menampilkan daftar pengarang, this = nama pengarang dan menjadi parameter pointer untuk memanggil nama penerbit
	for (auto& a : daftar_pengarang) {															// perulangan for dengan parameter a = daftar nama pengarang
		cout << a->nama_pengarang << "\n";														// menampilkan a = daftar pengarang dan parameter pointer a = nama pengarang
	}
	cout << endl;																				// tampilkan
}

void pengarang::TambahPenerbit(penerbit* pPenerbit) {											// objek penerbit dengan parameter pPenerbit dalam TambahPenerbit yang di sinkronkan dengan pengarang
	daftar_penerbit.push_back(pPenerbit);														// progam supaya data baru yang diinputkan selalu berada di akhir
	pPenerbit->TambahPengarang(this);															// pointer parameter pPenerbit = penerbit merujuk pada tambah pengarang (data yang sedang dipilih)

}

void pengarang::cetakPenerbit() {																// menskinkronkan antara cetakpenerbit dengan pengarang
	cout << "Daftar penerbit yang diikuti pengarang \"" << this->nama_pengarang << "\":\n";		// menampilkan daftar penerbit yang diikuti, this = nama penerbit dan menjadi parameter pointer untuk memanggil this = nama penerbit
	for (auto& a : daftar_penerbit) {															// pengulangan for untuk parameter a = daftar nama penerbit
		cout << a->nama_penerbit << "\n";
	}
	cout << endl;																				// tampilkan
}


int main() {
	penerbit* VarPenerbit1 = new penerbit("Gama Press");										// membuat objek baru "penerbit1" yang bernama Gama Press
	penerbit* VarPenerbit2 = new penerbit("Intan Pariwara");									// membuat objek baru "penerbit2" yang bernama Intan Pariwara
	pengarang* VarPengarang1 = new pengarang("Giga");											// membuat objek baru "pengarang1" yang bernama Giga
	pengarang* VarPengarang2 = new pengarang("Joko");											// membuat objek baru "pengarang2" yang bernama joko								
	pengarang* VarPengarang3 = new pengarang("Asroni");											// membuat objek baru "pengarang3" yang bernama Asroni
	pengarang* Varpengarang4 = new pengarang("Lia");											// membuat objek baru "pengarang4" yang bernama Lia

	VarPenerbit1->TambahPengarang(VarPengarang2);												// variabel varpenerbit1 yang menjadi pointer pengarang 2 
	VarPenerbit1->TambahPengarang(Varpengarang4);												// variabel varpenerbit1 yang menjadi pointer pengarang 4 
	VarPenerbit1->TambahPengarang(VarPengarang1);												// variabel varpenerbit1 yang menjadi pointer pengarang 1 
	VarPenerbit2->TambahPengarang(VarPengarang3);												// variabel varpenerbit2 yang menjadi pointer pengarang 3 
	VarPenerbit2->TambahPengarang(VarPengarang1);												// variabel varpenerbit2 yang menjadi pointer pengarang 1 
	VarPengarang1->TambahPenerbit(VarPenerbit2);												// variabel varpengarang1 yang menjadi pointer varpenerbit2
	VarPengarang1->TambahPenerbit(VarPenerbit1);												// variabel varpengarang1 yang menjadi pointer varpenerbit1

	VarPenerbit1->cetakPengarang();																// mencetak/menampilkan penerbit 1
	VarPenerbit2->cetakPengarang();																// mencetak/menampilkan penerbit 2
	VarPengarang1->cetakPenerbit();																// mencetak/menampilkan pengarang


	return 0;																			
}
