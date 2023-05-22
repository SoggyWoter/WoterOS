#include "Computer.hpp"
#include "Graphics.hpp"
#include "Terminal.hpp"
#include "FileExplorer.hpp"

#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <vector>
#include <unistd.h>

using namespace std;

int main(int argc, char **argv) {
	cout << computer.getUser() << "\n";
	computer = Computer("PC", "CheeseGrater", "Riley");
	cout << computer.getUser() << "\n";

	cout << "XRes is " << desktop.XRes() << "\nYRes is " << desktop.YRes() << "\n\n";
	//desktop.editScreen(4, 0, "Disgusting");
	desktop.printScreen();

	sleep(2);
	Terminal cmd;
	cmd.readCmd();

	newFile("im_smort");

	cerr << "\neRrOr" << "\n";
	perror("");

	return 0;
}