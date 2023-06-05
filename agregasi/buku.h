#pragma once
#ifndef BUKU_H
#define BUKU_H

class buku {
public:
	string judul_buku;
	vector <pengarang*> daftar_pengarang;

	buku(string pJudul) :judul_buku(pJudul) {

	}
	void tambahPengarang(pengarang*);
	void cetakpengarang();
};

#endif 