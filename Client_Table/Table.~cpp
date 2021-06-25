//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Table.h"
#include "UnitTabla.h"
#include "ClasaTabla.h"
#include "Piese.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfInceput *fInceput;
//---------------------------------------------------------------------------
__fastcall TfInceput::TfInceput(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfInceput::lExitClick(TObject *Sender)
{
        exit(0);        
}
//---------------------------------------------------------------------------
void __fastcall TfInceput::lPlayMouseEnter(TObject *Sender)
{
        lPlay->Font->Color=clRed;
}
//---------------------------------------------------------------------------
void __fastcall TfInceput::lPlayMouseLeave(TObject *Sender)
{
        lPlay->Font->Color=clWhite;        
}
//---------------------------------------------------------------------------
void __fastcall TfInceput::lExitMouseEnter(TObject *Sender)
{
        lExit->Font->Color=clRed;
}
//---------------------------------------------------------------------------
void __fastcall TfInceput::lExitMouseLeave(TObject *Sender)
{
        lExit->Font->Color=clWhite;        
}
//---------------------------------------------------------------------------
void __fastcall TfInceput::lPlayClick(TObject *Sender)
{
        tb=new Joc();
        fInceput->Hide();
        tb->AfisareTabla();
        fTabla->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TfInceput::csClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
        String instr=Socket->ReceiveText();
       char *str=instr.c_str();
       String topString="";
       String leftString="";
       String pieseString="";

       bool rand_decod[3];
       rand_decod[0]=true;
       rand_decod[1]=false;
       rand_decod[2]=false;

       if(instr.Length()==2)
       {
                char *str=instr.c_str();
                String strd1 = "";
                strd1 += str[0];
                String strd2 = "";
                strd2 += str[1];

                fTabla->zar1->Picture->LoadFromFile(strd1 + ".bmp");
                fTabla->zar2->Picture->LoadFromFile(strd2 + ".bmp");
                return;
       }

       for(int i=0;i<instr.Length();i++)
       {
                if(rand_decod[0]==true)
                 {
                        if(str[i]!=':')
                        {
                        topString+=str[i];
                         }
                        else
                        {
                        rand_decod[0]=false;
                        rand_decod[1]=true;
                        i++;
                        }
                 }
             if(rand_decod[1]==true)
                {
                        if(str[i]!=':')
                         {
                        leftString+=str[i];
                        }
                        else
                        {
                        rand_decod[1]=false;
                        rand_decod[2]=true;
                        i++;
                        }
                }
                    if(rand_decod[2]==true)
                {
                        if(str[i]!=':')
                         {
                        pieseString+=str[i];
                        }
                        else
                        {
                        rand_decod[2]=false;
                       break;

                        }
                }

       }
       int top_decode=StrToInt(topString);
       int left_decode=StrToInt(leftString);
       int piesa_decode=StrToInt(pieseString);
        fTabla->PieseTabla->piesa[piesa_decode]->imagine->Top=top_decode;
        fTabla->PieseTabla->piesa[piesa_decode]->imagine->Left=left_decode;
       
}
//---------------------------------------------------------------------------


