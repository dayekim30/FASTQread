#include "hashmap.h"
using namespace std;

Hashmap::Hashmap() {}

Hashmap::Hashmap(unordered_map<string, char> map)
{
    umap = map;
}

Hashmap Hashmap::setHashMap(string filename)
{
    fstream newfile;
    newfile.open(filename, ios::in); //open a file to perform read operation using file object

    unordered_map<string, char> Numap;

    /* cout << newfile.is_open() << endl;*/

    if (newfile.is_open()) {   //checking whether the file is open
        string tp;

        int i = 0;
        while ((getline(newfile, tp)) && i < 64) {
            vector<string> result;
            stringstream ss(tp);

            while (ss.good()) {
                string substr;
                getline(ss, substr, ',');
                result.push_back(substr);
            }

            Numap[result[0]] = result[1][0];
            i++;
        }
        //read data from file object and put it into string.       
    }
    newfile.close(); //close the file object.
    return Hashmap(Numap);
}
