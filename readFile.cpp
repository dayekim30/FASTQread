



#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

#include "parsing.h"
#include "sequence.h"
#include "hashmap.h"
#include "frames.h"
using namespace std;


int main() {
    cout << "start" << endl;
    Parsing p = Parsing();
    p.setFile("sample.fastq");

    /*Sequence s = Sequence(re.mseq);
    Sequence fwd = s.forwardSequence();
    Sequence se = s.reverseComplement();*/
    /*cout << "fwd is " << fwd.mStr << endl;
    cout << "reverse complement is " << se.mStr<<endl;
    cout << "length is " << se.length()<<endl;*/

    /* frames f = frames("neclo.txt");
     f.getAllframes(re.mseq);*/
     /*  cout << f.StrOrderchange(2,fwd.mStr) << endl;*/
      /* Hashmap h = Hashmap();
       Hashmap he = h.setHashMap("neclo.txt");
       cout << he.umap.bucket_count()<<endl;*/





       /* string filename("neclo.txt");
         string file_contents;

         file_contents = readFileIntoString(filename);
         cout << file_contents << endl;

         exit(EXIT_SUCCESS);*/
}