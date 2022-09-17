#include <iostream>
using namespace std;

class Blah
{
  public:

    // Overloaded constructor
 explicit   Blah(int blah) //explicit is added
    {
      m_blah = blah;
    }

    int GetBlah()
    { 
      return m_blah;
    }

  private:
    int m_blah;
};

void Ext_Blah (Blah blah)
{
  int x = blah.GetBlah ();
  cout<<x<<endl;
}

int main() {
  // your code goes here
  Ext_Blah (Blah(3));
}
