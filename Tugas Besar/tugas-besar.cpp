/*	Tugas Besar pemrograman komputer
	Kelompok 1 : "Mendata mahasiswa dengan output file .csv"
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

#define Namafile "Data MHS.csv"

ifstream FileDataIn;
ofstream FileDataOut;

void filebaru(){
	FileDataOut.open(Namafile);
	FileDataOut << "\"Nama\",\"NIM\",\"Semester\",\"Jurusan\",\"Prodi\"";
}

void cekfile(){
	FileDataIn.open(Namafile);
	if(!FileDataIn){
		cout << "File tidak ada! Buat file baru? (y/n) : " ;
		char confirm ;
		cin >> confirm ;
		if(confirm == 'y'){
			filebaru();
		}
	}
}

int main(){
	cekfile();
	cout << "selesai!" << endl ;
	return 0;
}
