#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;
char tab[5][5] = {{'#','#','#','#','#'},{'#',' ',' ',' ','#'},{'#',' ',' ',' ','#'},{'#',' ',' ',' ','#'},{'#','#','#','#','#'}};
int k=4;
class Bohater
{
    public:
    int hp = 30;
    int sila = 12;

};
class Minimap
{
public:
    int x=1;
    int y=2;
    void polnoc()
    {

        if(y<3)
            {
             cout<<"Udales sie na polnoc!"<<endl<<endl;
             y++;
         }
        else cout<<"Brak drogi"<<endl<<endl;
    }
    void poludnie()
    {

         if(y>1)
            {
             cout<<"Udales sie na poludnie!"<<endl<<endl;
             y--;
         }
         else cout<<"Brak drogi"<<endl<<endl;
    }
    void wschod()
    {
         if(x<3)
            {
             cout<<"Udales sie na wschod!"<<endl<<endl;
             x++;
         }
         else cout<<"Brak drogi"<<endl<<endl;
    }
    void zachod()
    {

         if(x>1)
         {
             cout<<"Udales sie na zachod!"<<endl<<endl;
             x--;
         }
         else cout<<"Brak drogi"<<endl<<endl;
    }

};
class Potwor
{


public:
    int hp;
    int sila;
    string potwor;
    szczur()
    {
        hp=15;
        sila=8;
        potwor="Szczur";
    }
    tygrys()
    {
        hp=25;
        sila=12;
        potwor="Tygrys";
    }

};
void tworzenie_mapy()
{

    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(k==1 && i==2 && j==2)cout<<"&"<<" ";
            else cout<<tab[i][j]<<" ";
        }
        for(int j=0;j<=4;j++)
        {
            if(k==2 && i==2 && j==2)cout<<"&"<<" ";
            else cout<<tab[i][j]<<" ";
        }
        for(int j=0;j<=4;j++)
        {
            if(k==3 && i==2 && j==2)cout<<"&"<<" ";
            else cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(k==4 && i==2 && j==2)cout<<"&"<<" ";
            else cout<<tab[i][j]<<" ";
        }
        for(int j=0;j<=4;j++)
        {
            if(k==5 && i==2 && j==2)cout<<"&"<<" ";
            else cout<<tab[i][j]<<" ";
        }
        for(int j=0;j<=4;j++)
        {
            if(k==6 && i==2 && j==2)cout<<"&"<<" ";
            else cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(k==7 && i==2 && j==2)cout<<"&"<<" ";
            else cout<<tab[i][j]<<" ";
        }
        for(int j=0;j<=4;j++)
        {
            if(k==8 && i==2 && j==2)cout<<"&"<<" ";
            else cout<<tab[i][j]<<" ";
        }
        for(int j=0;j<=4;j++)
        {
            if(k==9 && i==2 && j==2)cout<<"&"<<" ";
            else cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
}
void walka(char& komin, int& x, int& y,int& hp,int& sila,int& sila_potwora,int& hp_potwora, string& potwor)
{

    srand(time(NULL));

    string kom;
    if(hp_potwora>0)cout<<"Napotykasz potwora na swojej drodze. Walczysz czy uciekasz?"<<endl<<endl;

    while(hp_potwora>0)
    {
        cout<<hp_potwora<<endl;
        cout<<endl<<"1 - Walcz"<<endl;
        cout<<"2 - Ucieknij"<<endl<<endl;
        cout<<"Komenda: ";
        cin>>kom;
        if(kom=="2" && komin=='w') {y--;cout<<"Uciekles"<<endl<<endl;break;}
        else if(kom=="2" && komin=='s') {y++;cout<<"Uciekles"<<endl<<endl;break;}
        else if(kom=="2" && komin=='d') {x--;cout<<"Uciekles"<<endl<<endl;break;}
        else if(kom=="2" && komin=='a') {x++;cout<<"Uciekles"<<endl<<endl;break;}
        else if (kom=="1")
            {
                int s=rand()%sila;
                int s1=rand()%sila_potwora;

                hp_potwora=hp_potwora-s;
                cout<<"Zadajesz "<<s<<" obrazen"<<endl;
                if(hp_potwora<=0)
                {
                    cout<<potwor<<" nie zyje"<<endl<<endl;
                }
                else if (hp_potwora>0)
                    {
                        hp=hp-s1;
                        cout<<"Otrzymujesz "<<s1<<" obrazen"<<endl;
                    }


                if(hp<=0)
                    {
                        cout<<"Nie zyjesz. Koniec gry"<<endl<<endl;break;}
            }


    cout<<endl<<endl;
    }

}

void mapa(int& p_hp,int& p_sila,string& potwor,char& kom,int& y, int& x, int& hp, int& sila)
{



    if(y==3 && x==1)
        {

            walka(kom,x,y,hp,sila,p_sila,p_hp,potwor);
        }


    if(y==1 && x==1)
    {
        walka(kom,x,y,hp,sila,p_sila,p_hp,potwor);

    }

}


int main()
{
    string komenda;
    Minimap mapaq;
    Bohater b;
    Potwor a;
    Potwor a1;
    a.szczur();
    a1.tygrys();

    char w;
    while(true)
    {

        tworzenie_mapy();
        cout<<"Komenda: ";
        cin>>komenda;

        system("CLS");
        if(komenda=="hp")
        {
            w='h';
            cout<<"HP: "<<b.hp<<endl<<endl;

        }
        if(komenda=="w")
        {
            w='w';
            mapaq.polnoc();

        }
        if(komenda=="s")
        {
            w='s';
            mapaq.poludnie();

        }
        if(komenda=="d")
        {
            w='d';
            mapaq.wschod();

        }
        if(komenda=="a")
        {
            w='a';
            mapaq.zachod();

        }
        switch(mapaq.y)
        {
            case 0: break;
            case 1:
                                switch(mapaq.x)
                                {
                                case 0: break;
                                case 1:  k=7;mapa(a1.hp,a1.sila,a1.potwor,w,mapaq.y,mapaq.x,b.hp, b.sila);break;
                                case 2: k=8;break;
                                case 3: k=9;break;
                                }break;
            case 2:
                                switch(mapaq.x)
                                {
                                case 0: break;
                                case 1: k=4;break;
                                case 2: k=5;break;
                                case 3: k=6;break;
                                }break;
            case 3:
                                switch(mapaq.x)
                                {
                                case 0: break;
                                case 1: k=1;mapa(a.hp,a.sila,a.potwor,w,mapaq.y,mapaq.x,b.hp, b.sila);break;
                                case 2: k=2;break;
                                case 3: k=3;break;
                                }break;

        }
    }
    return 0;
}
