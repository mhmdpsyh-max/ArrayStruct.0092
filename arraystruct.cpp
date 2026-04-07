#include <iostream>
using namespace std;

int main() {
    int dataku[5] = {10,20,30,40,50,};
    int datamu[5];
    int x;
    
    cout<< "Data ke - 3 :"<<dataku[2]<<endl;

    x = dataku[2]*3;
    dataku[2] = 600;
    cout<< "Data ke - 3 yang baru :"<<dataku[2]<<endl;
}