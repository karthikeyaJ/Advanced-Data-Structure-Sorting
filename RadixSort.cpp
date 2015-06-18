
#include<iostream>
#include "RadixSort.h"
#include "vector.h"

void RadixSort::sort(std::vector<std::string> & data)
{
	const int radix = 26;
	int count = 0;
	vector<std::string> cvector[radix];

	for (int i = 0; i < data.size(); ++i)
	{

		switch (data[i].at(0))
		{
		case 'a':
			cvector[0].push_back(data[i]);
			break;
		case 'b':
			cvector[1].push_back(data[i]);
			break;
		case 'c':
			cvector[2].push_back(data[i]);
			break;
		case 'd':
			cvector[3].push_back(data[i]);
			break;
		case 'e':
			cvector[4].push_back(data[i]);
			break;
		case 'f':
			cvector[5].push_back(data[i]);
			break;
		case 'g':
			cvector[6].push_back(data[i]);
			break;
		case 'h':
			cvector[7].push_back(data[i]);
			break;
		case 'i':
			cvector[8].push_back(data[i]);
			break;
		case 'j':
			cvector[9].push_back(data[i]);
			break;
		case 'k':
			cvector[10].push_back(data[i]);
			break;
		case 'l':
			cvector[11].push_back(data[i]);
			break;
		case 'm':
			cvector[12].push_back(data[i]);
			break;
		case 'n':
			cvector[13].push_back(data[i]);
			break;
		case 'o':
			cvector[14].push_back(data[i]);
			break;
		case 'p':
			cvector[15].push_back(data[i]);
			break;
		case 'q':
			cvector[16].push_back(data[i]);
			break;
		case 'r':
			cvector[17].push_back(data[i]);
			break;
		case 's':
			cvector[18].push_back(data[i]);
			break;
		case 't':
			cvector[19].push_back(data[i]);
			break;
		case 'u':
			cvector[20].push_back(data[i]);
			break;
		case 'v':
			cvector[21].push_back(data[i]);
			break;
		case 'w':
			cvector[22].push_back(data[i]);
			break;
		case 'x':
			cvector[23].push_back(data[i]);
			break;
		case 'y':
			cvector[24].push_back(data[i]);
			break;
		case 'z':
			cvector[25].push_back(data[i]);
			break;

		}


	}

	/*for (int z = 0; z < cvector[1].size(); ++z)
	std::cout << cvector[1].get(z)<<std::endl;*/


	for (int j = 0; j < radix; ++j){
		if ((cvector[j].size() != 0))
			sorted(cvector[j], count);
	}

	//for (int i = 0; i < 47; ++i){
	//	//std::cout << evector[i].get(0) << std::endl;
	//}
	//std::cout << "finished" << std::endl;

	data.clear();
	//std::cout << evector->size();
	//for (int c = 0; c < evector->size(); ++c)
	for (int c = 0; c < evecSize; ++c)
	{
		data.push_back(evector[c].get(0));
		//std::cout << evecSize;
	}
	/*for (int c = 0; c < data.size(); ++c)
	{
	std::cout <<data[c].at(0);
	}*/

}


