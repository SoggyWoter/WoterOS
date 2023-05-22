#include "Graphics.hpp"

using namespace std;

#define YRES 75
#define SCREEN_XRES 2
#define DESKTOP_XRES 25

// Screen

Screen::Screen() {
	resolution = new string*[YRES];
        for (int i = 0; i < YRES; i++)
            resolution[i] = new string[SCREEN_XRES];

	for(int i = 0; i < YRES; i++)
		for(int j = 0; j < SCREEN_XRES; j++)
			resolution[i][j] = "                                                                                                                                            ";
}
int Screen::XRes() {
	return SCREEN_XRES;
	//return sizeof(resolution[0]) / sizeof(string);
}
int Screen::YRes() {
	return YRES;
	//return sizeof(resolution) / sizeof(resolution[0]);
}
void Screen::printScreen() {
	for(int i = 0; i < 280; i++)
		cout << "_";
	cout << "\n";
	for(int i = 0; i < YRES; i++)
		for(int j = 0; j < SCREEN_XRES; j++)
			cout << resolution[i][j] << "\n";
}
void Screen::editScreen(int line, int xPos, string newContents) {
	if(0 <= xPos <= SCREEN_XRES && 0 <= line <= YRES) resolution[line][xPos] = newContents;
}

// Desktop

Desktop::Desktop() {
	resolution = new string*[YRES];
        for (int i = 0; i < YRES; i++)
            resolution[i] = new string[DESKTOP_XRES];

	for(int i = 0; i < YRES; i++)
		for(int j = 0; j < DESKTOP_XRES; j++)
			resolution[i][j] = "          ";
	resolution[0][0] = "    _     ";
	resolution[1][0] = " __|_|__  ";
	resolution[2][0] = "  | | |   ";
	resolution[3][0] = "  |_|_|   ";
	resolution[4][0] = "  Trash   ";

	resolution[0][1] = "          ";
	resolution[1][1] = "    ___   ";
	resolution[2][1] = "  _/___\\  ";
	resolution[3][1] = "  O    O  ";
	resolution[4][1] = " Rokt Leg ";

	resolution[5][0] = "  ______  ";
	resolution[6][0] = "  |~~ ~|  ";
	resolution[7][0] = "  |~~~ |  ";
	resolution[8][0] = "  |____|  ";
	resolution[9][0] = " Notepad  ";
}
int Desktop::XRes() {
	return DESKTOP_XRES;
}
void Desktop::printScreen() {
	for(int i = 0; i < 280; i++)
		cout << "_";
	cout << "\n";
	for(int i = 0; i < YRES; i++) {
		cout << "   ";
		for(int j = 0; j < DESKTOP_XRES; j++)
			cout << resolution[i][j] << " ";
		cout << "  ";
	}
}

Screen bsod;
Screen splash; // How to initialize splash screen text?
Desktop desktop;


/*
cout << "\        /   __     |     __    __";
cout << " \  /\  /   /  \  __|__  /__\  /  ";
cout << "  \/  \/    \__/    |    \__   |  ";
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout << "  /\  /\    /  \  __|__  /__   |  ";
cout << " /  \/  \   \__/    |    \__/  \__";




cout << "\        /   __     |     __    __";
cout << " \  /\  /   /  \  __|__  /__\  /  ";
cout << "  \/  \/    \__/    |    \__   |  ";
cout << "   __    __       __         __   ";
cout << "__/ (___/ (______/ (________/ (___";
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
*/