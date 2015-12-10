#ifndef LOADABLE_COUNTER_H
#define LOADABLE_COUNTER_H

#include <stdio.h>
#include "ap_fixed.h"


template<typename counter_data_type> 
class loadable_counter_engine {

private:

        counter_data_type i_count;

public :
    loadable_counter_engine(void){};
    void loadable_counter (counter_data_type incr_val_in, counter_data_type &count_val_out, bool load_in, bool reset_in) {


        if ( reset_in) {
            i_count = 0;
        } else if (load_in) {
            i_count = incr_val_in;
        } else {
            i_count = i_count + (counter_data_type)1;
        }

        count_val_out = i_count;


    }


};

#endif //LOADABLE_COUNTER_H
