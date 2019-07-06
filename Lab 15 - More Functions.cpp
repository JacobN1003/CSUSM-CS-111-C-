#include <iostream>
using namespace std;

  void treeTop();
  void treeTrunk(int height);
  void drawTrees(int height, int numtrees);

  int main()
  {
    int height = 0;
    int numtrees = 0;
    char answer;

    do
      {
      	cout << "enter tree height: " << endl;
	cin >> height;

	cout << "enter number of tees: " << endl;
	cin >> numtrees;
	drawTrees(height, numtrees);
	
	cout << "would you like to draw more?" << endl;
	cin >> answer;
      } while((answer == 'Y' || answer == 'y'));

        

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
    static int trees = 0;
    for(int x=0;x<numtrees;x++)
      {
	treeTop();
	treeTrunk(height);	
	trees++;
      }
    cout << "You have drawn " << trees << " so far." << endl;
  }
