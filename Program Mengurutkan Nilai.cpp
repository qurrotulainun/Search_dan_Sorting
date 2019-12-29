#include<iostream>
//TUGAS ALPRO PERTEMUAN 13
using namespace std;
int main()
{
   int nilai[7],abc,i,j;
   cout<<"Program Mengurutkan Nilai"<<endl;
   cout<<"Masukkan Nilai Yang Akan Diurutkan : \n";
   for(i=0; i<7; i++)
   {
   		cout<<"Nilai ["<<i+1<<"] = ";cin>>nilai[i];
   }  
   for(i=0; i<6; i++)
   {
       for(j=i+1; j<7; j++)
      {
          if(nilai[i]>nilai[j])
         {
            abc = nilai[i];
            nilai[i] = nilai[j];
            nilai[j] = abc;
         }
      }
   }
   cout<<"Nilai Setelah Diurutkan : "<<endl;
   for(i=0; i<7; i++)
   {
       cout<<nilai[i]<<" ";
   }
   return 0;
}
