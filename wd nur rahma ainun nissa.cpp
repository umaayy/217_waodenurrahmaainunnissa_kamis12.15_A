#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main (){
int pilihan, username, pasowrd, kampus;
int kapasitas;
int admin, jadwal;
int pasword;

//struct {
//	int pasword;
//	int kapasitas;
//	double jadwal; 
//	int admin;
//	string kelas;
//};

//void tampilkanLayanan(){
	//cout << "Masukkan pasword (4 digit): " << endl;
	//cin >> pasword.mhs;
	//cout << ""
//}
	
	
cout << "========= SELAMAT DATANG DI SIMERU =========" << endl;
cout << "|                                          |" << endl;
cout << "| Layanan yang tersedia :                  |" << endl;
cout << "| 1. Login                                 |" << endl;
cout << "| 2. Informasi Ruang Kelas                 |" << endl;
cout << "| 3. Lokasi                                |" << endl;
cout << "| 4. Fasilitas                             |" << endl;
cout << "| Masukkkan pilihan anda :                 |" << endl;
cout << "|                                          |" << endl;
cout << "|==========================================|" << endl;

//switch (pilihan){
	//case 1:
	//	cout << "1. Login " << endl;
	//	break;
	//case 2:
		//cout << "2. Informasi Ruang Kelas " << endl;
	//	break;
	//case 3:
		//cout << "3. Lokasi " << endl;
		//break;
	//case 4:
	//	cout << "4. Fasilitas " << endl;
	//	default:
	//}

cout << "Masukkan username : " << endl;
cin >> username;
cout << "Masukkan pasowrd  : " << endl;
cin >> pasword;
cout << endl;
cout << endl;


cout << "Apakah anda ingin melihat jadwal?" << endl;
cin >> username;
cout << "Jadwal matkul yang tersedia" << endl;
cout << "|-------------------------------------------|" << endl;
cout << "|MATKUL   |DOSEN     |WAKTU       |KEBUTUHAN|" << endl;
cout << "|-------------------------------------------|" << endl;
cout << "|Alpro    |P Wahyu   |07.00-09.30 |49 Mhs   |" << endl;
cout << "|Matdis   |B Lisna   |12.00-14.00 |20 Mhs   |" << endl;
cout << "|PWEB     |P fiftin  |14.00-17.00 |35 Mhs   |" << endl;
cout << "|Arsikom  |P jefre   |07.00-09.00 |29 Mhs   |" << endl;
cout << "|         |          |            |         |" << endl;
cout << "|-------------------------------------------|" << endl;
cout << endl;
cout << endl;


cout << "|-------------------------------------------|" << endl;
cout << "| Login |                          |Logout  |" << endl;
cout << "|-------------------------------------------|" << endl;
cout << "|          SELAMAT DATANG DI SIMERU         |" << endl;
cout << "| Kampus :                                  |" << endl;cin >> kampus;
cout << "| Kampus 1                                  |" << endl;
cout << "| Kampus 2                                  |" << endl;
cout << "| Kampus 3                                  |" << endl;
cout << "| Kampus 4                                  |" << endl;
cout << "| Kampus 5                                  |" << endl;
cout << "|                       (@)Univ Ahmad Dahlan|" << endl;
cout << "|                                           |" << endl;
cout << "|-------------------------------------------|" << endl;


return 0;
}

