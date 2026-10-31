#include <iostream>

// Inlcude Header digunakan untuk memecah code yang tadinya satu file dipecah menjadi 3 file,
// Yaitu main.cpp, transaksi.h dan laporan.h. supaya pembagian tugas jelas, dan mudah untuk melakukan maintenence code.
// Import transaki
#include "transaksi.h" //Bagian Zaki
// Import laporan
#include "laporan.h" //Bagian Hopipah

using namespace std;

int main()
{
    int pilihan;

    // do-while: Membuat program tidak langsung tertutup setelah selesai memilih menu.
    // User bisa kembali ke menu utama secara terus-menerus sampai mereka memilih opsi keluar (angka 3).
    do
    {
        cout << "=========================================\n";
        cout << "=          FINANCE TRACKER CLI          =\n";
        cout << "=========================================\n";
        cout << "= [1] Tambah Transaksi (Masuk/Keluar)   =\n";
        cout << "= [2] Laporan & Rekapitulasi            =\n";
        cout << "= [3] Keluar Program                    =\n";
        cout << "=========================================\n";
        cout << " Pilih Menu (1-3) : ";
        cin >> pilihan;

        // switch-case: Menjadi pengarah navigasi yang sangat bersih dan rapi
        // untuk memisahkan alur tugas antara Zaki, Hopipah, dan Gifran.
        switch (pilihan)
        {
        case 1:
            cout << "\nMemanggil modul Transaksi....\n";
            helloWorldTransaksi(); // Memanggil function helloWorldTransaksi pada transaksi.h

            // sytem("pause") = Menjeda program agar terminal tidak langsung tertutup
            // dan user bisa membaca teks/hasil output terlebih dahulu
            system("pause");
            break;

        case 2:
            cout << "\nMemanggil modul Laporan....\n";
            helloWorldLaporan(); // Memanggil function helloWorldLaporan pada laporan.h

            // sytem("pause") = Menjeda program agar terminal tidak langsung tertutup
            // dan user bisa membaca teks/hasil output terlebih dahulu
            system("pause");
            break;

        case 3:
            cout << "\nTerimakasi telah menggunakan aplikasi ini\n";
            break;
        default:
            cout << "\nPilihan tidak valid! Silakan masukkan angka 1-3.\n";
            // system("pause");
            break;
        }

    } while (pilihan != 3);

    return 0;
}