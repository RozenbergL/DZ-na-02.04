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
	vector <int> numbers(n);
	for (int i = 0; i < n; i++) {
        fin >> numbers[i];
	}
	for (auto now : numbers){
	    cout << now << " ";
	}
	for (int i = 0; i < n; i++) {
		fout << numbers[n - i - 1] << " ";
	}
	fin.close();
	fout.close();
}