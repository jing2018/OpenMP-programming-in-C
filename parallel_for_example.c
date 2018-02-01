#include <stdio.h>
#include <omp.h>

int main(){

int index;
#pragma omp parallel for
  for (index=0; index<10; index++){
    printf("Hello world. I am %d of %d\n",omp_get_thread_num(),omp_get_num_threads());
  }

	return 0;
}
