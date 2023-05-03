#include <iostream>
using namespace std;

void buatKetupat(int size){
    int space = -1; //nilai awal spasi antar bintang 

    for (int k = size-1; k > 0; k--){
        space++;  // menambah jumlah spasi

        //melakukan perulangan bintang di sisi kanan atas 
        for (int i = k; i > 0; i--){
            cout<<"a ";   
        }

        //melakukan perulangan spasi antar bintang 
        for (int l = space*2; l > 0; l--){  
            cout<<"  ";
        }

        //melakukan perulangan bintang di sisi kiri atas
        for (int j = k; j > 0; j--){
            cout<<"a ";
        }
   
        cout<<endl;
    }    

    for (int k1 = 1; k1 < size ; k1++){
        // melakukan perulangan bintang di sisi kanan bawah
        for (int j1 = k1; j1 > 0 ; j1--){
            cout<<"a ";
        }    

        // melakukan perulangan spasi antar bintang 
        for (int l1 = space * 2; l1 > 0; l1--){
            cout<<"  ";
        }
        
        // melakukan perulangan bintang di sisi kiri bawah 
        for (int i1 = k1; i1 > 0; i1--){
            cout<<"a ";
        }
        space--;
        cout<<endl;
    }    
}

int main(){

int data;
cout<<"Masukkan besar ketupat : ";
cin>>data;   //meminta input size dari ketupat 
buatKetupat(data);  //memproses gambar ketupat 



}