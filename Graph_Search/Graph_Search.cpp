// Graph_Search.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"


using namespace std;
int main()
{
	fstream inputfile;
	inputfile.open("input", ios::in);

	int num_rows = 0;
	int num_columns = 0;
	inputfile >> num_rows;
	inputfile >> num_columns;

	vector<vector<int> > inputm(num_rows, vector<int>(num_columns));

	for (int i = 0; i < num_rows; i++)
	{
		for (int j = 0; j < num_columns; j++)
		{
			inputfile >> inputm[i][j];
		}
	}


	system("pause");
}


