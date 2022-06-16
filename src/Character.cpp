#include <iostream>
#include "Character.h"

using BattleGame::Character;

//Constructor
Character::Character(std::string name, 
                     std::string capabilities, 
                     int age, int health) : m_name {name},
                                           m_capabilities {capabilities},
                                           m_age {age},
                                           m_health {health},
                                           m_currentWeaponIndex {0}
{
}

//Getters
std::string Character::getName()
{
    return m_name;
}

std::string Character::getCapabilities()
{
    return m_capabilities;
}

int Character::getAge()
{
    return m_age;
}

int Character::getHealth()
{
    return m_health;
}

//Setters
void Character::setName(std::string name)
{
    m_name = name;
}

void Character::setCapabilities(std::string cap)
{
    m_capabilities = cap;
}

void Character::setAge(int age)
{
    m_age = age;
}

void Character::setHealth(int health)
{
    m_health = health;
}

void Character::setPunchBehavior(std::shared_ptr<AttackingBehavior> punch)
{
    m_punchBehavior = punch;
}

void Character::setKickBehavior(std::shared_ptr<AttackingBehavior> kick)
{
    m_kickBehavior = kick;
}

//Actions
void Character::run()
{
    std::cout<<"I'm running ......"<<std::endl;
}

void Character::jump()
{
    std::cout<<"I'm jumping -_-_-_-"<<std::endl;
}

void Character::punch()
{
    if(m_punchBehavior)
        m_punchBehavior->attack();
}

void Character::kick()
{
    if(m_kickBehavior)
        m_kickBehavior->attack();
}

void Character::fire()
{
    if(currentWeapon)
    {
        std::cout<<"I'm firing - - - -"<<std::endl;
        currentWeapon->fire();
    }
}

void Character::changeWeapon()
{
    if(hasMoreThanOneWeapon())
    {
        //Reset to 0 in case of exceeding size
        m_currentWeaponIndex = ++m_currentWeaponIndex % m_weapons.size();
        currentWeapon = m_weapons[m_currentWeaponIndex];
        std::cout<<"Changed Weapon: ";
        currentWeapon->print();
    }
}

void Character::getWeaponOut()
{
    if(hasWeapon())
    {
        currentWeapon = m_weapons[m_currentWeaponIndex];
        std::cout<<"Get Weapon Out: ";
        currentWeapon->print();
    }
}

void Character::putWeaponIn()
{
    currentWeapon = nullptr;
}

void Character::addWeapon(std::shared_ptr<Weapon> weapon)
{
    if(weapon)
        m_weapons.push_back(weapon);
}

bool Character::hasWeapon()
{
    return m_weapons.size() > 0;
}

bool Character::hasMoreThanOneWeapon()
{
    return m_weapons.size() > 1;
}

//helpers
void Character::print()
{
    std::cout<<m_name<<" "<<m_capabilities<<" "<<m_age<<" "<<m_health<<std::endl;
}