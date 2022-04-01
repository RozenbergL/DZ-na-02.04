#include <iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	int n;
	fin >> n;
	if ((n == 1) || (n == 2) || (n == 12)){
	    fout << "Winter";
	}
	if ((n == 3) || (n == 4) || (n == 5)){
	    fout << "Spring";
	}
	if ((n == 6) || (n == 7) || (n == 8)){
	    fout << "Summer";
	}
	if ((n == 9) || (n == 10) || (n == 11)){
	    fout << "Autumn";
	}
	if ((n < 1) || (n > 12)){
	    fout << "Error";
	}
	fin.close();
	fout.close();
}