/*
	Saya Muhammad Kamal Robbani [2102313] mengerjakan
	soal TP2 Alpro 1 C1 2021 - GRS21
	dalam mata kuliah Algoritma dan Pemrograman 1
	untuk keberkahanNya maka saya tidak melakukan kecurangan
	seperti yang telah dispesifikasikan. Aamiin.
*/

//library
#include <stdio.h>

//Deklarasi Fungsi
int main(){
	
	//Deklarasi Variabel
	char h1, h2, h3, h4;									//Variabel untuk menyimpan huruf masukan dari user
	int n, m;												//Variabel untuk menyimpan angka masukan dari user
	scanf("%c %c %c %c %d %d", &h1, &h2, &h3, &h4, &n, &m);	//Meminta masukan huruf dan angka dari user
	
	int a = 0, b = 0, c = 0, d = 0;							//Variabel untuk menentukan nilai yang pada awalnya bernilai 0
	
	if ((h1 == 'A') || (h1 == 'I') || (h1 == 'U') || (h1 == 'E') || (h1 == 'O')){	//Syarat untuk menentukan apakah masukan dari user pada variabel h1 termasuk huruf vokal atau non-vokal
		a = 1;																		//Nilai jika masukan dari user pada variabel H1 termasuk huruf vokal, variabel a berubah nilai dari 0 menjadi 1
	}
	if ((h2 == 'A') || (h2 == 'I') || (h2 == 'U') || (h2 == 'E') || (h2 == 'O')){	//Syarat untuk menentukan apakah masukan dari user pada variabel h2 termasuk huruf vokal atau non-vokal
		b = 1;																		//Nilai jika masukan dari user pada variabel h2 termasuk huruf vokal, variabel b berubah nilai dari 0 menjadi 1
	}
	if ((h3 == 'A') || (h3 == 'I') || (h3 == 'U') || (h3 == 'E') || (h3 == 'O')){	//Syarat untuk menentukan apakah masukan dari user pada variabel h3 termasuk huruf vokal atau non-vokal
		c = 1;																		//Nilai jika masukan dari user pada variabel h3 termasuk huruf vokal, variabel c berubah nilai dari 0 menjadi 1
	}
	if ((h4 == 'A') || (h4 == 'I') || (h4 == 'U') || (h4 == 'E') || (h4 == 'O')){	//Syarat untuk menentukan apakah masukan dari user pada variabel h4 termasuk huruf vokal atau non-vokal
		d = 1;																		//Nilai jika masukan dari user pada variabel h4 termasuk huruf vokal, variabel d berubah nilai dari 0 menjadi 1
	}
	
	int hasil = a + b + c + d;	//Variabel untuk menentukan jumlah nilai yang nanti akan berpengaruh kepada keluarannya
	
	if (('A' <= h1, h2, h3, h4 <= 'Z') && (hasil == 2) && (n >= m) && ((n + m) % 2 == 0)){		//Syarat untuk kondisi pertama
		printf("Riddle Stone Acquired! Everybody comes home\n");								//Fungsi untuk menampilkan keluaran jika syaratnya terpenuhi
	}
	else if (('A' <= h1, h2, h3, h4 <= 'Z') && (hasil > 2) && (n >= m) && ((n + m) % 2 != 0)){	//Syarat untuk kondisi kedua
		printf("Riddle Stone Acquired! Everybody comes home\n");								//Fungsi untuk menampilkan keluaran jika syaratnya terpenuhi
	}
	else if (('A' <= h1, h2, h3, h4 <= 'Z') && (hasil < 2) && (n >= m) && (n + m >= 14)){		//Syarat untuk kondisi ketiga
		printf("Riddle Stone Acquired! Everybody comes home\n");								//Fungsi untuk menampilkan keluaran jika syaratnya terpenuhi
	}
	else{																						//Kondisi terakhir dimana syarat dari ketiga kondisi sebelumnya tidak ada yang terpenuhi
		printf("You are unworthy, for you cannot riddle me\n");									//Fungsi yang akan menampilkan keluaran jika tidak ada syarat yang terpenuhi dari 3 kondisi sebelumnya
	}
	
	return 0;	//Fungsi yang memberikan sistem operasi tanda untuk keluar dari program
}