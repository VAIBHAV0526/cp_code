#include<iostream>
#include<vector>
using namespace std;


/*
probleam statment with explanation
The Stern-Brocot tree and Farey sequences
the probleam statemnt:
The construction starts at the zeroth iteration with the two fractions
1  0
0  1
the we have to build the level tree
suppose the tress follow as 
           

*/
//solution:
void build_tree(int a, int b, int c, int d ,int level,int stoping_level){
    int x=a+c;
    int y=b+d;
 cout<<a<<"/"<<b<<" "<<x<<"/"<<y<<" "<<c<<"/"<<d<<endl;
 if(level==stoping_level){
   return;
 }
else{
 build_tree(x,y,c,d,level+1,stoping_level);
 build_tree(a,b,x,y,level+1,stoping_level);
}  

}



void solutions (){
    
    int a;  // sin we  cannot take input as the number 
    int b;
    int c;
    int d;
   std:: cin>>a>>b>>c>>d;
int level=1;
int stoping_level;
cin>>stoping_level;

build_tree(a,b,c,d,level,stoping_level);


    
}




int main(){
std::ios_base::sync_with_stdio(false);  // for fast inuput output
std::cin.tie(NULL);

#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
solutions();



}