#include <iostream>
#include <string>

using namespace std;
class character {
        private:
                string name;
                int hp;
                int x;
                int y;
        public:
                int movement;

                character(string charName, int charHP, int charX = 0, int charY = 0) {
                        name = charName;
                        hp = charHP;
                        x = charX;
                        y = charY;
                }

                string getName() {
                        return name;
                }
                int getHP() {
                        return hp;
                }
                int getX() {
                        return x;
                }
                int getY() {
                        return y;
                }
};

class map {
        private:
                int length;
                int width;
        public:
                int condition;
                int bonus;

                map(int mapLength, int mapWidth) {
                        length = mapLength;
                        width = mapWidth;
                }

                int getWidth() {
                        return width;
                }
                int getLength() {
                        return length;
                }
                int getArea() {
                        return length * width;
                }
};

void printMap(map currMap, character jack, character giant) {
        for (int i = 0; i < currMap.getWidth(); i++) {
                for (int j = 0; j < currMap.getLength(); j++) {
                        if (i == jack.getX() && j == jack.getY())
                                cout << "[J]";
                        else if (i == giant.getX() && j == giant.getY())
                                cout << "[G]";
                        else 
                                cout << "[ ]";
                }
                cout << endl;
        }
}

int main() {
        map roots(10, 10);
        character jack = character("Jack", 10);
        character giant = character("Giant", 100, roots.getWidth() - 1, roots.getLength() - 1);

        cout << "chacter name is: " << jack.getName() << endl;
        cout << "giant hp is: " << giant.getHP() << endl;
        cout << "area of map is: " << roots.getArea() << endl;
        printMap(roots, jack, giant);

        return 0;
}

