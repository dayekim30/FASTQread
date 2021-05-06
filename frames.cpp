#include "frames.h"
#include "hashmap.h"

frames::frames() {}

frames::frames(Hashmap tmap)
{

	map = tmap.umap;
}

frames::frames(string* g)
{
	fwdFirst = g[0];
	fwdSecond = g[1];
	fwdThird = g[2];
	bwdFirst = g[3];
	bwdSecond = g[4];
	bwdThird = g[5];
}
void frames::setFrames(string* g)
{
	fwdFirst = g[0];
	fwdSecond = g[1];
	fwdThird = g[2];
	bwdFirst = g[3];
	bwdSecond = g[4];
	bwdThird = g[5];
}

string frames::setPro(string seq)
{
	/*Hashmap h = Hashmap();
	Hashmap he = h.setHashMap("neclo.txt");*/
	//string* res;
	//res = new string[1];

	/*Sequence se = Sequence(seq);
	string fwd = se.forwardSequence().mStr;
	*/
	/*cout << "curent seq: " << seq << endl;*/
	string str(seq.length() / 3, 0);
	int a = seq.length() % 3;
	int num = 0;
	char st[3];

	for (int i = 0; i < seq.length() - a; i++) {
		st[i % 3] = seq[i];
		if (i % 3 == 2) {
			string base = "";
			for (int j = 0; j < 3; j++) {
				base = base + st[j];
			}
			/*cout << "current three letters is " << base << endl;*/
			if (map.find(base) == map.end()) {
				str[num++] = 'X';
			}
			else {
				str[num++] = map.at(base);
			}
		}
	}
	//res[0] = str;
	/*cout << "result str: " << str << endl;*/
	return str;
}

string frames::StrOrderchange(int a, string seq)
{
	string str = seq.substr(a);
	for (int i = 0; i < a; i++) {
		str += seq.at(i);
	}


	/*cout << "str is " << seq << endl;
	cout << "str length is " << str.length() << endl;*/


	return str;
}

void frames::getAllframes(string seq)
{
	string res[6];
	Sequence se = Sequence(seq);
	string fwd = se.forwardSequence().mStr;
	res[0] = setPro(fwd);
	res[1] = setPro(StrOrderchange(1, fwd));
	res[2] = setPro(StrOrderchange(2, fwd));
	string bwd = se.reverseComplement().mStr;
	res[3] = setPro(bwd);
	res[4] = setPro(StrOrderchange(1, bwd));
	res[5] = setPro(StrOrderchange(2, bwd));
	setFrames(res);
	//cout << "Inside" << endl;
}


