//---------------------------------------------------------------------------


#pragma hdrstop

#include "Joc.h"



void Joc::AfisareTabla()
{
       tabla=new Tabla();
       tabla->InitTabla();
       delete tabla;
}

void Joc::AfisarePiese()
{
        for(int i=1;i<=30;i++)
        {
                piesa[i]=new Piese();
                piesa[i]->i=i;

                if (i>=1 && i<=5)
                {
                piesa[i]->imagine->Left=x;
                piesa[i]->imagine->Top=y+i*50-50;
                piesa[i]->imagine->Picture->LoadFromFile("white3.bmp");
                }

                if(i>=6 && i<=10)
                {
                piesa[i]->imagine->Left=x;
                piesa[i]->imagine->Top=y+i*50+25;
                piesa[i]->imagine->Picture->LoadFromFile("black.bmp");
                }

                if(i>=11 && i<=13)
                {
                piesa[i]->imagine->Left=x+180;
                piesa[i]->imagine->Top=y+i*50-550;
                piesa[i]->imagine->Picture->LoadFromFile("black.bmp");
                }

                if(i>=14 &&  i<=16)
                {
                piesa[i]->imagine->Left=x+180;
                piesa[i]->imagine->Top=y+i*50-275;
                piesa[i]->imagine->Picture->LoadFromFile("white3.bmp");
                }

                if(i>=17 && i<=21)
                {
                piesa[i]->imagine->Left=x+340;
                piesa[i]->imagine->Top=y+i*50-850;
                piesa[i]->imagine->Picture->LoadFromFile("black.bmp");
                }

                if(i>=22 && i<=26)
                {
                piesa[i]->imagine->Left=x+340;
                piesa[i]->imagine->Top=y+i*50-775;
                piesa[i]->imagine->Picture->LoadFromFile("white3.bmp");
                }

                if(i>=27 && i<=28)
                {
                piesa[i]->imagine->Left=x+565;
                piesa[i]->imagine->Top=y+i*50-1350;
                piesa[i]->imagine->Picture->LoadFromFile("white3.bmp");
                }

                if(i>=29 && i<=30)
                {
                piesa[i]->imagine->Left=x+565;
                piesa[i]->imagine->Top=y+i*50-975;
                piesa[i]->imagine->Picture->LoadFromFile("black.bmp");
                }
        }



}


Joc::~Joc()
{
for(int i=1;i<=30;i++)
       delete piesa[i];
}
//---------------------------------------------------------------------------

#pragma package(smart_init)
