#ifndef UI_H
#define UI_H

#include <SDL2/SDL.h>
#include <SDL2/SDL2_gfxPrimitives.h>
#include <SDL2/SDL_ttf.h>

#include "Utils.h"

#define WINDOW_WIDTH 1024
#define WINDOW_HEIGTH 594

typedef struct Color
{
	char r,g,b,a;
} Color;

typedef struct Circle
{
	unsigned int radius;
	int x, y;
	Color color;
} Circle;

SDL_Window* pWindow;
SDL_Renderer* pRenderer;

TTF_Font* pFont;

int InitUI();
void Loop(int* exit);
void Clear();

Vec2 World2Screen(Vec2 pos, Vec2 playerPos);

void drawDebugLine(Vec2 start, Vec2 end, char r, char g, char b);
void drawDebugCircle(short x, short y, short radius, char r, char g, char b);

#endif