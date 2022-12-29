/*	Tugas Besar pemrograman komputer
	Kelompok 1 : "Mendata mahasiswa dengan output file .csv"
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

#define Namafile "Data MHS.csv" //nama file yang akan digunakan
string namaMHS, nimMHS, smtMHS, jurusanMHS, prodiMHS ;

ifstream FileDataIn;
ofstream FileDataOut;

void clearscreen(){
	#ifdef _WIN32
		system("cls"); //perintah clear screen untuk Windows
	#else
		system("clear"); //perintah clear screen untuk os selain Windows (macOS, Linux, dll)
	#endif
}

//menampilkan pesan
void pesan(){
	clearscreen();
	cout << "====== KELOMPOK 1 ======\n" ;
	cout << "Mohammad Albir Arkan\t| C020322018" << endl;
	cout << "Muhammad Firman Yassin\t| C020322022" << endl;
	cout << "\n====== THIS PROGRAM IS POWERED BY ======\n" ;
	cout << "StackOverflow \nNetbook Eee PC dari Adri :3 \nGitHub.com\n";
}

//membuat file .csv baru
void filebaru(){
	FileDataOut.open(Namafile);
	FileDataOut << "\"Nama\",\"NIM\",\"Semester\",\"Jurusan\",\"Prodi\"";
	FileDataOut.close();
}

//mengecek keberadaan file data
void cekfile(){
	FileDataIn.open(Namafile);
	if(!FileDataIn){
		cout << "File tidak ada! Buat file baru? (y/n) : " ;
		char confirm ;
		cin >> confirm ;
		if(confirm == 'y'){
			filebaru();
		} else {
			pesan();
			cout << "selesai!";
			exit(0) ;
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

//fungsi untuk pengisian data
void isidata(){
	FileDataOut.open(Namafile, ios::app);
	char opt = 'y';
	while(opt == 'y'){
		//system("clear"); //perlu bikin fungsi deteksi os
		clearscreen(); //membersihkan teks
		InputNama();
		InputNIM();
		InputSMT();
		InputJurusan();
		InputProdi();
		cout << "lagi? (y/n) ";
		cin >> opt;
	}
}

int main(){
	cekfile();
	
	cout << "Isi data? (y/n) " ;
	char confirm ;
	cin >> confirm ;
	if(confirm == 'y'){
		isidata();
	} 
	
	pesan(); //tampilkan pesan sebelum mengakhiri program
	cout << "\nselesai!" << endl ;
	return 0;
}
