#include "Computer.hpp"

using namespace std;

Computer::Computer() {
	deviceType = "Potato";
	deviceName = "LiteralPotato";
	user = "Couch Potato";
	pwrState = 0;
}
Computer::Computer(string deviceType, string deviceName, string user) {
	this->deviceType = deviceType;
	this->deviceName = deviceName;
	this->user = user;
	pwrState = 0;
}
string Computer::getType() {
	return deviceType;
}
string Computer::getName() {
	return deviceName;
}
string Computer::getUser() {
	return user;
}
float Computer::getVersion() {
	return version;
}
int Computer::getPowerState() {
	return pwrState;
}
void Computer::copy(string text) {
	clipboard = text;
}
string Computer::paste() {
	return clipboard;
}

Computer computer;