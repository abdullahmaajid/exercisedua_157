#include<iostream>
#include<vector>
using namespace std;

#include "buku.h"
#include "pengarang.h"

int main() {
	buku* varBuku1 = new buku("Fisika");
	buku* varBuku2 = new buku("Algoritma");
	buku* varBuku3 = new buku("BasisData");
	buku* varBuku4 = new buku("Dasar Pemograman");
	buku* varBuku5 = new buku("Matematika");
	buku* varBuku6 = new buku("Multimedia 1");
	pengarang* varPengarang1 = new pengarang("Joko");
	pengarang* varPengarang2 = new pengarang("Lia");
	pengarang* varPengarang3 = new pengarang("Asroni");
	pengarang* varPengarang4 = new pengarang("Giga");

	varPengarang1->tambahJudulBuku(varBuku1);
	varPengarang1->tambahJudulBuku(varBuku2);
	varPengarang2->tambahJudulBuku(varBuku3);
	varPengarang3->tambahJudulBuku(varBuku4);
	varPengarang4->tambahJudulBuku(varBuku5);
	varPengarang4->tambahJudulBuku(varBuku6);

	varPengarang1->cetakJudulBuku();
	varPengarang2->cetakJudulBuku();
	varPengarang3->cetakJudulBuku();
	varPengarang4->cetakJudulBuku();

	return 0;

}