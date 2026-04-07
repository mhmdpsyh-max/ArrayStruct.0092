#include <iostream> 
using namespace std;

struct detailalamat{
    string desa;
    string kota;
};

struct orang{
    string nama;
    detailalamat alamat;
    int umur;
};

int main()
{
     orang mhs[3];