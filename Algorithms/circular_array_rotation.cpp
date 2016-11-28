//
//  circular_array_rotation.cpp
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

int circular_array(int argc, const char * argv[]) {
    
#ifdef OFFLINE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    
    int n, k, q, m;
    
    scanf("%d %d %d", &n, &k, &q);
    
    int a[n];
    
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i=0; i<q; i++) {
        
        scanf("%d", &m);
        
        m -= k;
        
        while(m < 0) m += n;
        
        printf("%d\n", a[m]);
    }
    
    return 0;
}
