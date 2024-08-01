#include<iostream>
using namespace std;
class hero{
    public:
    int health=20;
};
int main(){
    hero h1;
    h1.health=40;
    cout<<h1.health<<endl;
}