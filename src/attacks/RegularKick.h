#include <iostream>
#include "AttackingBehavior.h"

namespace BattleGame
{
    class RegularKick : public AttackingBehavior
    {
        void attack() override;
    };
}