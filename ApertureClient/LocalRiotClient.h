#pragma once

#include <curl/curl.h>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

struct lockfileContents {
	std::string raw;
	std::string name;
	std::string pid;
	std::string port;
	std::string password;
	std::string protocol;
};

class LocalRiotClient {

	public:
		LocalRiotClient();
		~LocalRiotClient();

	public:
		bool bIsGameOpen();
		std::vector<std::string> parseLockFile();


	private:
		CURL* curl;

};