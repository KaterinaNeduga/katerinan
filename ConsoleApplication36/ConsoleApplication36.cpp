﻿#include "pch.h"
#include <iostream>
#include "windows.h"
#include "time.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int A[11], B[11],i;

	srand(time(NULL));


	for (i = 0; i < 11; i++)
		cin >> A[i];
	



	int end = 0, nullElements = 0;
	

		for (int i = 0; i < 11; i++) {
			if ((A[i] < 0) && (i % 2 == 0))
			{
				B[end] = A[i];
				end++;
			}
			else if (A[i] == 0)
			
				nullElements++;

		}

		cout << "Кількість нульових елементів: " << nullElements << endl;
		cout << "Масив з негативних елементів з парними індексами: " << endl;

		for (int i = 0; i < end; i++)
		
			cout << B[i] << " ";

			cout << endl;

			system("pause");
			return 0;
		
	}
