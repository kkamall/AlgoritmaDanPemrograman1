/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP1 Alpro 1 C1 2021 - PP21C1
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

//Library :
#include <stdio.h> 		//Library untuk I/O

//Deklarasi fungsi
int main(){

//Deklarasi variabel
//Variabel-variabel untuk meminta input dan menampilkan output nilai panjang, lebar, dan tinggi dari user
	int p, l, t;		//Variabel untuk menampung nilai p = panjang, l = lebar, t = tinggi
	printf("");			//Fungsi untuk menampilkan Output pada variabel panjang
	scanf("%d", &p);	//Fungsi untuk meminta Input nilai panjang dari user
	printf("");			//Fungsi untuk menampilkan Output pada variabel lebar
	scanf("%d", &l);	//Fungsi untuk meminta Input nilai lebar dari user
	printf("");			//Funsgi untuk menampilkan Output pada variabel tinggi
	scanf("%d", &t);	//Fungsi untuk meminta Input nilai tinggi dari user
	
//Variabel-variabel untuk menampilkan output yang telah diolah (hasil akhir)	
	int LRT = p * t * 2 + l * t * 2;						//Variabel untuk menampung nilai Luas Ruang Tamu
	printf("Luas ruang tamu : %d meter persegi\n", LRT);	//Fungsi untuk menampilkan Output nilai Luas Ruang Tamu pada variabel LRT
	
	int j = LRT * 100 / 3600;											//Variabel untuk menampung nilai jam
	int m = LRT * 100 % 3600 / 60;										//Variabel untuk menampung nilai menit
	int d = LRT * 100 % 3600 % 60;										//Variabel untuk menampung nilai detik
	printf("Waktu menunggu  : %d jam, %d menit, %d detik\n", j, m, d);	//Fungsi untuk menampilkan output nilai-nilai yang telah diolah, yaitu jam, menit, dan detik
	
	return 0;	//Fungsi yang memberikan sistem operasi tanda untuk keluar dari program.
}