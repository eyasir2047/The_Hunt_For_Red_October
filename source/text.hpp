/*This file contains functions and varibale related to text rendering*/

#ifndef FONT_COLOR

#define FONT_COLOR

#include"preprocessor.hpp"

extern SDL_Color white;
extern SDL_Color black;
extern SDL_Color red;

extern TTF_Font *Bold1F;
extern TTF_Font *Bold2F;
extern TTF_Font *Bold3F;
extern TTF_Font *DigitalF;

void loadTextSurface(std::string path,TTF_Font *font,SDL_Color color,int x,int y);

void loadTextSurfacewithRect(std::string path,TTF_Font *font,SDL_Color color,SDL_Rect area);

void loadTextSurfacewithBG(std::string path,TTF_Font *font,SDL_Color color,int x,int y);

void font_init();

void closeFont();

#endif