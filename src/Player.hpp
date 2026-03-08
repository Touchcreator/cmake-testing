class Player
{
    public:
        Player(int x, int y, int size);
        ~Player() {};

        void changeX(int speed);
        void changeY(int speed);

        void draw();

    private:
        int x;
        int y;
        int size;
};