//
//  request_for_proposal.cpp
//  Algorithms
//
//  Created by Victor Ml Polanco on 11/28/16.
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
 
 Your job is to select the Proposal with the highest compliance; if several proposals have the same
 compliance you are to select from these proposals the one with the lowest price. If several proposals
 have the same compliance and price you are to select the first one in the input.
 
 */

struct Proposal {
    
    float price, compliace;
    int met_requirements;
    
    string name;
    
    Proposal() {
        
    }
};

bool cmp (Proposal p1, Proposal p2) {
    
    if (p1.compliace > p2.compliace) {
        return true;
    }
    
    if (p1.compliace == p2.compliace) {
        
        if (p1.price < p2.price) {
            return true;
        }
    }
    
    return false;
}

int request_for_proposal(int argc, const char * argv[]) {
    
#ifdef OFFLINE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    
    int number_of_requirements, number_of_proposals, t_case = 1;
    
    while(cin >> number_of_requirements >> number_of_proposals) {
        
        if (number_of_proposals == 0 && number_of_requirements == 0) {
            break;
        }
        
        if (t_case > 1) {
            cout << endl;
        }
        
        cin.ignore();
        
        for (int i=0; i<number_of_requirements; i++) {
            
            string requirement;
            
            getline(cin, requirement);
        }
        
        vector<Proposal> proposals;
        
        for (int i=0; i<number_of_proposals; i++) {
            
            Proposal p;
            
            getline(cin, p.name);
            
            cin >> p.price >> p.met_requirements;
            
            p.compliace = (double)p.met_requirements/(double)number_of_requirements;
            
            cin.ignore();
            
            for (int j=0; j<(int)p.met_requirements; j++) {
                
                string requirement;
                
                getline(cin, requirement);
            }
            
            proposals.push_back(p);
        }
        
        sort(proposals.begin(), proposals.end(), cmp);
        
        cout << "RFP #" << t_case << endl;
        
        cout << proposals[0].name << endl;
        
        t_case++;
    }
    
    return 0;
}
