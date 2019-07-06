#include <iostream>
using namespace std;

void treeTop();
void treeTrunk(int height);
void drawTrees(int height, int numtrees);

int main()
{
  int height = 0;
  int numtrees = 0;
  

  cout << "enter tree height: " << endl;
  cin >> height;

  cout << "enter number of tees: " << endl;
  cin >> numtrees;
  drawTrees(height, numtrees);
  return 0;
}

void treeTop()
{
  cout << "    ^     " << endl;
  cout << "   / \\   " << endl;
  cout << "  /   \\  " << endl;
  cout << " /     \\ " << endl;
  cout << "/_______\\" << endl;

  return;
}
void treeTrunk(int height)
{
  for(int i=0;i<height; i++)    
cout << "    ||" << endl;
  return;
}
void drawTrees(int height, int numtrees)
{
  for(int x=0;x<numtrees;x++)  
    {    
treeTop();
  treeTrunk(height); 
    }
  return;
}
