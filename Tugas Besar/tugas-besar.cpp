/*	Tugas Besar pemrograman komputer
	Kelompok 1 : "Mendata mahasiswa dengan output file .csv"
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

#define Namafile "Data MHS.csv"
string namaMHS, nimMHS, smtMHS, jurusanMHS, prodiMHS ;

ifstream FileDataIn;
ofstream FileDataOut;

void filebaru(){
	FileDataOut.open(Namafile);
	FileDataOut << "\"Nama\",\"NIM\",\"Semester\",\"Jurusan\",\"Prodi\"";
	FileDataOut.close();
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

void InputNama(){
	cout << "Nama : ";
	getline(cin >> ws, namaMHS);
	FileDataOut << "\n\"" << namaMHS << "\"" ;
}

void InputNIM(){
	cout << "NIM : ";
	getline(cin >> ws, nimMHS);
	FileDataOut << ",\"" << nimMHS << "\"" ;
}

void InputSMT(){
	cout << "Semester : ";
	getline(cin >> ws, smtMHS);
	FileDataOut << ",\"" << smtMHS << "\"" ;
}

void InputJurusan(){
	cout << "Jurusan : ";
	getline(cin >> ws, jurusanMHS);
	FileDataOut << ",\"" << jurusanMHS << "\"" ;
}

void InputProdi(){
	cout << "Program Studi : ";
	getline(cin >> ws, prodiMHS);
	FileDataOut << ",\"" << prodiMHS << "\"" ;
}

void clearscreen(){
	#ifdef _WIN32
		system("cls");
	#else
		system("clear");
	#endif
}

int main(){
	cekfile();
	FileDataOut.open(Namafile, ios::app);
	
	cout << "Isi data? (y/n) " ;
	char confirm ;
	cin >> confirm ;
	if(confirm == 'y'){
		char opt = 'y';
		while(opt == 'y'){
			//system("clear"); //perlu bikin fungsi deteksi os
			clearscreen();
			InputNama();
			InputNIM();
			InputSMT();
			InputJurusan();
			InputProdi();
			cout << "lagi? (y/n) ";
			cin >> opt;
		}
	}
	
	FileDataOut.close();
	cout << "\nselesai!" << endl ;
	return 0;
}
