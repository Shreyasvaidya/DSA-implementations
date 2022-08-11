#include <iostream>

class Queue{ //my implementation , will later use to make stacks
  private:
    int array[20000];
  public:
    bool empty(){
      if (tail== head){
        return true;
      }
      else{
        return false;
      }
    }
    int qsize(){
	return tail-head;


    }
    int head = 0;
    int tail = 0;
    void enqueue(int x){
      array[tail] = x;
      tail++;
    }
    int dequeue(){
      if (!this -> empty()){
        int value = array[head];
		head++;
		return value;
      }      
      else{
      	return -1;
      }
    }
    int front(){
	if (!this -> empty()){
           return array[head];
	
      	}   
    	else{
	   return -1;
        }
    }	
   int rear(){
	if (!(this -> empty())){
           return array[tail-1];
	
      	}   
    	else{
	   return -1;
        }
    }
   
};
