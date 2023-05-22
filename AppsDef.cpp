#include "Terminal.hpp"
#include "FileExplorer.hpp"
#include "Computer.hpp"
#include "Graphics.hpp"

using namespace std;

// Terminal/Commands

void Terminal::readCmd() {
	int temp;
	string cmd, arg;
	cout << drive << ":\\" << computer.getUser() << "\\Terminal.xex>";
	while(1) {
		temp = getch();
		switch((char)temp) {
			case 'A': case 'a':
			case 'B': case 'b':
			case 'C': case 'c':
			case 'D': case 'd':
			case 'E': case 'e':
			case 'F': case 'f':
			case 'G': case 'g':
			case 'H': case 'h':
			case 'I': case 'i':
			case 'J': case 'j':
			case 'K': case 'k':
			case 'L': case 'l':
			case 'M': case 'm':
			case 'N': case 'n':
			case 'O': case 'o':
			case 'P': case 'p':
			case 'Q': case 'q':
			case 'R': case 'r':
			case 'S': case 's':
			case 'T': case 't':
			case 'U': case 'u':
			case 'V': case 'v':
			case 'W': case 'w':
			case 'X': case 'x':
			case 'Y': case 'y':
			case 'Z': case 'z':
			case ' ':
			ss << (char)temp;
			cout << (char)temp;
		}
		switch(temp) {
			case 224: temp = getch();
			case 72: // up
				if(historyPos < cmdHistory.size() - 1) {
					cmdHistory[historyPos] = ss.str();
					ss.clear();
					historyPos++;
					ss.str(cmdHistory[historyPos]);
					cout << "\r" << drive << ":\\" << computer.getUser() << "\\Terminal.xex>" << ss.str() << "                         ";
				}
				break;
			case 80: // down
				if(historyPos > 0) {
					cmdHistory[historyPos] = ss.str();
					ss.clear();
					historyPos--;
					ss.str(cmdHistory[historyPos]);
					cout << "\r" << drive << ":\\" << computer.getUser() << "\\Terminal.xex>" << ss.str() << "                         ";
				}
				break;
		}
		if(temp == 8) { //backspace
			ss.seekp(-1, ios_base::end);
			ss << " ";
			ss.seekp(-1, ios_base::end);
			cout << "\b \b";
		}
		else if(temp == 13) // enter
			break;
	}
	ss >> cmd >> arg;
	ss.clear();
	cmdHistory.push_back(ss.str());
/////////////////////////////////////////////////////////// debug
cout << "\n\n\n\n" << cmdHistory[0] << "\n\n\n";

	return;
}

void Terminal::help() {
	
}
void Terminal::echo() {
	
}
void Terminal::cd(char drive) {
	this->drive = toupper(drive);
}
void Terminal::ls() {
	
}
void Terminal::quit() {
	desktop.printScreen();
}
void Terminal::cls() {
	CLS;
	readCmd();
}
void Terminal::del(char *fileName) {
	if (remove(fileName) != 0)
		cout << "file not found";
}
void Terminal::shutdown() {
	
}
void Terminal::start() {
	
}
void Terminal::time() {
	
}
void Terminal::date() {

}
void Terminal::systeminfo() {
	cout << "Device Name: " << computer.getName() << "\n";
	cout << "Device Type: " << computer.getType() << "\n";
	cout << "Current User: " << computer.getUser() << "\n";
	cout << "WoterOS: " << computer.getVersion() << "\n";
}
void Terminal::rename(char *oldName, char *newName) {
	std::rename(oldName, newName);
}
void Terminal::device_name() {
	cout << "This device is named " << computer.getName();
}
void Terminal::device_name(string name) {
	computer.getName() = name;
}
void Terminal::version() {
	cout << "WoterOS version " << computer.getVersion() << "\n";
}
void Terminal::apps() {
	
}
void Terminal::sort() {
	
}
void Terminal::bsod() {
	
}
void Terminal::soggy() {
	CLS;
}

// File Explorer

void newFile(string fileName) {
	ofstream File("FileExplorer\\" + fileName + ".h20");
}
void printFile(fstream file) {
	string str;
	while(getline(file, str))
		cout << str;
}