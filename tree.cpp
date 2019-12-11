#include <iostream>
#include <string>
#include "tree.h"
using namespace std;

node_t* create_node(string name, string info, int line, int col){
    node_t * node = new node_t (); 
    node->name = name;
    node->info = info;
    node->col = col;
    node->line = line;
 }
node_t* node_t::append(node_t* node){
    if( node != NULL)
        this->children.push_back(node);
    return this;
 }

node_t* node_t::appendChildren(node_t* nodes){
    if( nodes != NULL)
        this->children.insert(this->children.end(), nodes->children.begin(), nodes->children.end());
    return this;
 }
void node_t::show(int height){ 
    int i = 0;
    for(;i!=height;i++){
        cout<<"  ";
    }
    i=0;
    cout<<this->name<<" "<<"("<<this->line <<","<<this->col<<")"<<" ";
    if(this->info != ""){
        cout<<this->info<<endl;
    }
    else cout<<endl;
    for(;i!= this->children.size();i++){
        this->children[i]->show(height+1);
    }
}

string node_t::save(){
    int i = 0;
    string ret = "{ name: \'" + this->name + "\', line:\'" + to_string(this->line) +"\', col:\'"+ to_string(this->col)+"\' ,info: \'"+this->info+"\',";
    if(this->children.size() == 0){
        ret+= "},";
    }
    else{
        ret+="children :[";
        
        for(;i!=this->children.size();i++){
            ret += this->children[i]->save();
        }
        ret += "]},";
    }
    return ret;
}