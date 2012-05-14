#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>
#include <iostream>
#include "SDL.h"


void kare_ciz(SDL_Surface* video, int ax, int ay, int renk)
{
	//int dx= ax- 450, dy= ay- 450;
	//int dx= ax- 521, dy= ay- 184;
	int dx= ax- 521, dy= ay- 284;
	SDL_Rect orta_kare= { 320- 15- 3* dx, 240- 15+ 4* dy, 30, 30 };
	SDL_FillRect(video, &orta_kare, renk);
}

int main(int argc, char* argv[])
{
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Surface* video= SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE| SDL_DOUBLEBUF);
	SDL_Event e;
	int ax= 0;
	int ay= 0;
	std::string satir;	
	std::ifstream dosya("test.txt");
	int yesil= SDL_MapRGB(video-> format, 0, 255, 0);	
	int siyah= SDL_MapRGB(video-> format, 0, 0, 0);	
	for(bool devam= true; devam; SDL_Delay(10))
	{
		while(SDL_PollEvent(&e))
		{
			switch(e.type)
			{
				case SDL_QUIT:
				devam= false;
				break;
			}
		}
		
		dosya.seekg(-16, std::ios::end);
		std::string satir;
		std::getline(dosya, satir);
		std::cout<< satir<< '\n';
		std::sscanf(satir.c_str(), "AX: %03d AY: %03d", &ax, &ay);
		kare_ciz(video, ax, ay, yesil);
		SDL_Flip(video);
		kare_ciz(video, ax, ay, siyah);
	}	

	SDL_Quit();
	return EXIT_SUCCESS;
}

