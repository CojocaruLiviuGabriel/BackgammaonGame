//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitTabla.h"
#include "Table.h"
#include "ClasaTabla.h"
#include "Piese.h"
#include "Joc.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfTabla *fTabla;
//---------------------------------------------------------------------------
__fastcall TfTabla::TfTabla(TComponent* Owner)
        : TForm(Owner)
{
        fTabla->Color=RGB(82,49,8);
}
//---------------------------------------------------------------------------
void __fastcall TfTabla::btnBackToMenuClick(TObject *Sender)
{
        ModalResult=mrCancel;
        fInceput->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfTabla::btnNewGameClick(TObject *Sender)
{
        PieseTabla=new Joc();
        PieseTabla->AfisarePiese();
}
//---------------------------------------------------------------------------
void __fastcall TfTabla::btnRollTheDiceClick(TObject *Sender)
{
        Zaruri *z = new Zaruri();
        z->DaCuZaru();
        String d1 = z->getDiceSingle(1);
        String d2 = z->getDiceSingle(2);
        zar1->Picture->LoadFromFile(d1 + ".bmp");
        zar2->Picture->LoadFromFile(d2 + ".bmp");
        fInceput->csClient->Socket->SendText(z->getDice());

}
//---------------------------------------------------------------------------

void __fastcall TfTabla::btnClearBoardClick(TObject *Sender)
{
       // delete PieseTabla;
}
//---------------------------------------------------------------------------



