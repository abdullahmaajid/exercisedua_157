#include<iostream>															// membuat wadah
#include<vector>															// memasukkan vector
using namespace std;														// menggunakan namespace standar

#include "buku.h"
#include "pengarang.h"

int main() {
	buku* varBuku1 = new buku("Fisika");
	buku* varBuku2 = new buku("Algoritma");
	buku* varBuku3 = new buku("BasisData");
	buku* varBuku4 = new buku("Dasar Pemograman");
	buku* varBuku5 = new buku("Matematika");
	buku* varBuku6 = new buku("Multimedia 1");
