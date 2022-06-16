#include <iostream>
#include "Weapon.h"

using BattleGame::Weapon;

//Constructor
Weapon::Weapon(std::string name, 
       int power, 
       int rate, 
       int maxShots) : m_name {name}, 
                       m_power{power}, 
                       m_rate{rate}, 
                       m_maxShots{maxShots}, 
                       m_shots{maxShots}
{
}

//Getters
std::string Weapon::getName()
{
    return m_name;
}

int Weapon::getPower()
{
    return m_power;
}

int Weapon::getRate()
{
    return m_rate;
}

int Weapon::getShots()
{
    return m_shots;
}

int Weapon::getMaxShots()
{
    return m_maxShots;
}

//Setters
void Weapon::setName(std::string name)
{
    m_name = name;
}

void Weapon::setPower(int power)
{
    m_power = power;
}

void Weapon::setRate(int rate)
{
    m_rate = rate;
}

void Weapon::setShots(int shots)
{
    m_shots = shots;
}

void Weapon::setMaxShots(int maxShots)
{
    m_maxShots = maxShots;
}

//Actions
void Weapon::fire()
{
    --m_shots;
    std::cout<<m_name<<" is firing reamining shots: "<<m_shots<<std::endl;
}

void Weapon::reload()
{
    m_shots = m_maxShots;
}

//helpers
void Weapon::print()
{
    std::cout<<m_name<<" "<<m_power<<" "<<m_rate<<" "<<m_maxShots<<" "<<m_shots<<std::endl;
}