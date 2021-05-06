#pragma once
#include <iostream>
#include<vector>
#include<sstream>
#include <unordered_map>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Hashmap {
public:
	Hashmap();
	Hashmap(unordered_map<string, char> map);
	Hashmap setHashMap(string filename);


public:
	unordered_map<string, char> umap;

private:
	string trio;
	string nuclo;

};