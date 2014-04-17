#ifndef SUPERHEROE_H_INCLUDED
#define SUPERHEROE_H_INCLUDED
#include <iostream>

using namespace std;

class SuperHero
{
private:
    //pivate variables
    string _name;
    string _power;
    string _secret;
    int _age;
public:

    SuperHero();
    SuperHero(string,string,string,int);
    //~SuperHero();
    //getters
    string name();
    string power();
    string secret();
    int age();
    //setters
    void set_name(string);
    void set_power(string);
    void set_secret(string);
    void set_age(int);
    void RevealSecretID();
    friend ostream& operator<<(ostream&, SuperHero&);
};

#endif // SUPERHEROE_H_INCLUDED
