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
    void gra();
    void gra1();
int main()
{
    cout<<"Witam w prostej grze RPG uzywaj klawiszy N,S,E,W do poruszania sie"<<endl;
    cout<<"N = NORTH"<<endl;
    cout<<"E = EAST"<<endl;
    cout<<"W = WEST"<<endl;
    cout<<"S = SOUTH"<<endl<<endl;
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
        else if(komenda=="cls")
        {

        }
    }
}
void gra1()
{
    switch(y)
    {
    case 0: system("cls");cout<<"Brak drogi"<<endl<<endl; y++; break;
    case 1:
        switch(x)
        {
        case 0: system("cls");cout<<"Brak drogi"<<endl<<endl; x++; break;
        case 1: kw1(); break;
        case 2: kw2(); break;
        case 3: kw3(); break;
        case 4: system("cls");cout<<"Brak drogi"<<endl<<endl; if(kom=='w')y++; else x--;break;
        case 5: system("cls");cout<<"Brak drogi"<<endl<<endl; y++; break;
        }
        break;
    case 2:
        switch(x)
        {
        case 0: system("cls");cout<<"Brak drogi"<<endl<<endl; x++; break;
        case 1: kw4(); break;
        case 2: kw5(); break;
        case 3: kw6(); break;
        case 4: kw10(); break;
        case 5: kw11(); break;
        case 6: system("cls");cout<<"Brak drogi"<<endl<<endl; x--; break;
        }
    break;
    case 3:
        switch(x)
        {
        case 0: system("cls");cout<<"Brak drogi"<<endl<<endl; x++; break;
        case 1: kw7(); break;
        case 2: kw8(); break;
        case 3: kw9(); break;
        case 4: system("cls");if(kom=='n'){cout<<"Brak drogi"<<endl<<endl; x--; break;}else if(kom=='e'){cout<<"Brak drogi"<<endl<<endl; y--; break;} else cout<<"Brak drogi"<<endl<<endl; x++; break;
        case 5: kw12(); break;
        case 6: system("cls");cout<<"Brak drogi"<<endl<<endl; x--; break;
        }
        break;
    case 4:
        system("cls");cout<<"Brak drogi"<<endl<<endl; y--; break;
    }
}


void kw1()
{

    system("cls");
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
        case 'n':system("cls");x--;cout<<"Brak drogi"<<endl<<endl;break;
        case 's':system("cls");x++;cout<<"Brak drogi"<<endl<<endl;break;
        case 'e':system("cls");y--;cout<<"Brak drogi"<<endl<<endl;break;
        case 'w':system("cls");y++;cout<<"Brak drogi"<<endl<<endl;break;
    }
}
void kw6()
{
    system("cls");
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
        case 's':system("cls");x++;cout<<"Brak drogi"<<endl<<endl;break;
        case 'e':system("cls");y--;cout<<"Brak drogi"<<endl<<endl;break;
    }
}
void kw8()
{
    system("cls");
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
    cout<<"Gratulacje, ukonczyles gre! Mam nadzieje, ze Ci sie podobalo!"<<endl<<endl;
    cout<<"Wcisnij dowolny klawisz by zakonczyc dzialanie programu  ";
    getch();
    zycie=false;
}
