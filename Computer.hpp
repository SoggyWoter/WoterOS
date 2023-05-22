#pragma once
#include <string>

class Computer {
	private:
		std::string deviceType;
		std::string deviceName;
		std::string user;

		float version = 6.28;
		int pwrState;

		std::string clipboard;

	public:
		Computer();
		Computer(std::string deviceType, std::string deviceName, std::string user);
		
		std::string getType();
		std::string getName();
		std::string getUser();
		float getVersion();
		int getPowerState();

		void copy(std::string text);
		std::string paste();
};
extern Computer computer;