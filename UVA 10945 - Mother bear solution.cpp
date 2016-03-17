//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

string paal;
bool repal;
void pal(int s, int e) {
	/*if(s>=e) return true;
	 if(paal[s]!=paal[e]) return false;
	 pal(s+1,e-1);*/
	if (s >= e)
		return;
	if (!isalpha(paal[s])) {
		pal(s + 1, e);
		return;
	}
	if (!isalpha(paal[e])) {
		pal(s, e - 1);
		return;
	}
	if (tolower(paal[s]) != tolower(paal[e])) {
		repal = false;
		return;
	}
	pal(s + 1, e - 1);
}

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 10945 - Mother bear
	string s;
	while (getline(cin, s)) {
		if (s == "DONE")
			break;
		// string d="";
		// for(int i=0;i<s.size();i++)
		// if(isalpha(s[i]))
		// d+=tolower(s[i]);
		// paal=d;
		paal = s;
		repal = true;
		pal(0, paal.size() - 1);
		if (repal)
			cout << "You won't be eaten!\n";
		else
			cout << "Uh oh..\n";
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