void RadixSort::sorted(vector<std::string> & k, int counting)
{

	const int radix = 26;
	counting++;
	//vector<std::string> dvector[radix];
	vector<std::string> dvector[radix];

	/*for (int i = 0; i < k.size(); ++i)
	std::cout << k.get(i) << std::endl;
	std::cout << "finished" << std::endl;*/

	for (int i = 0; i < k.size(); ++i)
	{
		if (k.get(i).size()>counting){                          //.front().size() > count){


			switch (k.get(i).at(counting))
			{
			case 'a':
				dvector[0].push_back(k.get(i));
				break;
			case 'b':
				dvector[1].push_back(k.get(i));
				break;
			case 'c':
				dvector[2].push_back(k.get(i));
				break;
			case 'd':
				dvector[3].push_back(k.get(i));
				break;
			case 'e':
				dvector[4].push_back(k.get(i));
				break;
			case 'f':
				dvector[5].push_back(k.get(i));
				break;
			case 'g':
				dvector[6].push_back(k.get(i));
				break;
			case 'h':
				dvector[7].push_back(k.get(i));
				break;
			case 'i':
				dvector[8].push_back(k.get(i));
				break;
			case 'j':
				dvector[9].push_back(k.get(i));
				break;
			case 'k':
				dvector[10].push_back(k.get(i));
				break;
			case 'l':
				dvector[11].push_back(k.get(i));
				break;
			case 'm':
				dvector[12].push_back(k.get(i));
				break;
			case 'n':
				dvector[13].push_back(k.get(i));
				break;
			case 'o':
				dvector[14].push_back(k.get(i));
				break;
			case 'p':
				dvector[15].push_back(k.get(i));
				break;
			case 'q':
				dvector[16].push_back(k.get(i));
				break;
			case 'r':
				dvector[17].push_back(k.get(i));
				break;
			case 's':
				dvector[18].push_back(k.get(i));
				break;
			case 't':
				dvector[19].push_back(k.get(i));
				break;
			case 'u':
				dvector[20].push_back(k.get(i));
				break;
			case 'v':
				dvector[21].push_back(k.get(i));
				break;
			case 'w':
				dvector[22].push_back(k.get(i));
				break;
			case 'x':
				dvector[23].push_back(k.get(i));
				break;
			case 'y':
				dvector[24].push_back(k.get(i));
				break;
			case 'z':
				dvector[25].push_back(k.get(i));
				break;

			}
		}
		else{
			evector[evecSize].push_back(k.get(i));
			evecSize++;
		}
		//else{
		//	for (int i = 0; i < k.size(); ++i)
		//	{
		//		if (k.get(i).size() < counting && dvector[i].get(0).size() != NULL)
		//		{
		//			//std::cout << dvector[i].get(0) << std::endl;
		//			evector[evecSize].push_back(dvector[i].get(0));
		//			evecSize++;
		//		}
		//	}
		//}
	}





	//std::cout << "finished" << std::endl;


	/*for (int i = 0; i < 25; ++i)
	std::cout << evector[i].get(0) << std::endl;
	std::cout << "finished" << std::endl;*/

	for (int j = 0; j < radix; ++j)
	{
		if (dvector[j].size() > 0)
		{
			sorted(dvector[j], counting);
			/*counting++;
			sorted(dvector[j], counting);*/

		}

	}

	return;
}


























