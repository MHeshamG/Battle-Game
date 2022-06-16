#include <iostream>
#include "Character.h"
#include "WeaponX.h"
#include "WeaponZ.h"
#include "RegularPunch.h"
#include "RegularKick.h"

using BattleGame::Character;
using BattleGame::Weapon;
using BattleGame::WeaponX;
using BattleGame::WeaponZ;
using BattleGame::AttackingBehavior;
using BattleGame::RegularPunch;
using BattleGame::RegularKick;


int main()
{
    std::cout<<"Battle Game Loading"<<std::endl;

    Character player {"Hesham","N/A",28,100};

    std::shared_ptr<Weapon> weaponX { std::make_shared<WeaponX>("WeaponX", 150, 1000, 200) };
    player.addWeapon(weaponX);
    std::shared_ptr<Weapon> weaponZ { std::make_shared<WeaponZ>("WeaponZ", 75, 100, 60) };
    player.addWeapon(weaponZ);

    std::shared_ptr<AttackingBehavior> punch { std::make_shared<RegularPunch>() };
    player.setPunchBehavior(punch);
    std::shared_ptr<AttackingBehavior> kick { std::make_shared<RegularKick>() };
    player.setKickBehavior(kick);

    player.print();
    player.run();
    player.jump();

    player.getWeaponOut(); //Get WeaponX out
    player.fire();
    player.changeWeapon(); //Change to WeaponZ
    player.fire();
    player.changeWeapon(); //Back to WeaponX again
    player.fire();
    player.putWeaponIn();
    player.fire(); //shall do nothing

    player.punch();
    player.kick();

    return 0;
}