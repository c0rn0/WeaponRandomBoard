/*
 * Weapon.h
 *
 *  Created on: Aug 8, 2011
 *      Author: c0rn0
 */

#ifndef WEAPON_H_
#define WEAPON_H_

#include <iostream>
#include <string>

using namespace std;

class Weapon {
public:

    Weapon();
    Weapon(string name);
    virtual ~Weapon();

    static Weapon* createWeapon(string name);
    virtual void use() = 0;
    string getName();


private:

    string name;

};

#endif /* WEAPON_H_ */
