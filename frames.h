#pragma once
#include "hashmap.h"
#include "sequence.h"
#include <unordered_map>
#include <string>


class frames
{
public:
	frames();
	frames(Hashmap tmap);
	frames(string* g);

	string setPro(string seq);
	string StrOrderchange(int a, string seq);
	void getAllframes(string seq);
	void setFrames(string* g);
private:
	unordered_map<string, char> map;
public:
	string fwdFirst;
	string fwdSecond;
	string fwdThird;
	string bwdFirst;
	string bwdSecond;
	string bwdThird;
};

