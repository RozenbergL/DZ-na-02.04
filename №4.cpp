#include <iostream>
#include<fstream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.txt");
	vector<int> A(3);
	vector<int> B(3);
	fin >> A[0] >> A[1] >> A[2];
	fin >> B[0] >> B[1] >> B[2];
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	int result = A[2] * B[2] + A[1] * B[1] + A[0] * B[0];
	fout << result;
	fin.close();
	fout.close();
}