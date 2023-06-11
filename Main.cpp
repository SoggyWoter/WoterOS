#include "Computer.hpp"
#include "Graphics.hpp"
#include "Terminal.hpp"
#include "FileExplorer.hpp"

#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
	splash.printScreen();

	cout << computer.getUser() << "\n";
	computer = Computer("PC", "CheeseGrater", "Riley");
	cout << computer.getUser() << "\n";

	cout << "XRes is " << desktop.XRes() << "\nYRes is " << desktop.YRes() << "\n\n";
	desktop.printScreen();

	getch();
	Terminal cmd;
	cmd.readCmd();

	newFile("im_smort");

	cerr << "\neRrOr" << "\n";
	perror("");


	return 0;
}