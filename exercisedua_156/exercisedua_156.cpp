#include <iostream>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
		cout << "Penerbit \" " << nama << "\" ada\n";
	}
	~penerbit() {
		cout << "Penerbit \"" << nama << "\" ada\n";
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

class pengarang {
public:
	string nama;
	vector<penerbit*> daftar_penerbit;

	pengarang(string pNama) :nama(pNama) {
		cout << "pengarang \"" << nama << "\" ada\n";
	}
	~pengarang() {
		cout << "pengarang \"" << nama << "\" ada\n";
	}
	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};

class buku {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;

	buku(string pNama) :nama(pNama) {
		cout << "buku \"" << nama << "\" ada\n";
	}
	~buku() {
		cout << "buku \"" << nama << "\" ada\n";
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void penerbit::cetakPengarang() {
	cout << "Daftar penerbit yang diikuti\"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
}
void pengarang::cetakPenerbit() {
	cout << "Daftar pengarang pada penerbit\"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void buku::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void buku::cetakPengarang() {
	cout << "Daftar buku yang dikarang\"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}
int main() {
	pengarang* varPengarang1 = new pengarang("Joko");
	pengarang* varPengarang2 = new pengarang("Lia");
	pengarang* varPengarang3 = new pengarang("Asroni");
	pengarang* varPengarang4 = new pengarang("Giga");
	penerbit* varPenerbit1 = new penerbit("Gama Pres");
	penerbit* varPenerbit2 = new penerbit("Intan Parwira");
	buku* varBuku1 = new buku("fisika" "Algoritma");
	buku* varBuku2 = new buku("Basisdata");
	buku* varBuku3 = new buku("Dasar Pemograman");
	buku* varBuku4 = new buku("Matematika" "Multimedia1");
	varPengarang1->tambahPenerbit(varPenerbit1);
	varPengarang2->tambahPenerbit(varPenerbit1);
	varPengarang4->tambahPenerbit(varPenerbit1);
	varPengarang3->tambahPenerbit(varPenerbit2);
	varPengarang4->tambahPenerbit(varPenerbit2);

	varPengarang1->cetakPenerbit();
	varPengarang2->cetakPenerbit();
	varPengarang3->cetakPenerbit();
	varPengarang4->cetakPenerbit();
	varPenerbit1->cetakPengarang();
	varPenerbit2->cetakPengarang();

	varBuku1->tambahPengarang(varPengarang1);
	varBuku2->tambahPengarang(varPengarang2);
	varBuku3->tambahPengarang(varPengarang3);
	varBuku4->tambahPengarang(varPengarang4);

	varBuku1->cetakPengarang();
	varBuku2->cetakPengarang();
	varBuku3->cetakPengarang();
	varBuku4->cetakPengarang();

	delete varPengarang1;
	delete varPengarang2;
	delete varPengarang3;
	delete varPengarang4;
	delete varPenerbit1;
	delete varPenerbit2;
	delete varBuku1;
	delete varBuku2;
	delete varBuku3;
	delete varBuku4;

	return 0;
}