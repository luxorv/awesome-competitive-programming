//
//  camel_case.cpp
//  Algorithms
//
//  Created by Victor Ml Polanco on 11/26/16.
//  Copyright © 2016 Victor Ml Polanco. All rights reserved.
//

#include "main.h"

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int camel_case(int argc, const char * argv[]) {
    
#ifdef OFFLINE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
 
    string words;
    int word_count = 1;
    
    cin >> words;
    
    for (int i=0; i<words.length(); i++) {
        if (isupper(words[i])) {
            word_count++;
        }
    }
    
    cout << word_count << endl;
    
    return 0;
}
