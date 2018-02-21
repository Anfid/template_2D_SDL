#ifndef GAME_H
#define GAME_H

class Graphics;
class Input;
class Scroll;

class Game {
public:
    Game();
    ~Game();

private:
    void mainLoop();
    void draw(Graphics &graphics, Scroll &scroll);
    void update(Graphics &graphics, Input &input, Scroll &scroll, int elapsedTime);
    void reset();
};

#endif // GAME_H
