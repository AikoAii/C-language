#include <stdio.h>

int main() {
    // 1. Variabel untuk data produk (int dan float)
    int kode_produk = 456;
    float harga_satuan = 25000.50; // Harga produk
    int jumlah_beli = 3;

    // 2. Variabel karakter (char)
    char status_pengiriman = 'Y'; // 'Y' untuk Ya, 'N' untuk Tidak

    // 3. Kalkulasi dan variabel hasil (double)
    double total_biaya = (double)jumlah_beli * harga_satuan; 
    // Menggunakan (double) untuk memastikan perhitungan menggunakan presisi tinggi

    // Output Data
    printf("--- Rincian Transaksi ---\n");
    printf("Kode Produk: %d\n", kode_produk);
    printf("Harga Satuan: Rp %.2f\n", harga_satuan);
    printf("Jumlah Beli: %d\n", jumlah_beli);
    printf("Status Pengiriman (Y/N): %c\n", status_pengiriman);
    printf("--------------------------\n");
    printf("Total Biaya: Rp **%.2lf**\n", total_biaya);

    // Manipulasi Variabel (mengubah nilai)
    jumlah_beli = 5; // Nilai 'jumlah_beli' kini menjadi 5

    // Kalkulasi ulang setelah perubahan
    total_biaya = (double)jumlah_beli * harga_satuan;

    printf("\n--- Update Transaksi ---\n");
    printf("Jumlah Beli Baru: %d\n", jumlah_beli);
    printf("Total Biaya Baru: Rp **%.2lf**\n", total_biaya);

    return 0;
}