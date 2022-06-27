#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
//Kedua, buat prosedur delay nya menggunakan perulangan kosong dengan paramameter eperti
//dibawah ini.
void gotoxy(int x, int y)
{
 // penggunaan gotoxy ini berlaku jika coding ini di dalam Dev C++, jika di borlan C hapus saja Void gotoxy ini
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void delay(int a)
{
for(int x=0;x<a*150;x++)
{
for(int y=0;y<a*150;y++)
{}
}
}
//Ketiga, buatkan lagi prosedur untuk pembuatan gambar dan pergerakannya.
void kiri()
{
for (int i=40;i>0;i--)/* angka 20 looping bisa diganti sesukamu*/
{
delay(50);
gotoxy(i,2)           ; cout<<" _..-------++._ ";
gotoxy(i,3)          ;cout<<" _.-'/ | _|| \\--._ ";
gotoxy(i,4)     ;cout<<" __.--'`._/_\j_____/_||___\\ `-- -. ";
gotoxy(i,5)            ;cout<<" _.--'____ | \ _BMW__ / ";
gotoxy(i,6)         ;cout<<" _j /,--.\\ | =o | /,--.\\ |_ ";
gotoxy(i,7)     ;cout<<" [__]==/ .-. \\==`===========/=//.- . \\=[__] ";
gotoxy(i,8)     ;cout<<" `-._|\\ `-' /|___\\_________/_|\\ `-' /|_.' ";
gotoxy(i,9)            ;cout<<" `---'                     `---' ";
}
}
int main()
{
kiri();
getch ();
}
