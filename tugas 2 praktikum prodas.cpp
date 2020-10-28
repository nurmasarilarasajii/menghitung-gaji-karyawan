/* Menghitung Upah Mingguan Karyawan */
/* Nurma Sari Laras Aji */
/* 20051397062 */
/* 2020B */


#include<iostream>


using namespace std;


main()

{
 char status, golongan;
 string nama;
 int jam;
 long gaji, lembur;
 
 system ("color A");
	;do{
 cout<<"MENGHITUNG UPAH MINGGUAN KARYAWAN"<<endl;
 cout<<"---------------------------------\n";
 cout<<"---------------------------------\n";
 cout<<"---------------------------------\n";
 cout<<"Nama Karyawan     : ";
  cin>>nama;
 cout<<"Golongan (A/B/C/D): ";
 cin>>golongan;
 cout<<"Jam Kerja         : ";
 cin>>jam;
 cout<<"---------------------------------\n";
 cout<<endl;
 
 
 lembur=4000;
 int mylembur=0;
 
 if (jam>48){
  mylembur=jam-48;
 }
 switch(golongan)
 {
 case 'A' :
  gaji = (jam-mylembur) * 5000;
   break;
  case 'B' :
  gaji = (jam-mylembur) * 7000;
   break;
   case 'C' :
  gaji = (jam-mylembur) * 8000;
   break;
    case 'D' :
  gaji = (jam-mylembur) * 10000;
   break;
     default :
            cout<<"Golongan Tidak Tersedia!"<<endl;
            gaji = 0;
            lembur = 0;
 }
   if (jam>48){
gaji = gaji+( (jam - 48) * lembur);
 }
    cout<<"Nama Karyawan  : "<<nama<<endl;
 cout<<"Total Upah     : Rp. "<<gaji<<endl;
 cout<<endl;
 
 cout<<"Apakah Anda ingin mengulang program Kembali (Y/N) ? "<<endl;
		cin>>status; 
	} while	( status == 'Y' || status == 'y');
    cout<<endl;
    
    
	cout<<"--------------------------------"<<endl;
	cout<<"          Terima kasih          "<<endl;
	cout<<"--------------------------------"<<endl;
	return 0;
}
