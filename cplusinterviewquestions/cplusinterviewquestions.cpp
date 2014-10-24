// cplusinterviewquestions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <array>
using namespace std;

string stringToInt(int x) {
	ostringstream temp; // string temp
	temp << x;
	return temp.str();
}

int intToString(string s) {
	int x = atoi(s.c_str());
	return x;
}
int numberreverse2(int num) {
	int new_num = 0;
	while (num > 0)
	{
		new_num = (new_num * 10) + (num % 10);
		cout << "new number:" << new_num << endl;
		num = num / 10;
		cout << "Our number now:" << num << endl;
	}
	cout << new_num << endl;
	return new_num;
}
int superduper[11] = {0,0,0,0,0,0,0,1,1,1,1};

int arrayCount(int arg[], int start, int end)
{
	int middle = (start + end) / 2; // state our middle
	if (start == end) { //if we finish our recursive search, on our last binary search
		if (arg[start] == 0) {
			return start + 1; //if its a 0, thats the number of 0's we have (plus 1 for indexing)
		}
		else
			return start; //if its a 1, thats the number 0's we have before that 1, thus the -1 however arrays start at 0, so thats accounted for
	}
	else
	{
		if (arg[middle] == 0)
		{
			return arrayCount(arg, middle + 1, end); //if the middle is a 0, look at the next half starting from that middle plus 1
		}
		else {
			return arrayCount(arg, start, middle); //if the middle is not a 0, look at the lower half, starting from the start to that middle
		}
	}
	
}

string anagram(string s1, string s2) {
	char money = s1.at(0);
	for (int i = 0; i < s2.length(); i++) {
		if (money == s2.at(i)) {
			cout << i << ", ";
		}
	}
	return s1;
}


int main(int argc, _TCHAR* argv[])
{
	int x;
	cout << arrayCount(superduper, 0, 10) << endl;
	anagram("apple", "amappa");
	cin >> x;

}

