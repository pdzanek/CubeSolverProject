#include <iostream>
#include <thread>
#include "cam.hpp"
#include "vision.hpp"

int main()
{
	//kamera
	std::thread camThread(&camOpen);
	camThread.join();
	/*char stanKostki[6][9];
	if (getchar() == 1) //warunek jaki�
	{
		for (int i = 0; i < 6; i++)
		{
			do {

				stanKostki[i] = vision(); //musi by� odpalone 6 razy. char vision[9]
				std::cout << "Czy stan kostki si� zgadza?" << endl;
				std::cin >> takNie;
			} while (takNie == 1 czy jaki� inny true);
		}
	}
	CubeSolver(stanKostki);
	*/
	return 0;
}