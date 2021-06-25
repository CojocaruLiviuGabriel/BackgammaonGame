//---------------------------------------------------------------------------

#ifndef JocH
#define JocH
#include "ClasaTabla.h"
#include "Piese.h"
#include "Zaruri.h"
#include "Pozitie.h"

class Joc: public Pozitie
{
        Tabla *tabla;
public:
        Piese *piesa[30];
      ~Joc();
      void AfisareTabla();
      void AfisarePiese();
};

//---------------------------------------------------------------------------
#endif
