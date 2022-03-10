#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef Image_H
#define Image_H
#define SCREEN_W 1440
#define SCREEN_H 966


/////////////

struct Personne{
/*
add later 

*/
};
typedef struct Personne Personne ;



//////////////
void initPerso(Personne *p);
void afficherPerso(Personne p , SDL_Surface *screen);
void deplacerPerso (Personne *p , int dt );
void animerPerso(Personne * p);
void saut ( Personne *p);