//#include<iostream>
//#include "RadixSort.h"
//#include "vector.h"
//
//void RadixSort::sort(std::vector<std::string> & data)
//{
//	const int radix = 26;
//	count++;
//	//std::vector<std::string> cvector[radix];
//
//	/*if (fvector->size() == 0)
//	{
//		for (int h = 0; h < data.size(); ++h)
//			fvector[h].push_back(data[h]);
//	}*/
//
//
//
//	if (count == 0)
//	{
//
//		for (int i = 0; i < data.size(); ++i)
//		{
//			switch (data[i].at(count))
//			{
//			case 'a':
//				cvector[0].push_back(data[i]);
//				break;
//			case 'b':
//				cvector[1].push_back(data[i]);
//				break;
//			case 'c':
//				cvector[2].push_back(data[i]);
//				break;
//			case 'd':
//				cvector[3].push_back(data[i]);
//				break;
//			case 'e':
//				cvector[4].push_back(data[i]);
//				break;
//			case 'f':
//				cvector[5].push_back(data[i]);
//				break;
//			case 'g':
//				cvector[6].push_back(data[i]);
//				break;
//			case 'h':
//				cvector[7].push_back(data[i]);
//				break;
//			case 'i':
//				cvector[8].push_back(data[i]);
//				break;
//			case 'j':
//				cvector[9].push_back(data[i]);
//				break;
//			case 'k':
//				cvector[10].push_back(data[i]);
//				break;
//			case 'l':
//				cvector[11].push_back(data[i]);
//				break;
//			case 'm':
//				cvector[12].push_back(data[i]);
//				break;
//			case 'n':
//				cvector[13].push_back(data[i]);
//				break;
//			case 'o':
//				cvector[14].push_back(data[i]);
//				break;
//			case 'p':
//				cvector[15].push_back(data[i]);
//				break;
//			case 'q':
//				cvector[16].push_back(data[i]);
//				break;
//			case 'r':
//				cvector[17].push_back(data[i]);
//				break;
//			case 's':
//				cvector[18].push_back(data[i]);
//				break;
//			case 't':
//				cvector[19].push_back(data[i]);
//				break;
//			case 'u':
//				cvector[20].push_back(data[i]);
//				break;
//			case 'v':
//				cvector[21].push_back(data[i]);
//				break;
//			case 'w':
//				cvector[22].push_back(data[i]);
//				break;
//			case 'x':
//				cvector[23].push_back(data[i]);
//				break;
//			case 'y':
//				cvector[24].push_back(data[i]);
//				break;
//			case 'z':
//				cvector[25].push_back(data[i]);
//				break;
//
//			}
//		}
//
//
//		for (int j = 0; j < radix; ++j){
//			if ((cvector[j].size() != 0))
//			{
//
//				kaja++;
//				sort(cvector[j]);
//			}
//			else
//				kaja++;
//		}
//
//
//	}
//
//	else
//	{
//		for (int i = 0; i < data.size(); ++i)
//		{
//
//			if (data[i].size() > count)
//			{
//
//
//				switch (data[i].at(count))
//				{
//				case 'a':
//					dvector[0].push_back(data[i]);
//					break;
//				case 'b':
//					dvector[1].push_back(data[i]);
//					break;
//				case 'c':
//					dvector[2].push_back(data[i]);
//					break;
//				case 'd':
//					dvector[3].push_back(data[i]);
//					break;
//				case 'e':
//					dvector[4].push_back(data[i]);
//					break;
//				case 'f':
//					dvector[5].push_back(data[i]);
//					break;
//				case 'g':
//					dvector[6].push_back(data[i]);
//					break;
//				case 'h':
//					dvector[7].push_back(data[i]);
//					break;
//				case 'i':
//					dvector[8].push_back(data[i]);
//					break;
//				case 'j':
//					dvector[9].push_back(data[i]);
//					break;
//				case 'k':
//					dvector[10].push_back(data[i]);
//					break;
//				case 'l':
//					dvector[11].push_back(data[i]);
//					break;
//				case 'm':
//					dvector[12].push_back(data[i]);
//					break;
//				case 'n':
//					dvector[13].push_back(data[i]);
//					break;
//				case 'o':
//					dvector[14].push_back(data[i]);
//					break;
//				case 'p':
//					dvector[15].push_back(data[i]);
//					break;
//				case 'q':
//					dvector[16].push_back(data[i]);
//					break;
//				case 'r':
//					dvector[17].push_back(data[i]);
//					break;
//				case 's':
//					dvector[18].push_back(data[i]);
//					break;
//				case 't':
//					dvector[19].push_back(data[i]);
//					break;
//				case 'u':
//					dvector[20].push_back(data[i]);
//					break;
//				case 'v':
//					dvector[21].push_back(data[i]);
//					break;
//				case 'w':
//					dvector[22].push_back(data[i]);
//					break;
//				case 'x':
//					dvector[23].push_back(data[i]);
//					break;
//				case 'y':
//					dvector[24].push_back(data[i]);
//					break;
//				case 'z':
//					dvector[25].push_back(data[i]);
//					break;
//				}
//			}
//
//			else{
//				evector[evecSize].push_back(data[i]);
//				evecSize++;
//				jl++;
//			}
//
//		}
//
//		int s = jl;
// 		for (s; s < radix;s++)
//		{
//			if (dvector[jl].size() == 0)
//				jl++;
//			else
//			{
//				
//				if(dvector[s].size() > 0)
//				sort(dvector[s]);
//
//			}
//
//
//		}
//
//		//for (int kk = 0; kk < radix; kk++)
//		//	std::cout << evector[kk].at(0)<<std::endl;          //evector[kk] << std::endl;
//
//
//		int hi = kaja;
//		for (hi ; hi < radix; hi++){
//			if (hi == 26)
//				break;
//			if ((cvector[hi].size() != 0)){
//				kaja++;
//				sort(cvector[hi]);
//			}
//		}
//
//
//		std::cout << "hi";
//
//
//
//		data.clear();
//		//std::cout << evector->size();
//
//		for (int c = 0; c < evecSize; ++c)
//		{
//			data.push_back(evector[c].at(0));
//
//		}
//		return;
//}
//}
////
////void RadixSort::sorted(vector<std::string> & k, int counting)
////{
////
////	const int radix = 26;
////	counting++;
////
////	vector<std::string> dvector[radix];
////
////	
////	for (int i = 0; i < k.size(); ++i)
////	{
////		if (k.get(i).size()>counting){                          //.front().size() > count){
////
////
////			switch (k.get(i).at(counting))
////			{
////			case 'a':
////				dvector[0].push_back(k.get(i));
////				break;
////			case 'b':
////				dvector[1].push_back(k.get(i));
////				break;
////			case 'c':
////				dvector[2].push_back(k.get(i));
////				break;
////			case 'd':
////				dvector[3].push_back(k.get(i));
////				break;
////			case 'e':
////				dvector[4].push_back(k.get(i));
////				break;
////			case 'f':
////				dvector[5].push_back(k.get(i));
////				break;
////			case 'g':
////				dvector[6].push_back(k.get(i));
////				break;
////			case 'h':
////				dvector[7].push_back(k.get(i));
////				break;
////			case 'i':
////				dvector[8].push_back(k.get(i));
////				break;
////			case 'j':
////				dvector[9].push_back(k.get(i));
////				break;
////			case 'k':
////				dvector[10].push_back(k.get(i));
////				break;
////			case 'l':
////				dvector[11].push_back(k.get(i));
////				break;
////			case 'm':
////				dvector[12].push_back(k.get(i));
////				break;
////			case 'n':
////				dvector[13].push_back(k.get(i));
////				break;
////			case 'o':
////				dvector[14].push_back(k.get(i));
////				break;
////			case 'p':
////				dvector[15].push_back(k.get(i));
////				break;
////			case 'q':
////				dvector[16].push_back(k.get(i));
////				break;
////			case 'r':
////				dvector[17].push_back(k.get(i));
////				break;
////			case 's':
////				dvector[18].push_back(k.get(i));
////				break;
////			case 't':
////				dvector[19].push_back(k.get(i));
////				break;
////			case 'u':
////				dvector[20].push_back(k.get(i));
////				break;
////			case 'v':
////				dvector[21].push_back(k.get(i));
////				break;
////			case 'w':
////				dvector[22].push_back(k.get(i));
////				break;
////			case 'x':
////				dvector[23].push_back(k.get(i));
////				break;
////			case 'y':
////				dvector[24].push_back(k.get(i));
////				break;
////			case 'z':
////				dvector[25].push_back(k.get(i));
////				break;
////
////			}
////		}
////		else{
////			evector[evecSize].push_back(k.get(i));
////			evecSize++;
////		}
////
////	}
////
////	for (int j = 0; j < radix; ++j)
////	{
////		if (dvector[j].size() > 0)
////		{
////			sorted(dvector[j], counting);
////
////		}
////
////	}
////
////	return;
////}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////#include<iostream>
////#include "RadixSort.h"
////#include "vector.h"
////
////void RadixSort::sort(std::vector<std::string> & data)
////{
////	const int radix = 26;
////	int count = 0;
////	vector<std::string> cvector[radix];
////
////
////
////
////	for (int i = 0; i < data.size(); ++i)
////	{
////
////		switch (data[i].at(0))
////		{
////		case 'a':
////			cvector[0].push_back(data[i]);
////			break;
////		case 'b':
////			cvector[1].push_back(data[i]);
////			break;
////		case 'c':
////			cvector[2].push_back(data[i]);
////			break;
////		case 'd':
////			cvector[3].push_back(data[i]);
////			break;
////		case 'e':
////			cvector[4].push_back(data[i]);
////			break;
////		case 'f':
////			cvector[5].push_back(data[i]);
////			break;
////		case 'g':
////			cvector[6].push_back(data[i]);
////			break;
////		case 'h':
////			cvector[7].push_back(data[i]);
////			break;
////		case 'i':
////			cvector[8].push_back(data[i]);
////			break;
////		case 'j':
////			cvector[9].push_back(data[i]);
////			break;
////		case 'k':
////			cvector[10].push_back(data[i]);
////			break;
////		case 'l':
////			cvector[11].push_back(data[i]);
////			break;
////		case 'm':
////			cvector[12].push_back(data[i]);
////			break;
////		case 'n':
////			cvector[13].push_back(data[i]);
////			break;
////		case 'o':
////			cvector[14].push_back(data[i]);
////			break;
////		case 'p':
////			cvector[15].push_back(data[i]);
////			break;
////		case 'q':
////			cvector[16].push_back(data[i]);
////			break;
////		case 'r':
////			cvector[17].push_back(data[i]);
////			break;
////		case 's':
////			cvector[18].push_back(data[i]);
////			break;
////		case 't':
////			cvector[19].push_back(data[i]);
////			break;
////		case 'u':
////			cvector[20].push_back(data[i]);
////			break;
////		case 'v':
////			cvector[21].push_back(data[i]);
////			break;
////		case 'w':
////			cvector[22].push_back(data[i]);
////			break;
////		case 'x':
////			cvector[23].push_back(data[i]);
////			break;
////		case 'y':
////			cvector[24].push_back(data[i]);
////			break;
////		case 'z':
////			cvector[25].push_back(data[i]);
////			break;
////
////		}
////
////
////	}
////
////	/*for (int z = 0; z < cvector[1].size(); ++z)
////	std::cout << cvector[1].get(z)<<std::endl;*/
////
////
////	for (int j = 0; j < radix; ++j){
////		if ((cvector[j].size() != 0))
////			sorted(cvector[j], count);
////	}
////
////	//for (int i = 0; i < 47; ++i){
////	//	//std::cout << evector[i].get(0) << std::endl;
////	//}
////	//std::cout << "finished" << std::endl;
////
////	data.clear();
////	std::cout << evector->size();
////	//for (int c = 0; c < evector->size(); ++c)
////	for (int c = 0; c < evecSize; ++c)
////	{
////		data.push_back(evector[c].get(0));
////		//std::cout << evecSize;
////	}
////	/*for (int c = 0; c < data.size(); ++c)
////	{
////	std::cout <<data[c].at(0);
////	}*/
////
////}
////
////
////void RadixSort::sorted(vector<std::string> & k, int counting)
////{
////
////	const int radix = 26;
////	counting++;
////	//vector<std::string> dvector[radix];
////	vector<std::string> dvector[radix];
////
////	for (int h = 0; h < k.size(); ++h)
////		fvector[0].push_back(k.get(0));
////
////	/*for (int i = 0; i < k.size(); ++i)
////	std::cout << k.get(i) << std::endl;
////	std::cout << "finished" << std::endl;*/
////
////	for (int i = 0; i < k.size(); ++i)
////	{
////		if (k.get(i).size()>counting){                          //.front().size() > count){
////
////
////			switch (k.get(i).at(counting))
////			{
////			case 'a':
////				dvector[0].push_back(k.get(i));
////				break;
////			case 'b':
////				dvector[1].push_back(k.get(i));
////				break;
////			case 'c':
////				dvector[2].push_back(k.get(i));
////				break;
////			case 'd':
////				dvector[3].push_back(k.get(i));
////				break;
////			case 'e':
////				dvector[4].push_back(k.get(i));
////				break;
////			case 'f':
////				dvector[5].push_back(k.get(i));
////				break;
////			case 'g':
////				dvector[6].push_back(k.get(i));
////				break;
////			case 'h':
////				dvector[7].push_back(k.get(i));
////				break;
////			case 'i':
////				dvector[8].push_back(k.get(i));
////				break;
////			case 'j':
////				dvector[9].push_back(k.get(i));
////				break;
////			case 'k':
////				dvector[10].push_back(k.get(i));
////				break;
////			case 'l':
////				dvector[11].push_back(k.get(i));
////				break;
////			case 'm':
////				dvector[12].push_back(k.get(i));
////				break;
////			case 'n':
////				dvector[13].push_back(k.get(i));
////				break;
////			case 'o':
////				dvector[14].push_back(k.get(i));
////				break;
////			case 'p':
////				dvector[15].push_back(k.get(i));
////				break;
////			case 'q':
////				dvector[16].push_back(k.get(i));
////				break;
////			case 'r':
////				dvector[17].push_back(k.get(i));
////				break;
////			case 's':
////				dvector[18].push_back(k.get(i));
////				break;
////			case 't':
////				dvector[19].push_back(k.get(i));
////				break;
////			case 'u':
////				dvector[20].push_back(k.get(i));
////				break;
////			case 'v':
////				dvector[21].push_back(k.get(i));
////				break;
////			case 'w':
////				dvector[22].push_back(k.get(i));
////				break;
////			case 'x':
////				dvector[23].push_back(k.get(i));
////				break;
////			case 'y':
////				dvector[24].push_back(k.get(i));
////				break;
////			case 'z':
////				dvector[25].push_back(k.get(i));
////				break;
////
////			}
////		}
////		else{
////			evector[evecSize].push_back(k.get(i));
////			evecSize++;
////		}
////		//else{
////		//	for (int i = 0; i < k.size(); ++i)
////		//	{
////		//		if (k.get(i).size() < counting && dvector[i].get(0).size() != NULL)
////		//		{
////		//			//std::cout << dvector[i].get(0) << std::endl;
////		//			evector[evecSize].push_back(dvector[i].get(0));
////		//			evecSize++;
////		//		}
////		//	}
////		//}
////	}
////
////
////
////
////
////	//std::cout << "finished" << std::endl;
////
////
////	/*for (int i = 0; i < 25; ++i)
////	std::cout << evector[i].get(0) << std::endl;
////	std::cout << "finished" << std::endl;*/
////
////	for (int j = 0; j < radix; ++j)
////	{
////		if (dvector[j].size() > 0)
////		{
////			sorted(dvector[j], counting);
////			
////		}
////
////	}
////
////	return;
////}
////
////
