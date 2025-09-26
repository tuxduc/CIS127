#include <iostream>
using namespace std;
/*
we get inputs for abcdef, not xy
we want to know if a solution exits where equation1 == equation2 for given inputs
to do this, we will iterate xy in both equations through integer range -10 to 10
*/
int main() {
    int a,b,c,d,e,f; cin>>a>>b>>c>>d>>e>>f;
    int x,y;
    bool solution=false;
   
    for(x=-10; x<=10; x++){
        for(y=-10; y<=10; y++){
            int equation1 = (a*x)+(b*y);
            int equation2 = (d*x)+(e*y);
            if(equation1==c && equation2==f){
                solution=true;
                break;
            }
        }
        if(solution==true){break;} 
    }
if(solution==true){
cout<<"x = "<<x<<", y = "<<y<<endl;
}
else{
cout<<"There is no solution"<<endl;
}



   return 0;
}
