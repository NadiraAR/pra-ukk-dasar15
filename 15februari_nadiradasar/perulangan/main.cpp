#include <iostream>

using namespace std;

int main()
{
    int i, j;
    cout << "=====For=======" <<endl;
    for(i=0; i<10; i++){
        cout <<"perulangan ke "<< i <<endl;
    }

 cout << "=======While=======" <<endl;
 for(i=0; i<10; i++){
    cout << "perulangan ke "<< endl;
 }

    int J = 0;
    char tambah='y';
    cout << "apakah anda ingin nambah? (y/n) ";
    while(tambah == 'y'){
        cout << "perulangan ke " <<j <<endl;
        cout << "apakah ingin nambah? (y/n)  ";
        cin>> tambah;
        j++;
    }


    return 0;
}
