#ifndef READ_H
#define READ_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Parsing {
public:
	Parsing();
	Parsing(string id, string seq, string fuc);
	void setFile(string filename);

public:
	string mid;
	string mseq;
	string mfuc;
};
#endif


