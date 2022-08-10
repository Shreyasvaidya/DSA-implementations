class Stack{
	private:
		int array[200000];//Random large number, INT_MAX giving segfault
		int head = -1;
		
	public:
		bool empty(){
			if (head ==-1){
				return true;
			}
			else{
				return false;
			}
		}
    		void push(int elem){
			head++;
			array[head] = elem;
		}
		
		void pop(){
			if (this -> empty()){
				cout<<"stack is empty"<<endl;
			}
			else{
				head --;
			}
		}
		int top(){
			if (this ->empty()){
				return -1;
			}
			else{
				return array[head];
			}
		}
		void size(){
			cout<<head+1<<endl;
		}
		
};
