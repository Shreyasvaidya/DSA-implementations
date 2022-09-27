#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node* next;
};
class MyLinkedList{
    
    private:
        node * head;node* curr; 
    public:
        int lenlist=0;

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
        node* pointer_to_postition(int pos){ //note the typo
                node *current_node = head;
                for(int i =1;i<pos;i++){
                    current_node = current_node ->next;
                }
                
                return current_node;
        }
        void print(){
            for(int i =1;i<=lenlist;i++){
                cout<<pointer_to_postition(i) ->data<<" ";
            }
            cout<<endl;
            
        }
        void deleteFromList(int elem){//deletes the first instance of an element in the list
            if(head->data==elem){
                node* temp = head;
                if(lenlist-1){
                    head = head->next;
                    delete head;
                    lenlist--;
                    return;
                }
                else{
                    delete head;
                    lenlist--;
                    return;
                }

            }

            for(int i=1;i<lenlist;i++){
                if (pointer_to_postition(i+1)->data == elem){
                    node* temp = pointer_to_postition(i+1);
                    if(i<lenlist-1) pointer_to_postition(i)->next = pointer_to_postition(i+2);
                    delete temp;
                }
            }
        }
        
};
