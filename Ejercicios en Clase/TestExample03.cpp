#include "catch_amalgamated.cpp"

#include <iostream>
#include <cstdlib>

using namespace std;

int numero;

VOID ExampleCout()
{
  cout << "hola mati";
  cin >> numero;
  cout << numero << endl;
}

TEST_CASE("Cout example", "[when run outputs hola mati in the console]")
{
  stringstream buffer;
  streambuf *prevcoutbuf = cout.rdbuf(buffer.rdbuf());
  ExampleCout();
  string text = buffer.str();

  REQUIRE(text == "hola mati");
  // Redirect cin input to a stringstream
  istringstream input("5");
  streambuf *prevCinBuf = cin.rdbuf(input.rdbuf());

  // Read from cin
  int numero;
  cin >> numero;
  REQUIRE(numero == 5);

  // Restore cin and cout stream buffers
  cin.rdbuf(prevCinBuf);
  cout.rdbuf(prevcoutbuf);
}
