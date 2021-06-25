//---------------------------------------------------------------------------


#pragma hdrstop
#include "Piese.h"
#include "UnitTabla.h"
#include "Table.h"
Piese::Piese()
{
        imagine=new TImage(fTabla);
        imagine->Parent=fTabla;
        imagine->Transparent=1;
        imagine->Stretch=1;
        imagine->Width=49;
        imagine->Height=49;
        imagine->OnMouseDown=LasaJos;
        imagine->OnMouseUp=PuneSus;
        imagine->OnMouseMove=InMiscare;
 }


void __fastcall Piese ::LasaJos(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y)
{
                  TImage *mutare=dynamic_cast<TImage *>(Sender);
                  X=mutare->Top;
                  Y=mutare->Left;

}

void __fastcall Piese ::PuneSus(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y)
{
                   TImage *mutare=dynamic_cast<TImage *>(Sender);
                   X=mutare->Top;
                   Y=mutare->Left;
                   String topStr=mutare->Top;
                   String leftStr=mutare->Left;
                   String pieseStr= i;
                   String send="";
                   send+=topStr;
                   send+=':';
                   send+=leftStr;
                   send+=':';
                   send+=pieseStr;
                   fInceput->ssServer->Socket->Connections[0]->SendText(send);
}

void __fastcall Piese::InMiscare(TObject *Sender, TShiftState Shift, int X, int Y)
{
                  TImage *mutare=dynamic_cast<TImage *>(Sender);

                   if(Shift.Contains(ssLeft))
                   {
                   int q,p;
                   for(int i=1;i<=2;i++)
                   {
                     mutare->Top=X;
                     mutare->Left=Y;
                     X=q;
                     Y=p;
                   }
                        X=q;
                        Y=p;
                   }
}

Piese::~Piese()
{
 delete imagine;
}



//---------------------------------------------------------------------------

#pragma package(smart_init)
