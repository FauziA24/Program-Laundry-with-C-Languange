
// library
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

// Struct data
struct data	
{
	int tanggal_transaksi;
	int bulan_transaksi;
	int tahun_transaksi;
	char nama[100],tanggal[50];
	int bayar_laundry,jenis_laundry,berat_laundry,tipe_laundry;
	long long int harga_laundry; 
}*baru;

// Membuat void menu
int menu()
{
	int n;
	struct data next[100];
	int pilih;
	int jumlah_data;
    FILE *sale;
    char a;
    char cari[100];
    
	do
	{
		menu:
		system("cls");
		printf("%s\n",__TIME__);
		printf("==================================================\n");
    	printf("|               Welcome To Laundy                |\n");
    	printf("==================================================\n");
    	printf("| Menu pilihan:	                                 |\n");
    	printf("|  1. Tambah Data                                |\n");
    	printf("|  2. Lihat Data                                 |\n");
    	printf("|  3. Hapus Semua Data                           |\n");
    	printf("|  4. Keluar                                     |\n");
    	printf("==================================================\n");
    	printf(" Pilih: "); 
		scanf("%d", &pilih);
		system("cls");
		printf("Masukkan jumlah data yang ingin dimasukkan: ");  
		scanf("%d", &jumlah_data);
		baru = (struct data*)malloc(sizeof(struct data)); 
    	switch(pilih)
    	{
    		case 1:  			
    		sale=fopen("Data.txt","a+");
			for (int i=0; i<jumlah_data; i++)
				{
					system("cls");	
					printf("========================================\n");
					printf("| Pilih Jenis Laundry:                 |\n");
					printf("|  1. Sepatu                           |\n");
					printf("|  2. Tas                              |\n");
					printf("|  3. Baju                             |\n");
					printf("========================================\n");
					printf("Pilih: ");
					scanf("%d", &next[i].tipe_laundry);

					if(next[i].tipe_laundry == 1)
					{
						system("cls");
						printf("============================================\n");
						printf("| Pilih Jenis Laundry:                     |\n");
						printf("|  1. 10.000 Per Sepatu (4hari)            |\n");
						printf("|  2. 20.000 Per Sepatu (1hari)            |\n");
						printf("|  3. Kembali Ke Menu Utama                |\n");
						printf("============================================\n");
						printf("Pilih: ");
						scanf("%d", &n);
						switch (n){
							
							case 1:
							printf("Masukkan nama anda:\t"); 
							scanf( "%s", next[i].nama);
							printf("Masukkan Tanggal Masuk Laundry:\t");
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);
							printf("Masukkan Jumlah Sepatu:\t"); 
							scanf("%d", &next[i].berat_laundry); 
							next[i].harga_laundry=10000*next[i].berat_laundry;
							printf("Harga: %lld\n", next[i].harga_laundry); 
							// User diminta untuk membayar
							bayar:
							printf("Masukkan uang anda: ");   
							scanf("%d", &next[i].bayar_laundry);
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry);
							break;
							
							case 2:
							printf("Masukkan nama anda:\t"); 
							scanf( "%s", next[i].nama);
							printf("Masukkan Tanggal Masuk Laundry:\t");
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);
							printf("Masukkan berat:\t"); 
							scanf("%d", &next[i].berat_laundry); 
							next[i].harga_laundry = 20000*next[i].berat_laundry; 
							printf("Harga: %lld\n", next[i].harga_laundry); 
							// User diminta untuk membayar
						
							printf("Masukkan uang anda: ");   
							scanf("%d", &next[i].bayar_laundry);
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry);
							break;
						}
					}
					else if(next[i].tipe_laundry == 2)
					{
						system("cls");
						printf("===========================================\n");
						printf("| Pilih Jenis Laundry:                    |\n");
						printf("|  1. 10.000 perTas (4hari)               |\n");
						printf("|  2. 15.000 perTas (1hari)               |\n");
						printf("|  3. Kembali Ke Menu Utama               |\n");
						printf("===========================================\n");
						printf("Pilih: ");
						scanf("%d", &n);
						switch (n){
							case 1:
							printf("Masukkan nama anda:\t"); 
							scanf( "%s", next[i].nama);
							printf("Masukkan Tanggal Masuk Laundry:\t");
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);
							printf("Masukkan Jumlah Tas:\t"); 
							scanf("%d", &next[i].berat_laundry);
							next[i].harga_laundry=10000*next[i].berat_laundry; 
							printf("Harga: %lld\n", next[i].harga_laundry); 
							// User diminta untuk membayar
						
							printf("Masukkan uang anda: ");   
							scanf("%d", &next[i].bayar_laundry);
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry);
							break;
							
							case 2:
							printf("Masukkan nama anda:\t"); 
							scanf( "%s", next[i].nama);
							printf("Masukkan Tanggal Masuk Laundry:\t");
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);
							printf("Masukkan berat:\t"); 
							scanf("%d", &next[i].berat_laundry); 
							next[i].harga_laundry = 15000*next[i].berat_laundry; 
							printf("Harga: %lld\n", next[i].harga_laundry); 
							// User diminta untuk membayar
						
							printf("Masukkan uang anda: ");   
							scanf("%d", &next[i].bayar_laundry);
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry);
							break;
							
							case 3:
								menu();
								break;
						}
					}
					else if(next[i].tipe_laundry == 3)
					{
						system("cls");
						// User diminta untuk memilih tipe laundry
						printf("========================================\n");
						printf("|Menu:                                 |\n");
						printf("| 1.Reguler 5000 (4hari)               |\n"); 
						printf("| 2.Express 15000 (1 hari)             |\n");
						printf("| 3. Kembali Ke Menu Utama             |\n");
						printf("========================================\n");
						printf("Pilih :\t");
						scanf("%d", &n); 
						switch (n)
						{
							case 1:
							printf("Masukkan nama anda:\t"); 
							scanf( "%s", next[i].nama);
							printf("Masukkan Tanggal Masuk Laundry:\t");
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);
							printf("Masukkan berat (bulatkan angkanya):\t"); 
							scanf("%d", &next[i].berat_laundry); 
							next[i].harga_laundry=5000*next[i].berat_laundry; 
							printf("Harga: %lld\n", next[i].harga_laundry); 
							// User diminta untuk membayar
						
							printf("Masukkan uang anda: ");   
							scanf("%d", &next[i].bayar_laundry);
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry);
							break;
							
							case 2:
							printf("Masukkan nama anda:\t"); 
							scanf( "%s", next[i].nama);
							printf("Masukkan Tanggal Masuk Laundry:\t");
							scanf("%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);
							printf("Masukkan berat:\t"); 
							scanf("%d", &next[i].berat_laundry); 
							next[i].harga_laundry = 15000*next[i].berat_laundry; 
							printf("Harga: %lld\n", next[i].harga_laundry);
							// User diminta untuk membayar
						
							printf("Masukkan uang anda: ");   
							scanf("%d", &next[i].bayar_laundry);
							printf("Kembalian: %d\n", next[i].bayar_laundry-next[i].harga_laundry);
							break;
							
							case 3:
								menu();
								break;
						}
					}
					else if(next[i].jenis_laundry == 4)
					{
						menu();
					}
				}
					
            	for (int i = 0; i<jumlah_data; i++) 
				{
					fprintf(sale,"%d/%d/%d", next[i].tanggal_transaksi, next[i].bulan_transaksi, next[i].tahun_transaksi);
					fprintf(sale, " %s", next[i].nama);
					fprintf(sale, " %d", next[i].berat_laundry);
					fprintf(sale, " %lld\n", next[i].harga_laundry);
					 // Menampilkan output kedalam layar komputer
					fclose(sale); 
			    }
			break;
				
			case 2:
				sale=fopen("Data.txt","r"); 
				struct data next[100];
					printf("=============================================================================\n");
					printf("| Tanggal Tarnsaksi | Nama      | Berat             | harga                 |\n");
				for (int i = 0; i<jumlah_data; i++) 
				{
					fscanf(sale,"%d/%d/%d", &next[i].tanggal_transaksi, &next[i].bulan_transaksi, &next[i].tahun_transaksi);
					fscanf(sale,"%s", &next[i].nama);
					fscanf(sale,"%d", &next[i].berat_laundry);
					fscanf(sale,"%lld", &next[i].harga_laundry);
					printf("=============================================================================\n");
					printf("| %-2d/%-2d/%-4d         | %-10s| %-8d         | %-8lld              |\n", next[i].tanggal_transaksi, next[i].bulan_transaksi, next[i].tahun_transaksi, next[i].nama, next[i].berat_laundry, next[i].harga_laundry);
					printf("=============================================================================\n");
				}
				fclose(sale); 
				getch(); 
			break;

			case 3:
				sale=fopen("Data.txt","r"); 
				if(!sale)
				{
					printf("Data masih kosong\n"); 
					getch(); 
				}
				else
				{
					printf("Apakah and yakin (y/t) : "); 
					fflush(stdin); 
					a=getchar();
					if(a=='y' || a=='Y') 
					{
						fclose(sale);
						remove("Data.txt"); 
						printf("Data berhasil dihapus!\n"); 
					}
					else if(a=='t' || a=='T') 
					{
						printf("Data tidak jadi dihapus!\n");
					}
					else 
					{
						return 1; 
						printf("Input salah, Silahkan masukkan dengan benar\n"); 
					}
				}
				getch();
				break;
				
			case 4:
				exit(1);
				printf("Terima Kasih\n"); 
				break; 
		}
	}while (exit);
}

// Membuat fungsi main
int main()
{
	menu();
	return 0;
}
