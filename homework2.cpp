#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
ifstream input ("Homework1_Infile.txt");

const int ARRAY_SIZE = 38;


int main(){

	string var;
	double size;
	getline(input, var);//pull the first line of file, which is the size of the array
	size = atof(var); //convert var(String) to a double 

	while(!input.eof()){
		getline(input, var);
		cout << var << endl;
	}//reading through input file, until EOF, printing it out
	
}

