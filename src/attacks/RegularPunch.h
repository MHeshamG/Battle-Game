#include <iostream>
#include "AttackingBehavior.h"

namespace BattleGame
{
    class RegularPunch : public AttackingBehavior
    {
        void attack() override;
    };
}