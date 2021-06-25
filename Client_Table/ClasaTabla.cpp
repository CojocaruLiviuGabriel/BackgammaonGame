//---------------------------------------------------------------------------


#pragma hdrstop

#include "ClasaTabla.h"
#include "UnitTabla.h"

void Tabla::InitTabla()
{
board=new TImage(fTabla);
board->Parent=fTabla;
board->Top=0;
board->Left=0;
board->Stretch=true;
board->Width=680;
board->Height=640;
board->Picture->LoadFromFile("Tabla.jpg");
}


//---------------------------------------------------------------------------

#pragma package(smart_init)
 