
#include<iostream>
#include "RunningMedian.h"
#include "vector.h"

std::vector<int> RunningMedian::compute(std::vector<int> vec, int window_size)
{

	vector<int> res;
	vector<int> res2;
	std::vector<int> vector;

	int winSize = window_size;
	int winTest = 0;
	



		res.push_back(vec[0]); 
		vector.push_back(vec[0]);

		res2.push_back(vec[0]);
		//[i] = vec[i];
		for (int i = 1; i < vec.size(); i++)
		{
			if (res.size()>=1 && i<winSize)
			{
				res.push_back(vec[i]);
				res2.push_back(vec[i]);


				sortingMedian(res2);


				//int arr[] = { 1, 2, 3, 4, 5, 6 };
				int findSize = res2.size();                                     //sizeof(arr) / sizeof(int);
				
				int index = findSize / 2;
				int median = -1;

				/*for (int i = 0; i < res.size(); i++)
				std::cout << res.get(i) << std::endl;

				for (int i = 0; i < res2.size(); i++)
					std::cout << res2.get(i) << std::endl;*/

				if ((findSize % 2) == 0)
					median = (res2.get(index) + res2.get(index - 1)) / 2;
				else
					median = res2.get(index); //arr[index];

				vector.push_back(median);
				
				

				//std::cout << res2.size() << std::endl;
				//std::cout << res.size() << std::endl;


				
				//
				

			}

			else                                                          //if (res.size() >= 1 && winSize > 10)
			{

				//std::cout << l << std::endl;
				if (l == 10)
					l = 0;

				int k = res.get(l);   // [l];
				
				/*std::cout<<"ppppppppppppp"<<std::endl;
				std::cout << "hi" << std::endl;

				for (int m = 0; m < res.size(); m++)
					std::cout << res.get(m) << std::endl;


				std::cout << "hiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii" << std::endl;

				for (int m = 0; m < res2.size(); m++)
					std::cout << res2.get(m) << std::endl;

				std::cout << "hiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii" << std::endl;
				for (int m = 0; m < vector.size(); m++)
					std::cout << vector[m] << std::endl;*/



				res.set(l, vec[i]);
				//std::cout << res.get(l);
			
				for(int j = 0; j < res2.size(); j++)
				{
					if (res2.get(j) == k)
					{
						res2.set(j,vec[i]);
						//std::cout << res2.get(j);
						//res2.get(j);
						sortingMedian(res2);
					
						int findSize = res2.size();                                     //sizeof(arr) / sizeof(int);
						int index = findSize / 2;
						int median = -1;

						/*for (int i = 0; i < res.size(); i++)
						std::cout << res.get(i) << std::endl;

						for (int i = 0; i < res2.size(); i++)
						std::cout << res2.get(i) << std::endl;*/

						if ((findSize % 2) == 0)
							median = (res2.get(index) + res2.get(index - 1)) / 2;
						else
							median = res2.get(index); //arr[index];

						vector.push_back(median);
						l++;
						break;
					}
   				 }
			}




		}

		/*for (int i = 0; i < 10; i++)
			std::cout << res.get(i) << std::endl;
		std::cout << "hiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii"<<std::endl;
		for (int i = 0; i < 10; i++)
			std::cout <<res2.get(i)<<std::endl ;
		std::cout << "hiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii" << std::endl;*/


		/*for (int i = 0; i < vector.size(); i++)
			std::cout << vector[i] << std::endl;;
		std::cout << vector.size() << std::endl;
		std::cout << vector[0] << std::endl;*/


		vec.clear();

		for (int ka = 0; ka < vector.size(); ka++)
			vec.push_back(vector[ka]);

		//std::cout << vec[0] << std::endl; 
		//std::cout << vec.size();
		//std::vector<int> k;
	return vec;
}

		


void RunningMedian::sortingMedian(vector<int> &vector)
{
	int vectorSize = vector.size();
	for (int i = vectorSize / 2 - 1; i >= 0; i--)
	{
		topDown(vector, i, vectorSize - 1);
	}

	int endIndex = vectorSize - 1;
	while (endIndex > 0){
		//exchange(vector[0], vector[endIndex]);
		
		int tempElement = vector.get(0);

		vector.set(0, vector.get(endIndex));

		vector.set(endIndex, tempElement);
				
		endIndex--;
		topDown(vector, 0, endIndex);
	}
	return;

}



void RunningMedian::topDown(vector<int>& vector, int i, int endIndex)
{

	int largest = 2 * i + 1;
	while (largest <= endIndex)
	{
		if (largest < endIndex && 	vector.get(largest)<vector.get(largest+1))                                  
			largest++;
		if (vector.get(i) < vector.get(largest))                                       
		{
			//exchange((vector.get(i)), (vector.get(largest)))  //     [largest]);
			
			int tempElement = vector.get(i);                        

			vector.set(i, vector.get(largest));
			
			vector.set(largest,tempElement);

			i = largest;
			largest = 2 * i + 1;
		}
		else largest = endIndex + 1;
	}
}


//void RunningMedian::exchange(int & firstElement, int & secondElement)
//{
//	int tempElement = firstElement;
//	firstElement = secondElement;
//	secondElement = tempElement;
//	return;
//}



