#include <iostream>
using namespace std;

struct detail_buku
{
    int id_bk;
    string judul;
    string pengarang;
    int harga;
};

int main()
{
    int menu;
    int id_bk_hapus;
    int banyak_buku = 100;
    detail_buku buku[banyak_buku];

    cout << "Selamat Datang di Toko Buku Y " << endl;
    do
    {
        cout << "Silahkan Pilih Menu apa Yang Ingin Anda Lakukan  " << endl;
        cout << "Menu Yang Tersedia :" << endl;
        cout << "1.Menambahkan Buku" << endl;
        cout << "2.Daftar Buku Yang Di Tambahkan" << endl;
        cout << "3.Ubah Data Buku" << endl;
        cout << "4.Hapus Buku " << endl;
        cout << "5.Pembelian Buku" << endl;
        cout << "6.Keluar" << endl;
        cout << "Menu Yang Di Pilih :";
        cin >> menu;
        cout << "\n";

        switch (menu)
        {
        case 1:

            cout << "Masukan Banyak Buku Yang Ingin di Tambahkan :";
            cin >> banyak_buku;

            for (int i = 0; i < banyak_buku; i++)
            {
                cout << "Buku ke-" << i + 1 << endl;
                cout << "Masukan ID Buku :";
                cin >> buku[i].id_bk;
                cout << "Judul Buku :";
                cin.ignore();
                getline(cin, buku[i].judul);
                cout << "Nama Pengarang :";
                getline(cin, buku[i].pengarang);
                cout << "Harga Buku :";
                cin >> buku[i].harga;
                cout << "\n";
            }

            break;

        case 2:

            cout << "Daftar Buku :" << endl;
            for (int i = 0; i < banyak_buku; i++)
            {
                cout << "Buku ke-" << i + 1 << endl;
                cout << "ID Buku :" << buku[i].id_bk << endl;
                cout << "Judul Buku :" << buku[i].judul << endl;
                cout << "Pengarang :" << buku[i].pengarang << endl;
                cout << "Harga :" << buku[i].harga << endl;
                cout << "\n";
            }
            break;

        case 3:
        {
            int id_ubah;
            cout << "Masukan ID Buku Yang Ingin diubah :";
            cin >> id_ubah;
            cin.ignore();

            bool benar = false;
            int index_buku;

            for (int i = 0; i < banyak_buku; i++)
            {
                if (buku[i].id_bk == id_ubah)
                {
                    benar = true;
                    index_buku = i;
                    break;
                }
            }

            if (benar)
            {
                cout << "Judul Baru :";
                getline(cin, buku[index_buku].judul);
                cout << "Nama Pengarang Baru :";
                getline(cin, buku[index_buku].pengarang);
                cout << "Harga Baru :";
                cin >> buku[index_buku].harga;
                cout << "Data Buku Berhasil diperbarui. " << endl;
                cout << "\n";
            }
            else
            {
                cout << "ID Buku Tidak Ditemukan.";
                cout << "\n";
            }
            break;
        }

        case 4:
        {
            int id_hapus;
            cout << "Masukan ID Buku Yang Ingin dihapus :";
            cin >> id_hapus;

            bool hapus = false;
            int index_hapus;

            for (int i = 0; i < banyak_buku; i++)
            {
                if (buku[i].id_bk == id_hapus)
                {
                    hapus = true;
                    index_hapus = i;
                    break;
                }
            }
            if (hapus)
            {
                for (int i = index_hapus; i < banyak_buku - 1; i++)
                {
                    buku[i] = buku[i + 1];
                }
                banyak_buku--;
                cout << "Buku Berhasil dihapus.";
                cout << "\n";
            }
            else
            {
                cout << "ID Tidak Ditemukan.";
                cout << "\n";
            }
            break;
        }

        case 5:
        {
            int total_harga = 0;
            int harga_diskon_5;
            int diskon_voucher;
            int banyak_buku_dibeli;
            char jawab;
            string kode;
            int id_buku_dibeli[100];

            cout << "Massukan Jumlah Buku Yang Ingin Dibeli :";
            cin >> banyak_buku_dibeli;

            for (int i = 0; i < banyak_buku_dibeli; i++)
            {
                cout << "Masukan ID Buku yang Ingin Dibeli :" << endl;
                cout << "ID Buku ke-" << i + 1 << endl;
                cin >> id_buku_dibeli[i];
            }

            for (int i = 0; i < banyak_buku_dibeli; i++)
            {
                for (int j = 0; j < banyak_buku; j++)
                {
                    if (id_buku_dibeli[i] == buku[j].id_bk)
                    {
                        total_harga += buku[j].harga;
                        break;
                    }
                }
            }

            bool id_sama = false;

            for (int i = 0; i < banyak_buku_dibeli; i++)
            {
                for (int j = i + 1; j < banyak_buku_dibeli; j++)
                {
                    if (id_buku_dibeli[i] == id_buku_dibeli[j])
                    {
                        id_sama = true;
                        break;
                    }
                }
            }

            if (id_sama)
            {
                harga_diskon_5 = total_harga - (total_harga * 0.05);

                cout << "Diskon 5%' Diterapkan Karena Anda Membeli Buku Dengan ID yang Sama." << endl;
                cout << "Apakah anda Ingin Menggunakan Kode Voucher?" << endl;
                cout << "(Y/N) :";
                cin >> jawab;

                if (jawab == 'Y')
                {
                    cout << "Masukan Kode Voucher :";
                    cin >> kode;
                    if (kode == "JPYUM")
                    {
                        cout << "Kode Benar, Diskon 10%' diterapkan.";
                        diskon_voucher = harga_diskon_5 - (harga_diskon_5 * 0.10);
                        cout << "Total harga : " << diskon_voucher << endl;
                        cout << "\n";
                    }
                    else
                    {
                        cout << "Kode Voucher Salah, Diskon Tidak diterapkan." << endl;
                        cout << "Total Harga :" << harga_diskon_5 << endl;
                        cout << "\n";
                    }
                }
                else
                {
                    cout << "Total Harga : " << harga_diskon_5 << endl;
                    cout << "\n";
                }
            }
            else
            {
                cout << "Total harga : " << total_harga << endl;
                cout << "\n";
            }

            break;
        }

        case 6:
            cout << "Keluar Dari Program, Selamat Tinggal";
            break;

        default:
            cout << "ANOMALI";
            break;
        }
    } while (menu != 6);
}