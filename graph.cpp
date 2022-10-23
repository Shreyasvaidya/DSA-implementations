#include<iostream>

using namespace std;

class Queue{ 
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
class Graph{
    private:
        int num_vertices;
        Queue * adjacency  ;
    public:
        Graph(int v){
            num_vertices=v;
            adjacency= new Queue[v];
        }
        void add_edge(int v,int w){
            adjacency[v].enqueue(w);
        }
        void bfs(int s){
            bool* visited = new bool[num_vertices];  
            for(int i=0;i<num_vertices;i++){
              visited[i]= false;
            }
            Queue queue;
            queue.enqueue(s);
            visited[s] = true;
            while(!queue.empty()){
                int curr = queue.dequeue();
                cout<<curr<<" ";
                while(!adjacency[curr].empty()){
                    int elem = adjacency[curr].dequeue();
                    if(!visited[elem]){
                        visited[elem]=true;
                        queue.enqueue(elem);
                    }
                }
                
            }
        }
};
//test
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 0);
    g.add_edge(2, 3);
    g.add_edge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.bfs(2);
 
    return 0;
}
