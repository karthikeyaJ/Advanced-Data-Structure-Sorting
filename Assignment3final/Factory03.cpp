#include "Factory03.h"
#include "DoubleList03.h"
#include "LinkedListSort.h"
#include "HeapSort.h"
#include "KthMin.h"
#include "RadixSort.h"
#include "RecordsSearch.h"
#include "SmoothSort.h"
#include "VectorDoubleSort.h"
#include "RunningMedian.h"
#include "SingleNode03.h"
#include "MergeSort.h"
#include "CircularList.h"


Factory03::Factory03()
{
}

Factory03::~Factory03()
{
}
 
void * Factory03::create(std::string name)
{
  if(name == "IVectorDoubleSort1"){
	  return new VectorDoubleSort();
  } else if(name == "IVectorDoubleSort2"){
    return new VectorDoubleSort();
  } else if(name == "ISmoothSort"){
    return NULL;
  } else if(name == "IRunningMedian"){
    return new RunningMedian();
  } else if(name == "IRecordsSearch"){
    return new RecordsSearch();
  } else if(name == "IHeapSort"){
    return new HeapSort();
  } else if(name == "ISingleNode03"){
    return new SingleNode03();
  } else if(name == "ICircularList"){
    return new CircularList();
  } else if(name == "IMergeSort"){
    return new MergeSort();
  } else if(name == "IRadixSort"){
    return new RadixSort();
  } else if(name == "IKthMin"){
	  return new KthMin();
  }
  else if (name == "IDoubleList03"){
	  return new DoubleList03();
  }
  else if (name == "ILinkedListSort"){
	  return new LinkedListSort();
  }
  else {
    return NULL;
  }
}

extern "C" {

ObjectFactory * createObjectFactory(){
  return new Factory03();  
}

}
