#include "SuperHero.h"
#include <string>

SuperHero::SuperHero()
{
    _name = "Name Missing";
    _power = "Power Missing";
    _secret = "Unknown";
    _age = -1;
}
SuperHero::SuperHero(string name, string power, string secret, int age, int powerLevel)
{
    _name = name;
    _power = power;
    _secret = secret;
    _age = age;
    _powerLevel = powerLevel;
}

void SuperHero::RevealSecretID()
{
    _name = _secret;
}

ostream& operator<<(ostream& out, SuperHero &s)
{
    out << s._name << endl;
    out << s._power << endl;
    out << s._secret << endl;
    out << s._age << endl;
    return out;
}

bool operator>(SuperHero& hero1, SuperHero& hero2)
{
    return (hero1._powerLevel > hero2._powerLevel);
}
bool operator<(SuperHero& hero1, SuperHero& hero2)
{
    return (hero1._powerLevel > hero2._powerLevel);
}

bool operator==(SuperHero& hero1, SuperHero& hero2)
{
    return (hero1._powerLevel == hero2._powerLevel);
}

void operator=(SuperHero& hero1, SuperHero& hero2)
{
    hero1._name = hero2._name;
    hero1._powerLevel = hero2._powerLevel;
}

//getters
string SuperHero::name()
{
    return _name;
}

string SuperHero::power()
{
    return _power;
}

string SuperHero::secret()
{
    return _secret;
}

int SuperHero::age()
{
    return _age;
}
//setters
void SuperHero::set_name(string name)
{
    _name = name;
}

void SuperHero::set_power(string power)
{
    _power = power;
}

void SuperHero::set_secret(string secret)
{
    _secret = secret;
}

void SuperHero::set_age(int age)
{
    _age = age;
}

void SuperHero::set_powerLevel(int powerLevel)
{
    _powerLevel = powerLevel;
}
