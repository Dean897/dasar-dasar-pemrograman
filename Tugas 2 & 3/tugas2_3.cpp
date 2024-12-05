#include <iostream>
#include <string>
using namespace std;

struct detail_pesan
{
    string nama;
    int banyak;
    int harga;
};

int main()
{
    int bnyk_pesan;
    int menu;
    string pilih;
    int total_harga;

    cout << "=====Selamat Datang di Rumah Makan Y=====" << endl;
    cout << "    ======Menu yang tersedia======" << endl;
    cout << "        ======Menu Paket======" << endl;
    cout << "1.Paket A, Nasi Ayam Goreng/Bakar + es Teh" << endl;
    cout << "Harga : 13RB" << endl;
    cout << "2.Paket B, Nasi Ayam Goreng/Bakar + es Jeruk" << endl;
    cout << "Harga : 13RB" << endl;
    cout << "3.Paket C, Nasi Ayam Goreng/Bakar + Tahu & Tempe + es Teh" << endl;
    cout << "Harga : 15RB" << endl;
    cout << "4.Paket D, Nasi Ayam Goreng/Bakar + Tahu & Tempe + es Jeruk" << endl;
    cout << "Harga : 15RB" << endl;
    cout << "         ======Menu Satuan======" << endl;
    cout << "1.Ayam Goreng/Bakar" << endl;
    cout << "Harga : 8RB" << endl;
    cout << "2.Nasi Putih" << endl;
    cout << "Harga : 4RB" << endl;
    cout << "3.Tahu" << endl;
    cout << "Harga : 1RB/pcs" << endl;
    cout << "4.Tempe" << endl;
    cout << "Harga : 1RB/pcs" << endl;
    cout << "5.Es Teh" << endl;
    cout << "Harga : 3RB" << endl;
    cout << "6.Es Jeruk" << endl;
    cout << "Harga : 4RB" << endl;
    cout << "Silahkan Masukan Banyak Pesanan Anda :";
    cin >> bnyk_pesan;
    detail_pesan pesan[bnyk_pesan];
    cout << endl;

    cout << "Banyak Pesanan Anda : " << bnyk_pesan << endl;
    cout << endl;

    do
    {
        cout << "Silahkan Pilih Menu" << endl;
        cout << "1.Masukan Detail Pesanan" << endl;
        cout << "2.Total Harga Pesanan" << endl;
        cout << "3.Keluar Dari Menu" << endl;
        cout << "Menu Pilihan Anda :";
        cin >> menu;
        cout << "\n";

        switch (menu)
        {
        case 1:

            cout << "Apakah anda Ingin Memilih Menu Paket : Y/N " << endl;
            cout << "Pilihan anda :";
            cin >> pilih;
            if (pilih == "Y")
            {

                for (int i = 0; i < bnyk_pesan; i++)
                {
                    cout << "Menu ke-" << i + 1 << endl;
                    cout << "Detail Pesanan " << endl;
                    cout << "Paket :";
                    cin >> pesan[i].nama;
                    cout << "Banyak Pesanan :";
                    cin >> pesan[i].banyak;
                    cout << "Harga Pesanan :";
                    cin >> pesan[i].harga;
                    cout << "\n";
                }
            }
            else
            {

                for (int i = 0; i < bnyk_pesan; i++)
                {
                    cout << "Menu ke-" << i + 1 << endl;
                    cout << "Detail Pesanan " << endl;
                    cout << "Nama Pesanan :";
                    cin >> pesan[i].nama;
                    cout << "Banyak Pesanan :";
                    cin >> pesan[i].banyak;
                    cout << "Harga Pesanan :";
                    cin >> pesan[i].harga;
                    cout << "\n";
                }
            }
            break;

        case 2:
            for (int i = 0; i < bnyk_pesan; i++)
            {
                cout << "Pesanan Anda" << endl;
                cout << "Pesanan ke-" << i + 1 << endl;
                cout << "Nama Pesanan :" << pesan[i].nama << endl;
                cout << "Banyak Pesanan :" << pesan[i].banyak << endl;
                cout << "Harga Pesanan :" << pesan[i].harga << endl;
                cout << "\n";
            }
            total_harga = 0;
            for (int i = 0; i < bnyk_pesan; i++)

            {
                total_harga += pesan[i].harga;
            }
            cout << "Total Harga Pesanan Anda Adalah :" << total_harga << "RB" << endl;
            cout << "\n";
            break;

        case 3:
            cout << "Keluar Dari Menu" << endl;
            cout << "Selamat Tinggal";

            break;

        default:
            cout << "Alomani";
            break;
        }

    } while (menu != 3);

    return 0;
}