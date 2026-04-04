#include<iostream>
#include <string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string Resultado=strs[0];
        for (int i = 1; i < strs.size(); i++) {
    int j=0;
  while(j<strs[i].size()&&j<Resultado.size()){

    if(Resultado[j]!=strs[i][j]){
    break;
    }
    j++;
  }
  Resultado = Resultado.substr(0, j);
  if (Resultado == "") return "";
}
return Resultado;
    }
};