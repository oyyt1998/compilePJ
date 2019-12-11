#include <iostream>
#include <stdio.h>
#include <fstream>
#include "tree.h"
using namespace std;

int yyparse();
extern "C" FILE* yyin;
extern node_t* root;

int main(int argc, char** argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
	//FILE *file = fopen("../tests/test11.pcat", "r");
        if (!file) {
            cerr << "Cannot open file." << endl;
            return 1;
        } else {
            yyin = file;
        }
    } else {
        yyin = stdin;
    }
    int a = yyparse();
    if(!a){
	    root->show(0);
	    ofstream fout("test.txt");
	    string ret = root->save();    
	    fout<<ret<<endl;
	    fout.close();

	    //create tree
	    ifstream ifs;
	    ifs.open("tmp.txt");
	    
	    ofstream fout2("data.js",ios::trunc);
	    string s;
	    size_t found = ret.find_last_of(',');
	    fout2<<"var data = "<< ret.substr(0,found) << endl;
	    
	    while(getline(ifs,s)){
	    	fout2<<s<<endl;
	    }  

	    ifs.close();
	    fout2.close();
    }
    else{
	cout << "sorry,the file have some errors, plz check them :)"<<endl;
    }
    return 0;
}

