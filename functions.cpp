/*
 * functions.cpp
 *
 *  Created on: Sep 3, 2019
 *      Author: abrundrett2020
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int size;
    int tInput;
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> tInput;
        v.push_back(tInput);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < size; i++){
        printf("%d",v[i]);
        printf(" ");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}




