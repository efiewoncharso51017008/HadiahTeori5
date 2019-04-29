#include <iostream.h>
#include <conio.h>

main () {
int nilai,jumlah,a;
   cout<<"Masukkan Nilai = " ; cin>>nilai;
        jumlah=0;
        for (a=1; a<=nilai;a++)
        if (nilai%a==0)
        jumlah++;
        if (jumlah==2)
        cout<<"Nilai nilai yang anda inputkan bilangan prima\n";
        else
        cout<<"Nilai yang anda inputkan bukan bilangan prima\n";
getch ();
}
