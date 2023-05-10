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
    streambuf *prevcoutbuf = cout.rdbuf(buffer.rdbuf());
    ExampleCout();
    string text = buffer.str();

    REQUIRE(text == "hola mati");
}
