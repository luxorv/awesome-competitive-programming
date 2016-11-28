//
//  compare_the_triplets.cpp
//  Algorithms
//
//  Created by Victor Ml Polanco on 11/26/16.
//  Copyright © 2016 Victor Ml Polanco. All rights reserved.
//

/*

 If ai > bi, then Alice is awarded  point.
 If ai < bi, then Bob is awarded  point.
 If ai = bi, then neither person receives a point.

*/

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

int compare_triplets(int argc, const char * argv[]) {
    
#ifdef OFFLINE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    
    int a[3], b[3];
    int alice_score = 0, bob_score = 0;
    
    for (int i=0; i<3; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i=0; i<3; i++) {
        scanf("%d", &b[i]);
    }
    
    for (int i=0; i<3; i++) {
        if(a[i] > b[i])
            alice_score++;
        
        if (a[i] < b[i])
            bob_score++;
    }
    
    printf("%d %d", alice_score, bob_score);
    
    return 0;
}
