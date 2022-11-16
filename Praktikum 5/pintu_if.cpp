#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	bool sensor;
	
	cout << "Apakah anda ingin masuk (1/0) " ;
	cin >> sensor;
	
	if (sensor == true){
		cout << "Pintu dibuka selama 3 detik" << endl;
		cout << "3" << endl;
		sleep(1);
		cout << "2" << endl;
		sleep(1);
		cout << "1" << endl;
		sleep(1);
	}
	cout << "Pintu ditutup" << endl;
	return 0;
}
