#pragma once
#include <string>

using namespace std;
class Menu
{
public:
	Menu();
	~Menu();
	void songMenu();
	void mp3Menu();
	void songReturnMenu();
	void playlistMenu();
	void playlistReturnMenu();
	void genreMenu();
	
	
private:
	int choice;
	string choice2;
	int choice3;
};

