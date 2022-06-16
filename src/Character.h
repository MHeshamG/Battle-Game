#include <memory>
#include <vector>

#include "Weapon.h"
#include "AttackingBehavior.h"

namespace BattleGame
{
    class Character
    {
    public:
        //Constructor
        Character() = default;
        Character(std::string name, std::string capabilities, int age, int health);

        //Destructor
        ~Character() = default;

        //Getters
        std::string getName();
        std::string getCapabilities();
        int getAge();
        int getHealth();

        //Setters
        void setName(std::string name);
        void setCapabilities(std::string cap);
        void setAge(int age);
        void setHealth(int health);
        void setPunchBehavior(std::shared_ptr<AttackingBehavior> punch);
        void setKickBehavior(std::shared_ptr<AttackingBehavior> kick);

        //Actions
        void run();
        void jump();
        void punch();
        void kick();
        void fire();
        void changeWeapon();
        void getWeaponOut();
        void putWeaponIn();
        void addWeapon(std::shared_ptr<Weapon> weapon);
        bool hasMoreThanOneWeapon();
        bool hasWeapon();

        //helpers
        void print();

    private:
        std::string m_name;
        std::string m_capabilities;
        int m_age;
        int m_health;

        std::vector<std::shared_ptr<Weapon>> m_weapons;
        std::shared_ptr<Weapon> currentWeapon;
        int m_currentWeaponIndex;

        std::shared_ptr<AttackingBehavior> m_punchBehavior;
        std::shared_ptr<AttackingBehavior> m_kickBehavior;
    };
}