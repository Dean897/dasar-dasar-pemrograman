#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Username, Password, barang1, barang2, tgl1, tgl2;
    string correctUsername = "Deandra Naufal Maulana";
    string correctPassword = "124240144";
    int menu, stok1, stok2;
    int kesempatan = 3;
    bool loginSuccess = false;

    while (kesempatan > 0 && !loginSuccess)
    {
        cout << "Silahkan Login" << endl;

        cout << "Masukan Username :";
        getline(cin, Username);

        cout << "Masukan Pasword :";
        cin >> Password;

        if (Username == correctUsername && Password == correctPassword)
        {
            loginSuccess = true;
            cout << "Login Berhasil. Selamat datang," << Username << endl;
        }
        else
        {
            kesempatan--;
            if (kesempatan > 0)
            {
                cout << "Login Gagal, Silahkan Coba lagi. Kesempatan :" << kesempatan << endl;
            }
            else
            {
                cout << "Kesempatan Anda Habis, Coba Lagi Nanti.";
            }
        }
    }

    do
    {

        cout << "Silahakn Pilih Menu" << endl;
        cout << "1.Input Barang dan Stok" << endl;
        cout << "2.Pengecekan Barang dan Stok" << endl;
        cout << "Pilih Menu :";
        cin >> menu;
        switch (menu)
        {
        case 1:
            cout << "Nama Barang Pertama :";
            cin >> barang1;
            cout << "Stok Barang Pertama :";
            cin >> stok1;
            cout << "Tanggal Masuk :";
            cin >> tgl1;

            cout << "Nama Barang kedua :";
            cin >> barang2;
            cout << "Stok Barang kedua :";
            cin >> stok2;
            cout << "Tanggal Masuk :";
            cin >> tgl2;
            break;

        case 2:
            cout << "Barang Yang di Input :" << endl;
            cout << "Barang Pertama " << endl;
            cout << "Nama :" << barang1 << endl;
            cout << "Stok :" << stok1 << endl;
            cout << "Barang Kedua " << endl;
            cout << "Nama :" << barang2 << endl;
            cout << "Stok :" << stok2 << endl;
            break;

        case 3:
            cout << "Keluar Dari Menu. \n";
            break;

        default:
            cout << "Gk ada Brok, coba lg.\n";
        }
    } while (menu != 3);

    return 0;
}