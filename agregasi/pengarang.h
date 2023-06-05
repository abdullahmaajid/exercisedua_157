#pragma once																	// 
#ifndef PENGARANG_H																// mengecek duplikasi
#define PENGARANG_H																// mengecek duplikasi

class pengarang {																// menambahkan class pengarang
public:																			// akses modifier public
	string nama_pengarang;														// tipe data string untuk nama
	vector<buku*> daftar_buku;													// vector (sejenis array yang dinamis) untuk daftar buku
	pengarang(string pNama) :nama_pengarang(pNama) {							// constructor. membuat objek pengarang dengan parameter pNama untuk nama pengarang
		cout << "pengarang \"" << nama_pengarang << "\" \n";					// menampilkan nama pengarang
	}

	void tambahJudulBuku(buku*);												// metod untuk menambahkan jumlah buku dengan parameter buku
	void cetakJudulBuku();														// metod untuk cetakjudulbuku
};

void pengarang::tambahJudulBuku(buku* pBuku) {									// objek buku dengan parameter buku dalam tambahjudulbuku yang di sinkronkan dengan class pengarang
	daftar_buku.push_back(pBuku);												// progam untuk membuat data baru yang diinput berada pada urutan akhir data
}
void pengarang::cetakJudulBuku() {												// mensinkronkan antara cetakjudulbuku dan class pengarang
	cout << "daftar buku yang dikarang \"" << this->nama_pengarang << "\":\n";	// menampilkan daftar buku yang dikarang dengan memanggil this = nama buku dan yang merujuk pada nama pengarang buku tersebut
	for (auto& a : daftar_buku) {												// pengulangan for, a sebagai parameter daftar buku
		cout << a->judul_buku << "\n";											// menampilkan a = daftar buku dan parameter pointer a = judul buku
	}
	cout << endl;																// tampilkan
}

#endif
