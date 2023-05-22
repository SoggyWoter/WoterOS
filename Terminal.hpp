#pragma once

#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <sstream>

#define SYNTAX_ERROR "invalid syntax"

class Terminal {
	private:
		const std::string COMMANDLIST[25] = {
			"help",
			"echo",
			"cd",
			"ls",
			"quit",
			"cls",
			"shutdown",
			"start",
			"time",
			"date",
			"systeminfo",
			"rename",
			"version",
			"apps",
			"sort",
			"bsod",
			"soggy"
		};
		std::vector<std::string> cmdHistory;
		int historyPos = 0;
		std::stringstream ss;
		char drive = 'R';

//////// Commands

// displays a list of all commands as well as a description of their function
		void help();
// prints inputted message
		void echo();
// changes the current operating directory
		void cd(char drive);
// lists all files downloaded on the system
		void ls();
// closes the terminal and goes to the desktop
		void quit();
//clears the terminal output
		void cls();
// deletes a file
		void del(char* fileName);
// shuts down the device
		void shutdown();
// starts an app
		void start();
// displays the time in 12 hour format
		void time();
// displays the date in MM/DD/YYYY format
		void date();
// displays system info
		void systeminfo();
// renames a file
		void rename(char* oldName, char* newName);
// changes the devices name
		void device_name();
		void device_name(std::string name);
// displays OS version
		void version();
// displays a list of the installed apps
		void apps();
// sorts inputs from least to greatest or alphabetically
		void sort();
// triggers the blue screen of death
		void bsod();
// display soggy woter
		void soggy();

	public:
		void readCmd();
};

// To do list

// up and down arrow for recent commands. use vector to store commands