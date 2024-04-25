// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

// Membuat fungsi struct untuk menyimpan data didalamnya
struct data	
{
	int tanggal_transaksi; // Deklarasi variabel
	int bulan_transaksi; // Deklarasi variabel
	int tahun_transaksi; // Deklarasi variabel
	char nama[100],tanggal[50]; // Deklarasi variabel
	int bayar_laundry,jenis_laundry,berat_laundry,tipe_laundry; // Deklarasi variabel
	long long int harga_laundry; // Deklarasi variabel
}*baru;

// Membuat void menu
int menu()
{
	int n;// Deklarasi variabel
	struct data next[100]; // Deklarasi variabel
	int pilih; // Deklarasi variabel
	int jumlah_data; // Deklarasi variabel
    FILE *sale; // Deklarasi variabel
    char a; // Deklarasi variabel
    char cari[100]; // Deklarasi variabel
    
	do
	{
		menu:
		system("cls");
		printf("%s\n",__TIME__); // Menampilkan output kedalam layar komputer
		printf("==================================================\n"); // Menampilkan output kedalam layar komputer
    	printf("|               Welcome To Laundy                |\n"); // Menampilkan output kedalam layar komputer
    	printf("==================================================\n"); // Menampilkan output kedalam layar komputer
    	printf("| Menu pilihan:	                                 |\n"); // Menampilkan output kedalam layar komputer
    	printf("|  1. Tambah Data                                |\n"); // Menampilkan output kedalam layar komputer
    	printf("|  2. Lihat Data                                 |\n"); // Menampilkan output kedalam layar komputer
    	printf("|  3. Hapus Semua Data                           |\n"); // Menampilkan output kedalam layar komputer
    	printf("|  4. Keluar                                     |\n"); // Menampilkan output kedalam layar komputer
    	printf("==================================================\n"); // Menampilkan output kedalam layar komputer
    	printf(" Pilih: ");  // Menampilkan output kedalam layar komputer
		scanf("%d", &pilih); // Memasukkan input
		system("cls"); // Membersihkan layar dari program sebelumnya
		printf("Masukkan jumlah data yang ingin dimasukkan: ");   // Menampilkan output kedalam layar komputer
		scanf("%d", &jumlah_data); // Memasukkan input
		baru = (struct data*)malloc(sizeof(struct data)); 
    	switch(pilih)
    	{
    		case 1:  			
    		sale=fopen("Data.txt","a+");
			for (int i=0; i<jumlah_data; i++)
				{
					system("cls");
					printf("========================================\n"); // Menampilkan output kedalam layar komputer
					printf("| Pilih Jenis Laundry:                 |\n"); // Menampilkan output kedalam layar komputer
					printf("|  1. Sepatu                           |\n"); // Menampilkan output kedalam layar komputer
					printf("|  2. Tas                              |\n"); // Menampilkan output kedalam layar komputer
					printf("|  3. Baju                             |\n"); // Menampilkan output kedalam layar komputer
					printf("========================================\n"); // Menampilkan output kedalam layar komputer
					printf("Pilih: "); // Menampilkan output kedalam layar komputer
					scanf("%d", &next[i].tipe_laundry); // Memasukkan input

					if(next[i].tipe_laundry == 1)
					{
						system("cls");
						printf("============================================\n"); // Menampilkan output kedalam layar komputer
						printf("| Pilih Jenis Laundry:                     |\n"); // Menampilkan output kedalam layar komputer
						printf("|  1. 10.000 Per Sepatu (4hari)            |\n"); // Menampilkan output kedalam layar komputer
						printf("|  2. 20.000 Per Sepatu (1hari)            |\n"); // Menampilkan output kedalam layar komputer
						printf("|  3. Kembali Ke Menu Utama                |\n"); // Menampilkan output kedalam layar komputer
						printf("============================================\n"); // Menampilkan output kedalam layar komputer
						printf("Pilih: "); // Menampilkan output kedalam layar komputer
						scanf("%d", &n); // Memasukkan input
						switch (n){
							
							case 1:
							printf("Masukkan nama anda:\t"); // Menampilkan output kedalam layar komputer
							scanf( "%s", next[i].nama);  // Memasukkan input
							printf("Masukkan Tanggal Masuk Laundry:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);  // Memasukkan input
							printf("Masukkan Jumlah Sepatu:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].berat_laundry); // Memasukkan input
							next[i].harga_laundry=10000*next[i].berat_laundry; // Membuat rumus
							printf("Harga: %lld\n", next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							// User diminta untuk membayar
							printf("Masukkan uang anda: ");   // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].bayar_laundry);  // Memasukkan input
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							break;
							
							case 2:
							printf("Masukkan nama anda:\t"); // Menampilkan output kedalam layar komputer
							scanf( "%s", next[i].nama);  // Memasukkan input
							printf("Masukkan Tanggal Masuk Laundry:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);  // Memasukkan input
							printf("Masukkan berat:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].berat_laundry); // Memasukkan input
							next[i].harga_laundry = 20000*next[i].berat_laundry; // Membuat rumus
							printf("Harga: %lld\n", next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							// User diminta untuk membayar
						
							printf("Masukkan uang anda: ");    // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].bayar_laundry);  // Memasukkan input
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							break;
						}
					}
					else if(next[i].tipe_laundry == 2)
					{
						system("cls");
						printf("===========================================\n"); // Menampilkan output kedalam layar komputer
						printf("| Pilih Jenis Laundry:                    |\n"); // Menampilkan output kedalam layar komputer
						printf("|  1. 10.000 perTas (4hari)               |\n"); // Menampilkan output kedalam layar komputer
						printf("|  2. 15.000 perTas (1hari)               |\n"); // Menampilkan output kedalam layar komputer
						printf("|  3. Kembali Ke Menu Utama               |\n"); // Menampilkan output kedalam layar komputer
						printf("===========================================\n"); // Menampilkan output kedalam layar komputer
						printf("Pilih: "); // Menampilkan output kedalam layar komputer
						scanf("%d", &n);  // Memasukkan input
						switch (n){
							case 1:
							printf("Masukkan nama anda:\t"); // Menampilkan output kedalam layar komputer
							scanf( "%s", next[i].nama);  // Memasukkan input
							printf("Masukkan Tanggal Masuk Laundry:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);  // Memasukkan input
							printf("Masukkan Jumlah Tas:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].berat_laundry); // Memasukkan input
							next[i].harga_laundry=10000*next[i].berat_laundry; // Membuat rumus
							printf("Harga: %lld\n", next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							// User diminta untuk membayar
						
							printf("Masukkan uang anda: ");   // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].bayar_laundry);  // Memasukkan input
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							break;
							
							case 2:
							printf("Masukkan nama anda:\t"); // Menampilkan output kedalam layar komputer
							scanf( "%s", next[i].nama);  // Memasukkan input
							printf("Masukkan Tanggal Masuk Laundry:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);  // Memasukkan input
							printf("Masukkan berat:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].berat_laundry); // Memasukkan input
							next[i].harga_laundry = 15000*next[i].berat_laundry; // Membuat rumus
							printf("Harga: %lld\n", next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							// User diminta untuk membayar
						
							printf("Masukkan uang anda: ");   // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].bayar_laundry);  // Memasukkan input
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							break;
							
							case 3:
								menu(); // Akan kembali ke fungsi menu
								break;
						}
					}
					else if(next[i].tipe_laundry == 3)
					{
						system("cls");
						// User diminta untuk memilih tipe laundry
						printf("========================================\n"); // Menampilkan output kedalam layar komputer
						printf("|Menu:                                 |\n"); // Menampilkan output kedalam layar komputer
						printf("| 1.Reguler 5000 (4hari)               |\n"); // Menampilkan output kedalam layar komputer
						printf("| 2.Express 15000 (1 hari)             |\n"); // Menampilkan output kedalam layar komputer
						printf("| 3. Kembali Ke Menu Utama             |\n"); // Menampilkan output kedalam layar komputer
						printf("========================================\n"); // Menampilkan output kedalam layar komputer
						printf("Pilih :\t"); // Menampilkan output kedalam layar komputer
						scanf("%d", &n); // Memasukkan input
						switch (n)
						{
							case 1:
							printf("Masukkan nama anda:\t"); // Menampilkan output kedalam layar komputer
							scanf( "%s", next[i].nama);  // Memasukkan input
							printf("Masukkan Tanggal Masuk Laundry:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);
							printf("Masukkan berat (bulatkan angkanya):\t"); // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].berat_laundry); // Memasukkan input
							next[i].harga_laundry=5000*next[i].berat_laundry; // Membuat rumus
							printf("Harga: %lld\n", next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							// User diminta untuk membayar
						
							printf("Masukkan uang anda: ");   // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].bayar_laundry);  // Memasukkan input
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							break;
							
							case 2:
							printf("Masukkan nama anda:\t"); // Menampilkan output kedalam layar komputer
							scanf( "%s", next[i].nama);  // Memasukkan input
							printf("Masukkan Tanggal Masuk Laundry:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);  // Memasukkan input
							printf("Masukkan berat:\t"); // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].berat_laundry); // Memasukkan input
							next[i].harga_laundry = 15000*next[i].berat_laundry; // Membuat rumus
							printf("Harga: %lld\n", next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							// User diminta untuk membayar
						
							printf("Masukkan uang anda: ");   // Menampilkan output kedalam layar komputer
							scanf("%d", &next[i].bayar_laundry);  // Memasukkan input
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry); // Menampilkan output kedalam layar komputer
							break;
							
							case 3:
								menu(); // akan kembali ke fungsi menu
								break;
						}
					}
					else if(next[i].jenis_laundry == 4)
					{
						menu(); // akan kembali ke fungsi menu
					}
				}
				// Loop	
            	for (int i = 0; i<jumlah_data; i++) 
				{
					fprintf(sale,"%d/%d/%d", next[i].tanggal_transaksi, next[i].bulan_transaksi, next[i].tahun_transaksi);
					fprintf(sale, " %s", next[i].nama);
					fprintf(sale, " %d", next[i].berat_laundry);
					fprintf(sale, " %lld\n", next[i].harga_laundry);
					 // Menampilkan output kedalam layar komputer
					fclose(sale); // Keluar dari file
			    }
			break;
				
			case 2:
				sale=fopen("Data.txt","r"); // Membuka file
				struct data next[100];
					printf("=============================================================================\n"); // Menampilkan output kedalam layar komputer
					printf("| Tanggal Tarnsaksi | Nama      | Berat             | harga                 |\n"); // Menampilkan output kedalam layar komputer
				for (int i = 0; i<jumlah_data; i++) 
				{
					fscanf(sale,"%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);
					fscanf(sale,"%s", &next[i].nama);
					fscanf(sale,"%d", &next[i].berat_laundry);
					fscanf(sale,"%lld", &next[i].harga_laundry);
					 // Memasukkan input
					printf("=============================================================================\n"); // Menampilkan output kedalam layar komputer
					printf("| %-2d/%-2d/%-4d         | %-10s   | %-8d      | %-8lld          |\n", next[i].tanggal_transaksi, next[i].bulan_transaksi, next[i].tahun_transaksi, 
					next[i].nama, next[i].berat_laundry, next[i].harga_laundry); // Menampilkan output kedalam layar komputer
					printf("=============================================================================\n"); // Menampilkan output kedalam layar komputer
				}
				fclose(sale); // Keluar dari file
				getch(); // Membaca data karakter
			break;

			case 3:
				sale=fopen("Data.txt","r"); // Membuka file txt
				if(!sale) // Jika file tidak ada yang masuk
				{
					printf("Data masih kosong\n"); // maka akan mencetak kosong
					getch(); // Membaca data karakter
				}
				else
				{
					printf("Apakah and yakin (y/t) : "); // Menanyakan 
					fflush(stdin); // Area memori yang digunakan untuk penyimpanan sementara ketika data dipindahkan dari satu tempat ke tempat lain
					a=getchar();
					if(a=='y' || a=='Y') // Jika memilih y (besar atau kecil)
					{
						fclose(sale);
						remove("Data.txt"); // Menghapus data yang ada di file
						printf("Data berhasil dihapus!\n"); // Menampilkan output kedalam layar komputer
					}
					else if(a=='t' || a=='T') // Jika memilih t (besar atau kecil)
					{
						printf("Data tidak jadi dihapus!\n"); // Menampilkan output kedalam layar komputer
					}
					else // Jika tidak memasukkan input y atau t
					{
						return 1; // Kembali ke menu hapus
						printf("Input salah, Silahkan masukkan dengan benar\n"); // Menampilkan output kedalam layar komputer
					}
				}
				getch(); // Membaca data karakter
				break;
				
			case 4:
				exit(1); // Program akan berhenti
				printf("Terima Kasih\n"); // Menampilkan output kedalam layar komputer
				 // Memberitahu kode jika program sudah selesai
				break; // Berhenti
		}
	}while (exit);
}

// Membuat fungsi main
int main()
{
	menu(); // Lanjut ke fungsi menu
	return 0; // Memberitahu program jika sudah selesai
}
