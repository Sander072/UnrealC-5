#include <iostream>

void Cycle(int n)
{
    for (int c = 0; c <= n; c += 2)
        std::cout << c << " ";
}

void MirrorСycle(int n)
{
    for (int c = 1; c <= n; c += 2)
        std::cout << c << " ";
}

void Сondition(int n, bool s)
{
    if (s == true)
        Cycle(n);
    else
        MirrorСycle(n);
}

int main()
{
    int n = 20;
    Cycle(n);
    std::cout << "\n";

    bool a = true;
    Сondition(n, a);
    std::cout << "\n";

    bool b = false;
    Сondition(n, b);
}
