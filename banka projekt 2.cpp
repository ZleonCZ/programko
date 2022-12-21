

//stepa
#include <iostream>
#include <Windows.h>
using namespace std;

int main()

{
 //promene
int start;

int pepe = 1111;
int jarmila = 2222;
int jamal = 3333;

int cislo = 0;
int menu1 = 0;
int menu2 = 0;
int menu3 = 0;

int zustatekpepe = 30000;
int vyberpepe;
int vkladpepe;
int poslatpepe;
int poslatpepel;
int poslatpepe2;



int zustatekjarmila = 20000;
int vyberjarmila;
int vkladjarmila;
int poslatjarmila;
int poslatjarmilal;
int poslatjarmila2;


int zustatekjamal = 10000;
int vyberjamal;
int vkladjamal;
int poslatjamal;
int poslatjamall;
int poslatjamal2;






//start

start:
cout<<"vitejete ve fio bance"<<"\n";;
cout<<"zvolte uzivatele"<<"\n";


cout << "__________________"<< "\n";
cout << "1. Pepe" << "\n";
cout << "__________________"<< "\n";
cout << "2. Jarmila" << "\n";
cout << "__________________"<< "\n";
cout << "3. Jamal" << "\n";
cout << "__________________"<<"\n";

cin >> cislo ;

pepe:
switch (cislo) {
 case 1:
    cout << "vybral/a jste Pepe" << "\n";
    cout << "zdejte pin:" << "\n";
    cin >> pepe;
    if (pepe==1111){
        system("cls");
    goto menu1;
    return 0;
    }
    else{
    system("cls");
    cout << "Spatny pin" "\n" "\n";
    goto pepe;
        return 0;
    }
break;


jarmila:

  case 2:
    cout << "vybral/a jste Jarmila" << "\n";
    cout << "zdejte pin:" << "\n";
    cin >> jarmila;


     if (jarmila==2222){
        system("cls");
    goto menu2;
    return 0;
    }
    else{
    system("cls");
    cout << "Spatny pin" "\n" "\n";
    goto jarmila;
        return 0;
    }
    break;




  jamal :
  case 3:
    cout << "vybral/a jste Jamal" << "\n";
    cout << "zdejte pin:" << "\n";
    cin >> jamal;


     if (jamal==3333){
    system("cls");
    goto menu3;
    return 0;
    }
    else{
    system("cls");
    cout << "Spatny pin" "\n" "\n";
    goto jamal;
        return 0;
    }
}

//pepe

menu1:
cout << "vybral/a jste Pepe" "\n";
cout << "1- vybrat" "\n";
cout << "2- zustatek" "\n";
cout << "3- prevest finance" "\n";
cout << "4- odhalist se" "\n";
cin >> menu1;


            switch(menu1)
            {

                case 1:

                system("CLS");
                cout << "Kolik chcete vybrat: " << "\n";
                cin >> vyberpepe;
                if(menu1 <= 0) {
                    cout << "Chyba, zadejte validni castku";
                    Sleep(1500);
                    goto menu1;
                }else{
                zustatekpepe = zustatekpepe - vyberpepe;
                cout << "Vybrali jste " << vyberpepe << "CZK" << "\n";
                Sleep(1500);
                goto menu1;
                }
                break;
                case 2:
                system("CLS");
                cout << "Vas zustatek je: " << zustatekpepe << "CZK" << "\n";
                Sleep(1500);
            goto menu1;
                break;


                case 3:
                system("CLS");
                int poslatpepe;
                cout << "Bankovni prevod" << "\n";
                cout << "____________________" << "\n";
                cout << "1 Jarmile" << "\n";
                cout << "____________________" << "\n";
                cout << "2 Jamalovi" << "\n";
                cout << "____________________" << "\n";
                cout << "Komu chcete poslat penize " << "\n";
                cin >> poslatpepe;
                switch(poslatpepe) {
                case 1:
                system("CLS");
                int poslatpepel;
                cout << "Kolik chcete poslat Jarmile?" << "\n";
                cin >> poslatpepel;
                if(poslatpepel <= 0) {
                    cout << "Chyba, zadejte validni castku";
                    Sleep(1500);
                    goto menu1;
                }
                else
                {
                zustatekpepe = zustatekpepe - poslatpepel;
                zustatekjarmila = zustatekjarmila + poslatpepel;
                cout << "Poslal si " << poslatpepel << "CZK Jarmile" "\n";
                Sleep(1500);
                goto menu1;
                }
                break;

                case 2:
                system("CLS");
                int poslatpepej;
                cout << "Kolik chcete poslat Jamalovi?" << "\n";
                cin >> poslatpepe2;
                zustatekpepe = zustatekpepe - poslatpepej;
                zustatekjamal = zustatekjamal + poslatpepej;
                cout << "Poslal si " << poslatpepe << "CZK Jamalovi" "\n";
                Sleep(1500);
                goto menu1;
                break;
                }

                break;

                case 4:
                goto start;
                break;
            }




//jarmila


menu2:
cout << "vybral/a jste Jarmila" "\n";
cout << "1- vybrat" "\n";
cout << "2- zustatek" "\n";
cout << "3- prevest finance" "\n";
cout << "4- odhalist se" "\n";
cin >> menu2;

 switch(menu2)
            {

                case 1:

                system("CLS");
                cout << "Kolik chcete vybrat: " << "\n";
                cin >> vyberjarmila;
                if(menu2 <= 0) {
                    cout << "Chyba, zadejte validni castku";
                    Sleep(1500);
                    goto menu2;
                }else{
                zustatekjarmila = zustatekjarmila - vyberjarmila;
                cout << "Vybrali jste " << vyberjarmila << "CZK" << "\n";
                Sleep(1500);
                goto menu2;
                }
                break;
                case 2:
                system("CLS");
                cout << "Vas zustatek je: " << zustatekjarmila << "CZK" << "\n";
                Sleep(1500);
            goto menu2;
                break;


                case 3:
                system("CLS");
                int poslatjarmila;
                cout << "Bankovni prevod" << "\n";
                cout << "____________________" << "\n";
                cout << "1 Pepemu" << "\n";
                cout << "____________________" << "\n";
                cout << "2 Jamalovi" << "\n";
                cout << "____________________" << "\n";
                cout << "Komu chcete poslat penize " << "\n";
                cin >> poslatjarmila;
                switch(poslatjarmila) {
                case 1:
                system("CLS");
                int poslatjarmia1;
                cout << "Kolik chcete poslat Pepemu?" << "\n";
                cin >> poslatjarmilal;
                if(poslatjarmila <= 0) {
                    cout << "Chyba, zadejte validni castku";
                    Sleep(1500);
                    goto menu2;
                }
                else
                {
                zustatekjarmila = zustatekjarmila - poslatjarmilal;
                zustatekpepe = zustatekpepe + poslatjarmilal;
                cout << "Poslal si " << poslatjarmilal << "CZK Pepemu" "\n";
                Sleep(1500);
                goto menu2;
                }
                break;

                case 2:
                system("CLS");
                int poslatjarmila2;
                cout << "Kolik chcete poslat Jamalovi?" << "\n";
                cin >> poslatjarmila2;
                zustatekjarmila = zustatekjarmila - poslatjarmila2;
                zustatekjamal = zustatekjamal + poslatjarmila2;
                cout << "Poslal si " << poslatjarmila2 << "CZK Jamalovi" "\n";
                Sleep(1500);
                goto menu2;
                break;
                }

                break;

                case 4:
                goto start;
                break;
            }









//jamal



menu3:
cout << "vybral/a jste Jamal" "\n";
cout << "1- vybrat" "\n";
cout << "2- zustatek" "\n";
cout << "3- prevest finance" "\n";
cout << "4- odhalist se" "\n";

cin >> menu3;


switch(menu3)
{

case 1:

                system("CLS");

                cout << "Kolik chcete vybrat: " << "\n";

                cin >> vyberjamal;

                zustatekjamal = zustatekjamal - vyberjamal;

                cout << "Vybrali jste " << vyberjamal << "CZK" << "\n";

                Sleep(1500);

                goto menu3;

                break;



                case 2:

                system("CLS");

                cout << "Vas zustatek je: " << zustatekjamal << "CZK" << "\n";

                Sleep(1500);

                goto menu3;

                break;



                case 3:
                    {


                system("CLS");
                int poslatjamal;
                cout << "Bankovni prevod" << "\n";
                cout << "____________________" << "\n";
                cout << "1 Pepemu" << "\n";
                cout << "____________________" << "\n";
                cout << "2 Jarmile" << "\n";
                cout << "____________________" << "\n";
                cout << "Komu chcete poslat penize " << "\n";
                cin >> poslatjamal;
                switch(poslatjamal)
                {


        case 1:
                system("CLS");
                int poslatjamal;
                cout << "Kolik chcete poslat Pepemu?" << "\n";
                cin >> poslatjamal;
                if(poslatjamal <= 0) {
                    cout << "Chyba, zadejte validni castku";
                    Sleep(1500);
                    goto menu3;
                }
                else
                {
                zustatekjamal = zustatekjamal- poslatjamal;
                zustatekpepe = zustatekpepe + poslatjamal;
                cout << "Poslal si " << poslatjamal << "CZK Pepemu" "\n";
                Sleep(1500);
                goto menu3;
                }
                break;

                case 2:
                system("CLS");
                int poslatjamal2;
                cout << "Kolik chcete poslat Jamalovi?" << "\n";
                cin >> poslatjamal2;
                zustatekjamal = zustatekjamal - poslatjamal2;
                zustatekjarmila = zustatekjarmila + poslatjamal2;

                cout << "Poslal si " << poslatjamal2 << "CZK Jamalovi" "\n" ;

                Sleep(1500);

                goto menu3;

                break;
                }



                break;
                case 4:

                goto start;

                break;
                }


}


}
//konec







