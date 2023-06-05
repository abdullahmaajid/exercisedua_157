#pragma once
#ifndef PENGARANG_H
#define PENGARANG_H

class pengarang {
public:
	string nama_pengarang;
	vector<buku*> daftar_buku;
	pengarang(string pNama) :nama_pengarang(pNama) {
		cout << "pengarang \"" << nama_pengarang << "\" \n";
	}

	void tambahJudulBuku(buku*);
	void cetakJudulBuku();
};

#endif
