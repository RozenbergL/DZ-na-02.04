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
	int a, b, c;
	fin >> a >> b >> c;
	if ((a + b == c) || (a + c == b) || (b + c == a)) {
		fout << "YES";
	}
	else {
		fout << "NO";
	}
	fin.close();
	fout.close();
}