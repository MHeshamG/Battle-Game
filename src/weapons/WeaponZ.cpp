#include "WeaponZ.h"

using BattleGame::WeaponZ;

void WeaponZ::fire()
{
    Weapon::fire();
    std::cout<<"WeaponZ causes average damage ...."<<std::endl;
}