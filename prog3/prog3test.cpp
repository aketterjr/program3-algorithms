#include <vector>
#include <ctime>		// keep this line if you want to generate different random objects for each run
#include <iostream>
#include "stuff3.h"

pair<bool, Stuff3> Decision1(vector<Stuff3>&);
pair<bool, Stuff3> Decision2(vector<Stuff3>&);

main()
{
   srand(time(0));		// keep this line if you want to generate different random objects for each run
   vector<Stuff3> vec;

   for (int i = 0; i < 10; i++)
	{
	   Stuff3 s;
	   vec.push_back(s);
	}

   for (int i = 0; i < 10; i++)
	{
	   cout << vec[i] << endl;
	}

   cout << "-----\n";

   cout << "Decision 1 : " << endl;
   pair<bool, Stuff3> r1 = Decision1(vec);
   if (r1.first)
	cout << " Solution: " << r1.second;
   else
	cout << " No solution: ";

   cout << "\n\nDecision 2 : " << endl;
   pair<bool, Stuff3> r2 = Decision2(vec);
   if (r2.first)
	cout << " Solution: " << r2.second;
   else
	cout << " No solution: ";
   cout << endl;


}
