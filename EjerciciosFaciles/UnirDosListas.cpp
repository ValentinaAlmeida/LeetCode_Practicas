#include<iostream>
using namespace std;
  struct ListNode {
   int val;
 ListNode *next;
 ListNode() : val(0), next(nullptr) {}
 ListNode(int x) : val(x), next(nullptr) {}
 ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode temporal(0);
    ListNode* actual = &temporal;
        //insertar y luego ordenar.
        //si es mayor para atras 
        //buble short?
        //si uso una cola para ir guardando los ue son menores primero, y  leugo todo eso lo inserto en una nueva....y el procesode ordenacion que se haga tomando cada nodo de mabas listas irlas recorriendo y luego decir oye,si nodo a es mayor a nodo b se inserta primero nodo a. y luego se inserta nodo b y seguiente nodo. o un nodo temporal
     while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            actual->next = list1;   
            list1 = list1->next;  
        } else {
            actual->next = list2; 
            list2 = list2->next;  
        }
        actual = actual->next;    
    }
    if (list1 != nullptr) {
        actual->next = list1;
    } else {
        actual->next = list2;
    }
    return temporal.next;
    }
};