#include <trideni.h>
#include <fstream>

void nacti(std::string nazev, seznam_slov &jmena){
	fstream newfile;
	newfile.open(nazev,ios::in); 
