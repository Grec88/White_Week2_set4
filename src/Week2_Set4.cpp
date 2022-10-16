//============================================================================
// Name        : Week2_Set4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <string>
#include <set>
using namespace std;

int main() {
	map<set<string>, int> base;
	int n, quant;
	string station;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> quant;
		set<string> stat;
		for (int i = 0; i < quant; i++) {
			cin >> station;
			stat.insert(station);
		}
			if (base.count(stat) == 1) {
				cout << "Already exists for " << base[stat]  << endl;
			} else {
				base[stat] = base.size() + 1;
				cout << "New bus " << base.size() << endl;

			}
	}
	return 0;
}
