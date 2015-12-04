/*C Program To Sort data in ascending order using bubble sort.*/
#include <stdio.h>
#include "loadable_counter_wrapper.h"
#include "loadable_counter.h"
#include "ap_fixed.h"
//
double getCPUTime();

int main()
{

  double startTime;
  double endTime;
  double ElapsedTime;

    loadable_counter_data_t incr_val_in;
    loadable_counter_data_t count_val_out;
    loadable_counter_data_t count_val_out_diap[1000];
    bool reset_in  = 1;
    bool load_in  = 0;


        //my_loadable_counterer.loadable_counter(data, out_data);
        startTime = getCPUTime();
        //-----------------------------------------------
        for(int i=0;i<400;i++) {
            if (i<10) {
                reset_in = 1;
            } else {
                reset_in = 0;
            }

            if (i == 25) {
                incr_val_in = 2121;
                load_in = 1;
            } else if (i == 210) {
                incr_val_in = 21;
                load_in = 1;
            } else if (i == 321) {
                incr_val_in = 321;
                load_in = 1;
            } else {
                load_in = 0;
            }
            loadable_counter_wrapper(incr_val_in, count_val_out, load_in, reset_in);
            count_val_out_diap[i] = count_val_out;
        }
        endTime = getCPUTime();
        printf("Results : \n");
        //-----------------------------------------------
        ElapsedTime = (endTime - startTime);
        for(int i=0;i<100;++i) {
             printf("%d :: %f \n",i, (float)count_val_out_diap[i]);
        }
            printf (" Elapsed Time for algorithm = %1f sec\n", ElapsedTime);
    return 0;
}

