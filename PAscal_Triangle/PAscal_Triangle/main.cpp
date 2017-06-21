//
//  main.cpp
//  PAscal_Triangle
//
//  Created by Yu-hsiang Chang on 2017/6/21.
//  Copyright © 2017年 Yu-hsiang Chang. All rights reserved.
//

#include <iostream>
using namespace std;

int Pascal (int n, int m)

{
    
    if(m <= 0 || n <= 0 || n < m){
        
        return -1;
    
    }
    
    if(m == 1 || m == n){
        
        return 1;
        
    }
    
    
    else
        
        return (Pascal(n-1,m-1) + Pascal(n-1,m));
    
    
}

int main() {
    
    int n, m ;
    
    cin >> n >> m;

    cout << Pascal(n,m) << endl;
    

    return 0;
}

