#include <process.h>
int main(int argc, char **argv) {
	system("g++ -c Computer.cpp Graphics.cpp AppsDef.cpp OsomeSystem.cpp");
	system("g++ Computer.o Graphics.o AppsDef.o OsomeSystem.o -o OsomeSystem");
	system("OsomeSystem");
	return 0;
}