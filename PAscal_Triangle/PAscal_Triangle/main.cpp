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
    
    int triangle [m+1] , turn ,column;
    
    for( turn = 1 ; turn <= n -1 ; turn ++){
    
        for ( column = 1 ; column <= min (m,turn) ; column ++ ){
            
                
            if(column == 1 || column == turn){
                    
                triangle [column] = 1;
                    
            }
                
            else
                    
                triangle [column] = triangle [column-1] + triangle [column] ;
            
            }
    }
    
    triangle [m] = triangle [m-1] + triangle [m] ;
    
    return triangle [m];

    
}
    



int main() {
    
    int n, m ;
    
    cin >> n >> m;
    
    cout << Pascal(n,m) << endl;
    
    return 0;
}

