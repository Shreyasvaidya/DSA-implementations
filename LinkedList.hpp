#include<iostream>
class node{
    public:
        int power;
        int coeff;
        node* next;
};
class MyLinkedList{
    
    private:
        node * head;node* curr; 
    public:
        int lenlist;

        MyLinkedList(int len){

            lenlist = len;
            
            head = new node;
            curr = head;
            for(int i = 1;i<len;i++){
                
                
                node* next_node = new node;
                curr ->next = next_node;
                
                curr = next_node;
            }
            curr -> next = NULL;
        }
        node* pointer_to_postition(int pos){
                node *current_node = this ->head;
                for(int i =1;i<pos;i++){
                    current_node = current_node ->next;
                }
                
                return current_node;
        }
};
