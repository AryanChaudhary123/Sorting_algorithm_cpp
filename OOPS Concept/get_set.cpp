#include<iostream>
using namespace std;
class hero{
    int health;
    double a;
    char level;
    public:
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
};
int main(){
    hero aryan;
    cout<<sizeof(aryan)<<endl;
    cout<<aryan.gethealth()<<endl;
    aryan.sethealth(40);
    cout<<aryan.gethealth()<<endl;
}
