#include <iostream>
#include <algorithm>
#include <string>
#include <conio.h>
using namespace std;
    bool zycie=true;
    int x=1,y=1,c=0, d=0;
    string komenda;
    char kom;
    void kw1();
    void kw2();
    void kw3();
    void kw4();
    void kw5();
    void kw6();
    void kw7();
    void kw8();
    void kw9();
    void kw10();
    void kw11();
    void kw12();
    void mapa1();
    void mapa2();
    void mapa3();
    void mapa4();
    void mapa5();
    void mapa6();
    void mapa7();
    void mapa8();
    void mapa9();
    void mapa10();
    void mapa11();
    void mapa12();
    void gra();
    void gra1();
int main()
{
    cout<<"Witam w prostej grze RPG uzywaj klawiszy N,S,E,W do poruszania sie"<<endl;
    cout<<"N = NORTH"<<endl;
    cout<<"E = EAST"<<endl;
    cout<<"W = WEST"<<endl;
    cout<<"S = SOUTH"<<endl;
    cout<<"I = MAPA"<<endl<<endl;
    cout<<"Mozesz udac sie w kierunku NORTH lub EAST, Gdzie chcesz sie udac?"<<endl<<endl;
    gra();

}
void gra()
{
  void gra1();
    while(zycie!=false)
    {
        cout<<"Komenda: ";
        cin>>komenda;
        cout<<endl;
        transform(komenda.begin(),komenda.end(),komenda.begin(),::tolower);
        if(komenda=="n")
        {
            x++;
            kom='n';
            gra1();
        }
        else if(komenda=="s")
        {
            x--;
            kom='s';
            gra1();
        }
        else if(komenda=="e")
        {
            y++;
            kom='e';
            gra1();
        }
        else if(komenda=="w")
        {
            y--;
            kom='w';
            gra1();
        }
        else if(komenda=="i")
        {
            kom='i';
            gra1();
        }
    }
}
void gra1()
{
    switch(y)
    {
    case 0: system("cls"); y++;
    if(x==1)
    {
        mapa1();
    }
    else if(x==2)
    {
        mapa2();
    }
    else if(x==3)
    {
        mapa3();
    }
    cout<<"Brak drogi"<<endl<<endl;
    break;
    case 1:
        switch(x)
        {
        case 0: system("cls");mapa1();cout<<"Brak drogi"<<endl<<endl; x++; break;
        case 1: kw1(); break;
        case 2: kw2(); break;
        case 3: kw3(); break;
        case 4: system("cls");if(kom=='w'){y++;mapa10();} else {x--;mapa3();}cout<<"Brak drogi"<<endl<<endl; break;
        case 5: system("cls");mapa11();cout<<"Brak drogi"<<endl<<endl; y++; break;
        }
        break;
    case 2:
        switch(x)
        {
        case 0: system("cls");mapa4(); cout<<"Brak drogi"<<endl<<endl; x++; break;
        case 1: kw4(); break;
        case 2: kw5(); break;
        case 3: kw6(); break;
        case 4: kw10(); break;
        case 5: kw11(); break;
        case 6: system("cls");mapa11();cout<<"Brak drogi"<<endl<<endl; x--; break;
        }
    break;
    case 3:
        switch(x)
        {
        case 0: cout<<"Brak drogi"<<endl<<endl; x++; break;
        case 1: kw7(); break;
        case 2: kw8(); break;
        case 3: kw9(); break;
        case 4: system("cls"); if(kom=='n'){mapa9();cout<<"Brak drogi"<<endl<<endl; x--; break;}else if(kom=='e'){mapa10();cout<<"Brak drogi"<<endl<<endl; y--; break;} else cout<<"Brak drogi"<<endl<<endl; x++; break;
        case 5: kw12(); break;
        case 6: cout<<"Brak drogi"<<endl<<endl; x--; break;
        }
        break;
    case 4:
    system("cls");

    if(x==2)
    {
        mapa8();
    }
    else if(x==3)
    {
        mapa9();
    }
        cout<<"Brak drogi"<<endl<<endl; y--; break;
    }
}


