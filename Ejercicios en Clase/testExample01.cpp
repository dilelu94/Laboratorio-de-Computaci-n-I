#include "catch_amalgamated.cpp"

#include <iostream>
#include <cstdlib>

using namespace std;

VOID ExampleCout()
{
    cout << "hola mati";
}

TEST_CASE("Cout example", "[when run outputs hola mati in the console]")
{
    stringstream buffer;
    std::streambuf *prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());
    ExampleCout();
    std::string text = buffer.str();

    REQUIRE(text == "hola mati");
}
