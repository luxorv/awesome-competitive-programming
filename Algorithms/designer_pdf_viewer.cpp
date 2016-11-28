//
//  designer_pdf_viewer.cpp
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

/*
 
 In this type of PDF viewer, the width of the rectangular selection area is equal to the number of letters in the word times the width of a letter, and the height is the maximum height of any letter in the word.
 
 */

string alphabet = "abcdefghijklmnopqrstuvwxyz";

int position_from_letter(char letter) {
    
    for (int i=0; i<alphabet.length(); i++) {
        if (letter == alphabet[i]) {
            return i;
        }
    }
    
    return -1;
}

int designer_pdf(int argc, const char * argv[]) {
    
#ifdef OFFLINE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    
    // code here:
    
    int N = 26, h_i;
    
    vector<int> h;
    
    for (int i=0; i<N; i++) {
        
        cin >> h_i;
        
        h.push_back(h_i);
    }
    
    string word;
    
    cin >> word;
    
    int max_height = -1, index;
    
    for (int i=0; i<word.size(); i++) {
        index = position_from_letter(word[i]);
        
        if (h[index] > max_height) {
            max_height = h[index];
        }
    }
    
    cout << max_height * word.size() << endl;
    
    return 0;
}
