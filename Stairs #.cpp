#include <iostream>
using namespace std;

void buildStairs(int x);

int main ()
{
   int i;
   cout << "Please Enter the number of stairs: ";
   cin >> i;
   cout << "The value you entered is " << i;
   buildStairs(i);
   return 0;

}

void buildStairs(int i)  {

int c,s;
int check = i;
int counter = 0;
while (i>0){
      cout << endl;
      for (c=i-1; c>0; c--){       //loop for spaces and counter of stairs
        cout << " ";
        counter = counter+1;          //counts number of spaces
      }
    //cout << counter << endl;

    for (int s=0;s<(check-counter); s++)    //loop to print out the correct number of stairs
      {                            //check - counter give number of # for each loop cicle
      cout << "#";              //print #
      }
      counter = 0;                //reset counter for each change for inside while
      i--;                        // controls the while loop and when it should end
    //cout << endl;
  }
}
