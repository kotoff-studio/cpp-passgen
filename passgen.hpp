#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

std::string generatePassword(int charCount)
{
	srand(time(nullptr));

	const std::string chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	std::string generatedPassword;

	for (int i = 0; i < charCount; i++) {
		generatedPassword += chars[rand() % chars.length()];
	}
	
	return generatedPassword;
}
