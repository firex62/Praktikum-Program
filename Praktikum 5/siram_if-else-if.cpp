#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	string cmd;
	
	cout << "Masukan perintah anda : " ;
	cin >> cmd;
	
	if (cmd == "siram"){
		cout << "Menyiram taman" ;
		sleep(1);
		cout << ".";
		sleep(1);
		cout << ".";
		sleep(1);
		cout << ".";
		sleep(1);
		cout << "." << endl;
		sleep(1);
		cout << "Selesai menyiram!" << endl;	
	} else if(cmd == "suhu"){
		cout << "Suhu udara saat ini adalah 28 derajat celcius" << endl;
	} else if (cmd == "help"){
		cout << "===== BANTUAN ====" << endl;
		cout << "siram : untuk menyiram taman" << endl;
		cout << "suhu : untuk menampilkan suhu" << endl;
		cout << "help : menampilkan bantuan" << endl;
	} else {
		cout << "Ketik help untuk menampilkan bantuan" << endl;
	}
	
	return 0;
}
