#include <iostream>
#include <string>


class Entity {
public:
    std::string GetName() { return "Entity"; }
};


class Player : public Entity {
private:
    std::string m_Name;
public:
    Player(const std::string& name)
        : m_Name(name){}

    std::string GetName() { return m_Name; }
};


int main(){
    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("randy");
    std::cout << p->GetName() << std::endl;

    std::cin.get();
    return 0;
}