void kw1()
{

    system("cls");
    mapa1();
    if(kom=='i')
    {

            cout<<"Aktualnie jestes: ";
            cout<<"kw1"<<endl<<endl;
            cout<<"Mozesz udac sie w kierunku NORTH lub EAST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='s')
    {
        cout<<"Udales sie w kierunku SOUTH"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH lub EAST, Gdzie chcesz sie udac?"<<endl<<endl;    }
    else if(kom=='w')
    {
        cout<<"Udales sie w kierunku WEST"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH lub EAST, Gdzie chcesz sie udac?"<<endl<<endl;
    }

}
void kw2()
{
    system("cls");
    mapa2();
    if(kom=='n')
    {
        cout<<"Udales sie w kierunku NORTH"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH lub SOUTH, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='s')
    {
        cout<<"Udales sie w kierunku SOUTH"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH lub SOUTH, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='i')
    {

        cout<<"Aktualnie jestes: ";
        cout<<"kw2"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH lub SOUTH, Gdzie chcesz sie udac?"<<endl<<endl;
    }

}
void kw3()
{
    system("cls");
    mapa3();
    if(kom=='n')
    {
        cout<<"Udales sie w kierunku NORTH"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub EAST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='w')
    {
        cout<<"Udales sie w kierunku WEST"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub EAST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='i')
    {

        cout<<"Aktualnie jestes: ";
        cout<<"kw3"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub EAST, Gdzie chcesz sie udac?"<<endl<<endl;

    }
}
void kw4()
{
    system("cls");
    mapa4();
        if(kom=='e')
    {
        cout<<"Udales sie w kierunku EAST"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku WEST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
       else if(kom=='i')
    {

        cout<<"Aktualnie jestes: ";
        cout<<"kw4"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku WEST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
}
void kw5()
{
    switch(kom)
    {
        case 'n':system("cls");mapa4();x--;cout<<"Brak drogi"<<endl<<endl;break;
        case 's':system("cls");mapa6();x++;cout<<"Brak drogi"<<endl<<endl;break;
        case 'e':system("cls");mapa2();y--;cout<<"Brak drogi"<<endl<<endl;break;
        case 'w':system("cls");mapa8();y++;cout<<"Brak drogi"<<endl<<endl;break;
    }
}
void kw6()
{
    system("cls");
    mapa6();
    if(kom=='s')
    {
        cout<<"Udales sie w kierunku SOUTH"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH lub EAST lub WEST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='w')
    {
        cout<<"Udales sie w kierunku WEST"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH lub EAST lub WEST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='e')
    {
        cout<<"Udales sie w kierunku EAST"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH lub EAST lub WEST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='i')
    {

        cout<<"Aktualnie jestes: ";
        cout<<"kw6"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH lub EAST lub WEST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
}
void kw7()
{

    switch(kom)
    {
        case 's':system("cls");mapa8();x++;cout<<"Brak drogi"<<endl<<endl;break;
        case 'e':system("cls");mapa4();y--;cout<<"Brak drogi"<<endl<<endl;break;
    }
}
void kw8()
{
    system("cls");
    mapa8();
        if(kom=='s')
    {
        cout<<"Udales sie w kierunku SOUTH"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='i')
    {

        cout<<"Aktualnie jestes: ";
        cout<<"kw8"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku NORTH, Gdzie chcesz sie udac?"<<endl<<endl;
    }
}
void kw9()
{
        system("cls");
        mapa9();
        if(kom=='n')
    {
        cout<<"Udales sie w kierunku NORTH"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub WEST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='e')
    {
        cout<<"Udales sie w kierunku EAST"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub WEST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='i')
    {

        cout<<"Aktualnie jestes: ";
        cout<<"kw9"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub WEST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
}
void kw10()
{
        system("cls");
        mapa10();
        if(kom=='n')
    {
        cout<<"Udales sie w kierunku NORTH"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub NORTH, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='s')
    {
        cout<<"Udales sie w kierunku SOUTH"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub NORTH, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='i')
    {

        cout<<"Aktualnie jestes: ";
        cout<<"kw10"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub NORTH, Gdzie chcesz sie udac?"<<endl<<endl;
    }
}
void kw11()
{
        system("cls");
        mapa11();
        if(kom=='n')
    {
        cout<<"Udales sie w kierunku NORTH"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub EAST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='w')
    {
        cout<<"Udales sie w kierunku WEST"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub EAST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
    else if(kom=='i')
    {

        cout<<"Aktualnie jestes: ";
        cout<<"kw11"<<endl<<endl;
        cout<<"Mozesz udac sie w kierunku SOUTH lub EAST, Gdzie chcesz sie udac?"<<endl<<endl;
    }
}
void kw12()
{

    system("cls");
            mapa12();
    cout<<"Gratulacje, ukonczyles gre! Mam nadzieje, ze Ci sie podobalo!"<<endl<<endl;
    cout<<"Wcisnij dowolny klawisz by zakonczyc dzialanie programu  ";
    getch();
    zycie=false;
}
void mapa1()
{
            cout<<"______________________________"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|  $  |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|"<<endl;
}
void mapa2()
{
            cout<<"______________________________"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |  $  |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|"<<endl;
}
void mapa3()
{
            cout<<"______________________________"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |  $  |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|"<<endl;
}
void mapa4()
{
            cout<<"______________________________"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|  $  |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|"<<endl;
}
void mapa6()
{
            cout<<"______________________________"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|  $  |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|"<<endl;
}
void mapa8()
{
            cout<<"______________________________"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|  $  |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|"<<endl;
}
void mapa9()
{
            cout<<"______________________________"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |  $  |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|"<<endl;
}
void mapa10()
{
            cout<<"______________________________"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |  $  |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|"<<endl;
}
void mapa11()
{
            cout<<"______________________________"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |  $  |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|"<<endl;
}
void mapa12()
{
            cout<<"______________________________"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|#####|     |     |#####|  $  |"<<endl;
            cout<<"|#####|     |     |#####|     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|     |#####|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|_____|_____|"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|     |     |     |"<<endl;
            cout<<"|_____|_____|_____|"<<endl;
}
