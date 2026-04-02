#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    bool EtiquetaSolucion=false;
    int i=0;
    vector<int> Resultado;
    while(!EtiquetaSolucion){
    int Valor=0;
    for(int K=0;K<nums.size();K++){
     Valor=nums[i]+nums[K];
      if((Valor==target)&&(i!=K)){
      EtiquetaSolucion=true;
      Resultado.push_back(i);
      Resultado.push_back(K);
      break;
      }
    }
     i=i+1;
    }
    return Resultado;
    }
};
int main(){
//------variables locales-------------------------
vector<int> nums;
int ValorNumeros=0;
int numeroIngresado=0;
int target=0;//inicializar para no tener valor basura
//--------------------------------------------------
//-----PEDIR DATOS------------------------------------
cout << "¿Cuántos números quieres ingresar? ";
cin >> ValorNumeros;
for (int i = 0; i < ValorNumeros; i++) {
        std::cout << "Ingresa el valor " << i + 1 << ": ";//le decimos que lo ingrese
        std::cin >> numeroIngresado;//recibes el dato
        nums.push_back(numeroIngresado); // Agregamos el dato al final
    }
    cout<<"Por favor, ingrese el numero a buscar:";
    cin>>target;
//----------------------------------------------------

//-----RESULTADO--------------------------------------
Solution resultado;
resultado.twoSum(nums,target);
 cout<<"Los numeros que sumados dan"<<" "<<target<<" "<<"son:";
for (int i = 0; i < resultado.twoSum(nums,target).size(); i++){
    cout<<resultado.twoSum(nums,target)[i];
    cout<<endl;
}
//----------------------------------------------------------------
return 0;
}