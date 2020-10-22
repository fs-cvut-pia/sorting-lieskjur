#include "trideni.h"
#include <fstream>
#include <iostream>

void nacti(std::string nazev, seznam_slov &jmena){
	/*
	std::ifstream file
	file.open(nazev.c_sttr());
	*/
	std::ifstream file(nazev);
	std::string str;
	while(std::getline(file,str)){
		//getline stores characters from "file" into "str" until end-line
		//(delimiter can be added)
		jmena.push_back(str);
	}
}
/*
void serad(seznam_slov &jmena){
}
bool zeptej_se_jestli_vypsat(){
}
*/

void vypis(seznam_slov &jmena){
	for (int i=0;i<jmena.size();i++){
		std::cout << jmena[i] << std::endl;
	}
}
