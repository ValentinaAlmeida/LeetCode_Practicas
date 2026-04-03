#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int TraducirNumero(char romano){
    switch (romano) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            // Si no es un número romano válido
            return 0; 
    }
    }
    int romanToInt(string s) {
     int Resultado=0;
    //lo primero es procesar a l string.....
    //caracter por caracter 
    //pero debo ver los casos en donde los caracteres deben ir juntos 
    for (int i = 0; i < s.length(); i++) {
    //podria hacer una funcion a aparte que dependiendo de el caracter que resiva diga que numero entero es.... como un directorio
     int actual=TraducirNumero(s[i]);
     int siguiente=TraducirNumero(s[i+1]);
     if(actual<siguiente){
        Resultado= Resultado + (siguiente-actual);
        i++;
     }else{
     Resultado=Resultado+TraducirNumero(s[i]);
     }
    }
    return Resultado;
    }
};