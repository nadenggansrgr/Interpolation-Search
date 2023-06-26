#include <iostream>

using namespace std;

struct buku
{
    int kode;
    string judulBuku, pengarang;
};

int main()
{

    int  kunci,posisi, pos, low, high, temp, flag=0, jumlah;

    buku data[8] = { {25," The C++ Programming"," James Wood"},
    {34," Mastering Delphi 6"," Marcopolo"},
    {41," Professional C#"," Simon Webe"},
    {56," Pure JavaScript v2"," Michael Bolton"},
    {63," Advanced JSP & Servlet"," David Dunn"},
    {72," Calculus Make it Easy"," Gunner Christian"},
    {88," Visual Basic 2005 Express"," Antonie"},
    {96," Artificial Life : Volume 1","Gloria Virginia"} };

    jumlah = sizeof(data)/sizeof(data[0]);

    cout << "=====================================================" << endl;
    cout << "\t PROGRAM INTERPOLATION SEARCH" << endl;
    cout << "=====================================================" << endl;

    cout << " Masukkan kode buku yang Anda cari : "; cin >> kunci;


    //interpolation search

    low=0;
    high=jumlah-1;

    do
    {
        posisi = (((kunci-data[low].kode)*(high-low))/(data[high].kode-data[low].kode))+low;
        pos = abs (posisi);

        if (data[pos].kode>kunci)
        {
            high=pos-1;

        }else if (data[pos].kode<kunci)
        {
            low=pos+1;

        }else if (data[pos].kode==kunci)
        {
            flag = 1;
            break;

        }
    } while ( kunci>=data[low].kode && kunci<=data[high].kode);

    if (flag != 1)
    {
        cout << endl;
        cout << " Buku dengan kode "<<kunci<<" tidak ditemukan!" << endl;
    }else
    {
        cout << endl;
        cout << " Buku dengan kode "<<kunci<< " berjudul "<< data[pos].judulBuku << " dan"<< endl;
        cout << " dikarang oleh "<<data[pos].pengarang<< endl;
    }


    return 0;
}

