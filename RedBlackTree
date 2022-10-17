#include<iostream>
using namespace std;
template<class T>
class Stack{
	private:
		T array[200000];//Random large number, INT_MAX giving segfault
		int head = -1;
		bool empty(){
			if (head ==-1){
				return true;
			}
			else{
				return false;
			}
		}
	public:
		void Push(T elem){
			head++;
			array[head] = elem;
		}
		
		void Pop(){
			if ( empty()){
				cout<<"stack is empty"<<endl;
			}
			else{
				head --;
			}
		}
		T peek(){
			return array[head];
		}
		void size(){
			cout<<head+1<<endl;
		}
		void isempty(){
			if (this -> empty()){
				cout << 1<<endl;
			}
			else{
				cout <<0<<endl;
			}
		}
};
class node{
    public:
    int data;
    node* left ;    
    node* right;
    bool black;//false if red
    node* parent;
};

class RedBlackTree{
    private:
        
        node* sentinel ; 
        node* root ;
        void right_rotate(node* givennode){
            node* a = givennode->left;
            if(givennode==root){root=a;}
            if(givennode==givennode->parent->right)
                givennode->parent->right=a;
            else if (givennode==givennode->parent->left)
                givennode->parent->left=a;
            a->parent=givennode->parent;
            givennode->parent=a;
            givennode->left=a->right;
            a->right=givennode;
        }
        void left_rotate(node* givennode){
            
            node* b= givennode->right;
            if(givennode==root){root=b;}
             
            if(givennode==givennode->parent->right)
                givennode->parent->right=b;
            else if (givennode==givennode->parent->left)
                givennode->parent->left=b;
            b->parent=givennode->parent;
            givennode->parent=b;
            givennode->right=b->left;
            b->left=givennode;
        }

    public:
        node* get_root(){
            return root;
        }
        RedBlackTree(int rootvalue){
            sentinel = new node;
            root = new node;
            sentinel->data = -1;
            sentinel->black= true;
            root->data = rootvalue;
            root->black=true;
            root->left = sentinel;
            root->right=sentinel;
            root->parent=sentinel;
        }
        void insert(int data){
                
                node* curr = root;
                node* prev = sentinel;
                while(curr!=sentinel){
                    if(curr->data<data){
                        prev= curr;
                        curr = curr->right;
                    }
                    else{
                        prev = curr;
                        curr = curr->left;
                    }
                }
                curr = prev;
                

                node* newnode = new node;
                newnode->data = data;
                newnode->parent = curr;
                if(data<curr->data){
                    curr->left=newnode;
                }
                else{
                    curr->right=newnode;
                }
                newnode->left=sentinel;
                newnode->right=sentinel;
                newnode->black = false;
                curr = newnode;
                node* uncle;
                while(!(curr->parent->black)){
                    if(curr->parent==curr->parent->parent->right){
                        uncle=curr->parent->parent->left;
                        
                        if(!uncle->black){
                            curr->parent->black=true;
                            uncle->black=true;
                            curr->parent->parent->black=false;

                        }
                        else{
                            if(curr->parent->left==curr){

                            curr=curr->parent;
                            right_rotate(curr);

                            }

                            curr->parent->black=true;
                            curr->parent->parent->black=false;
                            left_rotate(curr->parent->parent);
                        }
                    }
                    else{
                        uncle=curr->parent->parent->right;
                        
                        if(!uncle->black){
                            curr->parent->black=true;
                            uncle->black=true;
                            curr->parent->parent->black=false;

                        }
                        else{
                            if(curr->parent->right==curr){
                            curr=curr->parent;
                            left_rotate(curr);
                            }

                            curr->parent->black=true;
                            curr->parent->parent->black=false;
                            right_rotate(curr->parent->parent);
                        }

                    }
                }
                root->black=true;
                
                
        }
        void inorder(node* given){
            if (!given || ((given->data)==-1))return;
            
            inorder(given->left);
            cout<<given->data<<endl;
            
            inorder(given->right);
        }




};


int main(){
        #test
        RedBlackTree* tree = new RedBlackTree(5);
        

        tree->insert(10);

        tree->insert(8);
        tree->insert(0);
        tree->insert(20);
        tree->inorder(tree->get_root());

        
       
}




