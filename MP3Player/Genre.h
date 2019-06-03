#pragma once
#include <string>
using namespace std;

class Genre
{
public:
	Genre();
	~Genre();
	virtual void setType(string);
	string getType();

private: 
	string type;
};

