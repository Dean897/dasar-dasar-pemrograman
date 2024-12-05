#include <iostream>
using namespace std;

int main()
{
    int angka_tebak, menu;
    int angka_benar = 2;
    string nama, nim;

    cout << "Selamat Datang, Silahkan Login Terlebih dahulu." << endl;
    do
    {
        cout << "Masukan Nama : ";
        cin >> nama;
        cout << "Masukan NIM : ";
        cin >> nim;
    } while (nama != "deden" && nim != "144");

    if (nama == "deden" && nim == "144")
    {
        cout << "Login Berhasil, Silahkan Pilih Menu " << endl;
        cout << "1.Game Tebak Angka" << endl;
        cout << "2.Keluar" << endl;
        cout << "Menu Pilihan : ";
        cin >> menu;

        switch (menu)
        {
        case 1:
            cout << "Selamat datang di permainan tebak angka " << endl;
            cout << "Tebak angka dari 1-10" << endl;

            do
            {
                cout << "Masukan angka anda : ";
                cin >> angka_tebak;
                if (angka_tebak > angka_benar)
                {
                    cout << "Kurangi" << endl;
                }
                else if (angka_tebak < angka_benar)
                {
                    cout << "Tambahin" << endl;
                }
                else
                {
                    cout << "Selamat angka anda benar, angkanya adalah  " << angka_benar << endl;
                    break;
                }

            } while (angka_tebak != angka_benar);

            break;
        case 2:
            cout << "Keluar dari menu, sampai jumpa";
            break;
        default:
            break;
        }
    }
    else
    {
        cout << "Login Gagal";
    }
    return 0;
}