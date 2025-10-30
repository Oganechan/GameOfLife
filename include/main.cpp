#include <iostream>
#include <cstdint>
#include <unistd.h>
#include "random.hpp"

constexpr int32_t HEIGHT = 30;
constexpr int32_t WIDTH = 120;

bool cells[HEIGHT][WIDTH];
int32_t neighbors[HEIGHT][WIDTH];

void setup()
{
    for (uint32_t i = 0; i < HEIGHT; ++i)
        for (uint32_t j = 0; j < WIDTH; ++j)
            cells[i][j] = rng::bernoulli();
}

void draw()
{
    std::cout << "\033[H";

    for (uint32_t i = 0; i < HEIGHT; ++i)
    {
        for (uint32_t j = 0; j < WIDTH; ++j)
        {
            std::cout << (cells[i][j] ? "█" : " ");
        }
        std::cout << "\n";
    }
}

void neighbors_counts()
{
    for (int i = 0; i < HEIGHT; i++)
        for (int j = 0; j < WIDTH; j++)
            neighbors[i][j] = (cells[((i - 1) + HEIGHT) % HEIGHT][((j - 1) + WIDTH) % WIDTH] == 1) + (cells[(i + HEIGHT) % HEIGHT][((j - 1) + WIDTH) % WIDTH] == 1) + (cells[((i + 1) + HEIGHT) % HEIGHT][((j - 1) + WIDTH) % WIDTH] == 1) + (cells[((i + 1) + HEIGHT) % HEIGHT][(j + WIDTH) % WIDTH] == 1) + (cells[((i + 1) + HEIGHT) % HEIGHT][((j + 1) + WIDTH) % WIDTH] == 1) + (cells[(i + HEIGHT) % HEIGHT][((j + 1) + WIDTH) % WIDTH] == 1) + (cells[((i - 1) + HEIGHT) % HEIGHT][((j + 1) + WIDTH) % WIDTH] == 1) + (cells[((i - 1) + HEIGHT) % HEIGHT][(j + WIDTH) % WIDTH] == 1);
}

void new_generation()
{
    for (int i = 0; i < HEIGHT; i++)
        for (int j = 0; j < WIDTH; j++)
            cells[i][j] = (!cells[i][j]) * (neighbors[i][j] == 3) + cells[i][j] * (neighbors[i][j] == 2 || neighbors[i][j] == 3);
}

int main()
{
    setup();

    for (uint32_t i = 0; i < 10000; ++i)
    {
        usleep(250000);

        draw();
        neighbors_counts();
        new_generation();
    }

    return 0;
}