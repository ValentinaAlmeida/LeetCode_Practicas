#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0) return false;
    //separar digitos y meterlo en un vector.
    //creo el vector 
    vector<int> digitos;
    while (x > 0) {
        digitos.push_back(x % 10); // Toma el último dígito
        x /= 10;                  // Quita el último dígito
    //dividen decenas,centenas, por unidades
    
    }
    reverse(digitos.begin(), digitos.end());

    //Ver si es palindromo, comparamos extremos.
    int N=digitos.size();
    int i=0;
    int j=N-1;
    bool etiqueta=true;
    while(i<j){
    if(digitos[i]==digitos[j]){
    i=i+1;
    j=j-1;
    }else{
        return false;
    }
    }
    return true;
    } 
};