//
//  mini_max_sum.cpp
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

int min_max(int argc, const char * argv[]) {
    
#ifdef OFFLINE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    
    long long arr[5];
    long long min_sum = 1000000000000, max_sum = -1, sum = 0;
    
    for (int i=0; i<5; i++) {
        scanf("%lld", &arr[i]);
    }
    
    for (int i=0; i<5; i++) {
        
        sum = 0;
        
        for (int j=0; j<5; j++) {
            if(i != j)
                sum += arr[j];
        }
        
        if (sum > max_sum)
            max_sum = sum;
        
        if(sum < min_sum)
            min_sum = sum;
        
    }
    
    printf("%lld %lld", min_sum, max_sum);
    
    return 0;
}
