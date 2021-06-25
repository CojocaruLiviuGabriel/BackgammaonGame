//---------------------------------------------------------------------------

#ifndef PieseH
#define PieseH
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include "Pozitie.h"
#include "Zaruri.h"
class Piese
{
public:
        TImage *imagine;
        int i;
        Piese();
        ~Piese();
        void __fastcall Piese::LasaJos(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y);  //MouseDown
        void __fastcall Piese::PuneSus(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y);  //MouseUp
        void __fastcall Piese::InMiscare(TObject *Sender, TShiftState Shift, int X, int Y);                     //OnMove

};


//---------------------------------------------------------------------------
#endif
