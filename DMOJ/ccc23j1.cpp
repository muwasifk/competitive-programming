#include <iostream> 
int main(){int p, c; std::cin >> p >> c; int score=p*50-10*c; if (p>c)score+=500; std::cout << score;}