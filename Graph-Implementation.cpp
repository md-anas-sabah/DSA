#include<bits/stdc++.h>
using namespace std;

// class Graph{
//     int V;
//     list<int> *l;
// public:
//     Graph(int V){
//         this->V = V;
//         l = new list<int> [V];
//     }

//     void addEdge(int x , int y){
//         l[x].push_back(y);
//         l[y].push_back(x);
//     }

//     void printAdjList(){
//         for(int i=0;i<V;i++){
//             cout<<"Vertex" << i << "->";
//             for(int nbr:l[i]){
//                 cout << nbr <<",";
//             }
//             cout << endl;
//         }
//     }
// };

void addEdge(vector<int> adj[],int x , int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}

void printGraph(vector<int>adj[],int V){
    for(int i=0;i<V;++i){
        cout <<"Vertex "<< i << "->";
        for(int nbr: adj[i]){
            cout << nbr << ",";
        }
        cout<<endl;
    }
}


int main()
{
    int V = 4;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,2,3);
    addEdge(adj,2,1);
    printGraph(adj,V);
    return 0;
}