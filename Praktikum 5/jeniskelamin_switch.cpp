#include <iostream>
using namespace std;

int main(){
	char jenis_kelamin;
	
	cout << "Silahkan pilih jenis kelamin anda (L/P): ";
	cin >> jenis_kelamin;
	
	switch (toupper(jenis_kelamin)){
		case 'L':
		cout << "Jenis kelamin yang anda pilih adalah Laki-Laki" << endl;
		break;
		case 'P':
		cout << "Jenis kelamin yang anda pilih adalah Perempuan" << endl;
		break;
		default:
		cout << "Input tidak valid";
	}
	
	return 0;
}
	
