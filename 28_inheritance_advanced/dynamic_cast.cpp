
#include <iostream>

// Abstract class
class Weapon {
public:
    virtual void use() = 0; // Abstract function
};

class Gun : public Weapon {
public:
    void use() override {
        std::cout << "BANG!" << std::endl;
    }

};

class MachineGun : public Gun {
public:
    MachineGun() : magazine(20) {

    }

    void use() override {
        while(magazine--) {
            std::cout << "BANG ";
        }
        std::cout << "\n";
        magazine = 20;
    }

    
private:
    int magazine;

};

class Player {
public:
    void useWeapon(Weapon& weapon) {
        // Dynamic casting
        Knife* knife = dynamic_cast<Knife*>(&weapon); // Casting the parent address to child pointer

        if (!knife) {
            std::cout << "Not a knife\n";
        }
        else {
            if (knife->getIsStainless()) {
                std::cout << "Stainless knife. Can use it!\n";
                knife->use();
            }
            else {
                std::cout << "Non-stainless knife. Cannot use it!\n";
            }
        }    
    }

};

class Bazooka : public Gun {
public:
    void use() override {
        std::cout << "BOOOOM!" << std::endl;
    }

};

class Knife : public Weapon {
public:
    Knife(bool is_stainless = false) : is_stainless(is_stainless) {}

    void use() override {
        std::cout << "SLICE!" << std::endl;
    }

    bool getIsStainless() {
        return is_stainless;
    }

private:
    bool is_stainless;

};

int main(void) {
    Gun gun;
    MachineGun mg;
    Bazooka bazooka;
    Knife knife;

    mg.use();

    std::cout << "Array\n";
    // Array of base class objects
    Gun* guns[2] = {&gun, &mg};

    for (int i = 0; i < 2; i++) {
        guns[i]->use();
    }

    std::cout << "Player\n";
    Player player;
    player.useWeapon(gun);
    player.useWeapon(mg);
    player.useWeapon(bazooka);
    player.useWeapon(knife);



    return 0;
}
