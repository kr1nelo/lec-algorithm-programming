#include <stdio.h>

int main(){
	double penghasilan_bulanan = 10000.0;
	double pengeluaran_bulanan = 6500.0;
	int jumlah_hari_dalam_satu_bulan = 30;
	
	double pengeluaran_harian = pengeluaran_bulanan / jumlah_hari_dalam_satu_bulan;
	double dana_tersisa = penghasilan_bulanan - pengeluaran_bulanan;
	
	printf("Total pengeluaran bulanan : $%.2lf\n", pengeluaran_bulanan);
	printf("Total dana tersisa : $%.2lf\n", dana_tersisa);
	printf("Rata-rata pengeluaran harian : $%.2lf\n", pengeluaran_harian);
	
	return 0;
}
