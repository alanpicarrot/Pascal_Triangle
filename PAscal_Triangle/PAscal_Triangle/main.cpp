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
    
    int triangle[n+1][m+1] , row , column;
    
        for ( row = 1 ; row <= n ; row ++ ){
        
            for ( column = 1 ; column <= min(row,m) ; column ++ ){
            
                
                if(column == 1 || column == row){
                    
                    triangle[row][column] = 1;
                    
                                                }
                
                else
                    
                   triangle[row][column] = triangle[row-1][column-1] + triangle[row-1][column] ;
            
                                                                   }
        
                                           }
    
    
    return triangle[n][m];
        

    
}
    



int main() {
    
    int n, m ;
    
    cin >> n >> m;
    
    cout << Pascal(n,m) << endl;
    
    return 0;
}

