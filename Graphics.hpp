#pragma once

#include <iostream>
#include <stdio.h>
#include <string>

#define CLS system("cls")

// Fullscreen cmd resolution 75 ln x 280 char
// 140 char per section, 2 sections per line, 75 lines per Screen
class Screen {
	protected:
		std::string **resolution;

	public:
		Screen();
		virtual int XRes();
		int YRes();
		virtual void printScreen();
		void editScreen(int line, int xPos, std::string newContents);
};
// Desktop Screen: 10 char per section, 3 space left/right margin, 1 space divider
class Desktop : public Screen {
	public:
		Desktop();
		int XRes() override;
		void printScreen() override;
};

extern Screen bsod;
extern Screen splash;
extern Desktop desktop;