//---------------------------------------------------------------------------


#pragma hdrstop

#include "Zaruri.h"
#include "UnitTabla.h"
#include <time.h>
#include <stdlib.h>

Zaruri::Zaruri()
{
dice1=0;
dice2=0;
}

void Zaruri::DaCuZaru()
{
srand(time(NULL));
dice2=random(6) + 1;
dice1=random(6) + 1;
}

String Zaruri::getDiceSingle(int dice)
{
       String d;
        if(dice == 1)
        {
            d=dice1;
        }
        if(dice == 2)
        {
           d = dice2;
        }
        return d;
}

String Zaruri::getDice()
{
        String d1 = dice1;
        String d2 = dice2;
        return (d1 + d2);
}
//---------------------------------------------------------------------------

#pragma package(smart_init)
