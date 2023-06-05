#include<iostream>															// membuat wadah
#include<vector>															// memasukkan vector
using namespace std;														// menggunakan namespace standar

#include "buku.h"															// memasukkan header buku
#include "pengarang.h"														// memasukkan header pengarang

int main() {																// progam utama
	buku* varBuku1 = new buku("Fisika");									// membuat objek buku 1 = fisika
	buku* varBuku2 = new buku("Algoritma");									// membuat objek buku 1 = algoritma
	buku* varBuku3 = new buku("BasisData");									// membuat objek buku 1 = basis data
	buku* varBuku4 = new buku("Dasar Pemograman");							// membuat objek buku 1 = dasar pemrograman
	buku* varBuku5 = new buku("Matematika");								// membuat objek buku 1 = matematika
	buku* varBuku6 = new buku("Multimedia 1");								// membuat objek buku 1 = multimedia 1
	pengarang* varPengarang1 = new pengarang("Joko");						// membuat objek pengarang 1 = joko
	pengarang* varPengarang2 = new pengarang("Lia");						// membuat objek pengarang 1 = lia
	pengarang* varPengarang3 = new pengarang("Asroni");						// membuat objek pengarang 1 = asroni
	pengarang* varPengarang4 = new pengarang("Giga");						// membuat objek pengarang 1 = giga

	varPengarang1->tambahJudulBuku(varBuku1);								// pengarang1 mengarang judulbuku1
	varPengarang1->tambahJudulBuku(varBuku2);								// pengarang1 mengarang judulbuku2
	varPengarang2->tambahJudulBuku(varBuku3);								// pengarang2 mengarang judulbuku3
	varPengarang3->tambahJudulBuku(varBuku4);								// pengarang3 mengarang judulbuku4
	varPengarang4->tambahJudulBuku(varBuku5);								// pengarang4 mengarang judulbuku5
	varPengarang4->tambahJudulBuku(varBuku6);								// pengarang4 mengarang judulbuku6


	varPengarang1->cetakJudulBuku();										// cetak judul buku yang pengarang 1 tulis
	varPengarang2->cetakJudulBuku();										// cetak judul buku yang pengarang 2 tulis
	varPengarang3->cetakJudulBuku();										// cetak judul buku yang pengarang 3 tulis
	varPengarang4->cetakJudulBuku();										// cetak judul buku yang pengarang 4 tulis

	return 0;

}
