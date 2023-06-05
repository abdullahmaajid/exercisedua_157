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

void pengarang::tambahJudulBuku(buku* pBuku) {
	daftar_buku.push_back(pBuku);
}

void pengarang::cetakJudulBuku() {
	cout << "daftar buku yang dikarang \"" << this->nama_pengarang << "\":\n";
	for (auto& a : daftar_buku) {
		cout << a->judul_buku << "\n";
	}
	cout << endl;
}
#endif
