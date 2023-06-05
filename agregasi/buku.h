
#pragma once
#ifndef BUKU_H																// cek duplikasi
#define BUKU_H																// cek duplikasi
#include <iostream>
#include <vector>

class pengarang;
class buku {																// membuat class buku
public:																		// akses modifier public
	string judul_buku;														// tipe data string untuk judul buku
	vector <pengarang*> daftar_pengarang;									// membuat daftar pengarang dengan menggunakan vector

	buku(string pJudul) :judul_buku(pJudul) {								// constructor. membuat objek buku dengan parameter pJudul untuk judul buku
		cout << "penerbit \"" << judul_buku << "\" \n";
	}
	void tambahPengarang(pengarang*);										// metod untuk tambah pengarang dengan parameter pengarang
	void cetakpengarang();													// metod cetak pengarang
};

#endif 