#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;
    hero(){
        cout<<"constructor called"<<endl;
    }
};
int main(){
    cout<<"Chaudhary"<<endl;
    //static
    hero h1;
    //dynamically
    hero *h2=new hero;
    cout<<"Aryan"<<endl;

}