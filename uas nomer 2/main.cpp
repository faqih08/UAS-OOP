#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------------------Nilai Mean, Modus & Median----------------------------------------------" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    int pil,banyak[100],x,modus[100],k=1,n;
    float nilai[100],jumlah=0,max,min, rata,med;

    cout<<"masukan jumlah bilangan :";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"masukan nilai bil ke "<<i+1<<" : "; cin>>nilai[i];
    }


    for(int i=0;i<n;i++){
        if(nilai[i]>max){
            max=nilai[i];
        }
    }
    cout<<"nilai maksimum :"<<max;
    cout<<endl;
    min=nilai[0];
    for(int i=0;i<n;i++){
        if(nilai[i]<min){
            min=nilai[i];
        }
    }

    cout<<"nilai minimum : "<<min;
    cout<<endl;


    cout<<"nilai yang diurutkan"<<endl;
       for(int i=0;i<n;i++)
       {
         for(int j=(i+1);j<n;j++)
          {
           if(nilai[i]>nilai[j])
            {
             int tmp;
             tmp=nilai[i];
             nilai[i]=nilai[j];
             nilai[j]=tmp;
            }
          }

          cout<<nilai[i]<<"  ";
       }

       for(int i=0;i<n;i++)
       {
         banyak[i]=0;
          for(int j=0;j<n;j++)
          {
           if(nilai[i]==nilai[j])
             {
              banyak[i]++;
             }
          }
       }

       for(int i=0;i<n;i++){
          if(banyak[i]>k)
          {
           k=banyak[i];
          }

       }

       //jika modus lebih dari satu
       for(int i=0;i<n;i++){
          if(x==0)
           modus[x]=0;
          else
           modus[x]=modus[x-1];

          if(banyak[i]==k)
          {
           if(nilai[i]!=modus[x])
           {
            modus[x]=nilai[i];
            x++;
           }
          }
       }


       int z=0;
       for(int i=0;i<n;i++){
           if(banyak[i]==k)
           {
                  z++;
           }
       }
       if(z==n){
         x=0;
       }

     if (x==0)
      cout<<"\nTidak Ada Modus!"<<endl;
     else
      {cout<<"\nModus ada "<<x<<" : "<<endl;
       for(int i=0;i<x;i++)
       {
       cout<<modus[i]<<" ";
       }


     }

    cout<<endl;

    for(int i=0;i<n;i++){
    jumlah=jumlah+nilai[i];

    }
    rata=jumlah/n;
    cout<<"mean : "<<rata;

    cout<<endl;


    if(n%2==0){
        med=(nilai[(n/2)]+nilai[(n/2)-1])/2;
    }
    else{
        med=nilai[(n/2)];
    }
    cout<<"median : "<<med;




    return 0;
}


