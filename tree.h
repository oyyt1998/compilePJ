#include <string>
#include <vector>
using namespace std;

struct node_t { 
    string name;    
    string info;
    int line;
    int col;
    vector<node_t*> children;
    node_t* append(node_t* node);
    node_t* appendChildren(node_t* nodes);
    void show(int height);
    string save();
};

node_t* create_node(string name, string info, int line, int col );
