#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <math.h>
#include <bits/stdc++.h> 

using namespace std;
 
int main()
{
    string data="3 4 11 13 14 18 19 22 23 23 36 37 38 39 41 41 42 47 54 63 64 66 67 75 77 80 80 82 100 105 109 110 112 116 123 123 137 143 145 147 147 151 153 155 162 170 171 174 177 178 180 183 187 201 206 211 214 217 222 224 227 233 234 238 238 240 240 241 243 244 244 256 265 266 274 277 283 292 293 296";
    
    for (int i=0;i<data.length();i++) {
      if (data[i]==' ') {
         data[i]=',';
      }
    }
    cout<<data<<endl;

    return 0;
}