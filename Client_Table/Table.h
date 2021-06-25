//---------------------------------------------------------------------------

#ifndef TableH
#define TableH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include "ClasaTabla.h"
#include "Joc.h"
#include "Piese.h"
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class TfInceput : public TForm
{
__published:	// IDE-managed Components
        TImage *iStart;
        TLabel *lJoc;
        TLabel *lPlay;
        TLabel *lExit;
        TClientSocket *csClient;
        void __fastcall lExitClick(TObject *Sender);
        void __fastcall lPlayMouseEnter(TObject *Sender);
        void __fastcall lPlayMouseLeave(TObject *Sender);
        void __fastcall lExitMouseEnter(TObject *Sender);
        void __fastcall lExitMouseLeave(TObject *Sender);
        void __fastcall lPlayClick(TObject *Sender);
        void __fastcall csClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
private:
Joc *tb;	// User declarations
public:		// User declarations
        __fastcall TfInceput(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfInceput *fInceput;
//---------------------------------------------------------------------------
#endif
