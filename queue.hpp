#include<iostream>
using namespace std;
template<class T>
class Queue{ 
	private:
		T* array;
	public:
	    int head;
	    int tail;
		Queue(){
			array = new T[2000000];
			head =0;
			tail = 0;
		}
		
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
		
		void enqueue(T x){
			array[tail] = x;
			tail++;
		}
		T dequeue(){
			if (!this -> empty()){
				T value = array[head];
				head++;
				return value;
			}      
			else{
				return NULL;
			}
		}
		T front(){
			if (!this -> empty()){
				return array[head];
		
			}   
			else{
				return NULL;
			}
		}	
	T rear(){
		if (!(this -> empty())){
			return array[tail-1];
		
			}   
		else{
			return NULL;
			}
		}
	
	};
