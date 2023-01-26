
#include "imagen.h"
#include "graphics.h"
#include "ebentoak.h"
#include "text.h"
#include "soinua.h"

#include <stdio.h>

#include "ourTypes.h"
#include "game02.h"


int main(int argc, char * str[]) {
  int jarraitu = 0, puntuazioa = 0;
  EGOERA egoera;
 
  if (sgHasieratu() == -1) 
  {
    fprintf(stderr, "Unable to set 640x480 video: %s\n", SDL_GetError());
    return 1;
  }
  textuaGaitu(); 
  do
  {
    jokoaAurkeztu();
    egoera = jokatu(puntuazioa);
    jarraitu = jokoAmaierakoa(egoera);
  } while (jarraitu);
  sgItxi();
  return 0;
}

