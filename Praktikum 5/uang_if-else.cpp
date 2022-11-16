#include <iostream>
using namespace std;

int main(){
	int uang;
	
	cout << "Uang kamu berapa? " << endl;
	cout << "Tulis disini : ";
	cin >> uang;
	
	cout << "Uang yang anda miliki sebesar Rp. " << uang << endl;
	
	if (uang >= 10000){
		cout << "Uang anda cukup untuk membeli nasi goreng" << endl;
	} else {
		cout << "Maaf uang anda tidak cukup untuk membeli nasi goreng" << endl;
	}
	
	return 0;
}
	
