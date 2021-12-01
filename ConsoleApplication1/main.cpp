#include <stdio.h>
#include <math.h>
#include <time.h>

int arr[4];
int len_arr = 4;
int c = 0;



void bubblesort(){
	bool t = true;
	int sz = 0;
	int counter = 0;
	int counter_2 = 0;
	while(t){
		t = false;
		for(int i=sz; i < ::len_arr-1; i++){
			if (arr[i] < ::arr[i+1]){
				int b = ::arr[i+1];
				::arr[i+1] = ::arr[i];
				::arr[i] = b;
				t = true;
				
			}
			counter +=1;
		}
		counter_2++;
		
	}
	printf("\n\n%d\n%d\n\n", counter, counter_2);
}


void selectionsort(){
	int counter = 0;
	int counter_2 = 0;
	for(int i = 0; i < ::len_arr-1; i++){
		int minel = i;
		for(int j = i; j < ::len_arr; j++){
			if (::arr[j] < ::arr[minel]){
				minel = j;
			}
			counter ++;
		}
		counter_2 ++;
		int t = ::arr[i];
		::arr[i] = ::arr[minel];
		::arr[minel] = t;
		
	}
	printf("\n\n%d\n", counter);
	printf("%d\n\n", counter_2);
	
}

void insertionSort()
{
  int counter = 0;
  int key = 0;
  int i = 0;
  int counter_2 = 0;
  for(int j = 1;j<::len_arr;j++){
    key = ::arr[j];
    i = j-1;
    while(i>=0 && ::arr[i]>key){
      ::arr[i+1] = ::arr[i];
      i = i-1;
      ::arr[i+1]=key;
      counter ++;
    }
    counter_2++;
    
  }
  printf("\n\n%d\n%d\N\n", counter, counter_2);
}


void quickSort(int* data, int const len)
{
  int const lenD = len;
  int pivot = 0;
  int ind = lenD/2;
  int i,j = 0,k = 0;
  if(lenD>1){
    int* L = new int[lenD];
    int* R = new int[lenD];
    pivot = data[ind];
    for(i=0;i<lenD;i++){
      if(i!=ind){
        if(data[i]<pivot){
          L[j] = data[i];
          j++;
        }
        else{
          R[k] = data[i];
          k++;
        }
      }
    }
    quickSort(L,j);
    quickSort(R,k);
    for(int cnt=0;cnt<lenD;cnt++){
      if(cnt<j){
        data[cnt] = L[cnt];;
      }
      else if(cnt==j){
        data[cnt] = pivot;
      }
      else{
        data[cnt] = R[cnt-(j+1)];
      }
    ::c++;
    }
  }
}

void gnomeSort(){
    int i = 1;
    int j = 2;
    int c = 0;
    while(i < ::len_arr){
        if (::arr[i - 1] > ::arr[i]){ //для сортировки по возрастанию поменяйте знак сравнения на <
            i = j;
            j = j + 1;
    	}
        else{
        	int c = ::arr[i-1];
        	::arr[i-1] = ::arr[i];
        	::arr[i] = c;
            i = i - 1;
            if(i == 0){
                i = j;
                j = j + 1;
        	}
        }
        c+=1;
	}
	printf("%d", c);
}







main(){
	srand(time(NULL));	
	for(int i = 0; i < ::len_arr; i++){
		::arr[i] = rand();
	}
	
	//с учетом того, что вывод тратит целую кучу времени выполнения, было бы неплохо, избавиться от него. 
	//но нам ведь нужно учитывать и то, сколько итераций циклов пройдет...
	//фактически, мы будем делать то, что обычно вычисляется формулами.
	//quickSort(::arr, ::len_arr);
	
	//quickSort(::arr, ::len_arr);
	
	
	insertionSort();
	
	//printf("%d", ::c);
	
	/*
	for(int i = 0; i < ::len_arr; i++){
		printf("%4d", ::arr[i]);
	}
	*/
	
	
	
	
	
}