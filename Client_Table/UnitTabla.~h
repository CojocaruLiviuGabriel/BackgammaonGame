//---------------------------------------------------------------------------

#ifndef UnitTablaH
#define UnitTablaH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Grids.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include "Joc.h"
#include "Piese.h"

//---------------------------------------------------------------------------
class TfTabla : public TForm
{
__published:	// IDE-managed Components
        TButton *btnBackToMenu;
        TButton *btnNewGame;
        TButton *btnRollTheDice;
        TButton *btnClearBoard;
        TImage *zar1;
        TImage *zar2;
        void __fastcall btnBackToMenuClick(TObject *Sender);
        void __fastcall btnNewGameClick(TObject *Sender);
        void __fastcall btnRollTheDiceClick(TObject *Sender);
        void __fastcall btnClearBoardClick(TObject *Sender);
private:
  	// User declarations
public:		// User declarations
      Joc *PieseTabla;
      Joc *Zar;
        __fastcall TfTabla(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfTabla *fTabla;
//---------------------------------------------------------------------------
#endif
