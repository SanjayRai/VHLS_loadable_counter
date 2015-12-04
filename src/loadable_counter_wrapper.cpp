#include "loadable_counter.h"
#include "loadable_counter_wrapper.h"

void loadable_counter_wrapper ( loadable_counter_data_t incr_val_in, loadable_counter_data_t &count_val_out, bool load_in, bool reset_in){

    static loadable_counter_engine<loadable_counter_data_t> my_loadable_counter;

    my_loadable_counter.loadable_counter(incr_val_in, count_val_out, load_in, reset_in);
}

