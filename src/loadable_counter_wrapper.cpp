#include "loadable_counter.h"
#include "loadable_counter_wrapper.h"

void loadable_counter_wrapper ( loadable_counter_data_t incr_val_in_1, loadable_counter_data_t incr_val_in_2, loadable_counter_data_t &count_val_out, bool load_in, bool reset_in){

    loadable_counter_data_t i_incr_val_in_1;
    loadable_counter_data_t i_incr_val_in_2;
    loadable_counter_data_t o_count_val_out_1;
    loadable_counter_data_t o_count_val_out_2;
    bool i_load_in;
    bool i_reset_in;

    i_load_in = load_in;
    i_reset_in = reset_in;
    i_incr_val_in_1 = incr_val_in_1;
    i_incr_val_in_2 = incr_val_in_2;

    static loadable_counter_engine<loadable_counter_data_t> my_loadable_counter_1;
    static loadable_counter_engine<loadable_counter_data_t> my_loadable_counter_2;

    my_loadable_counter_1.loadable_counter(i_incr_val_in_1, o_count_val_out_1, i_load_in, i_reset_in);
    my_loadable_counter_2.loadable_counter(i_incr_val_in_2, o_count_val_out_2, i_load_in, i_reset_in);

    count_val_out = o_count_val_out_1 + o_count_val_out_2;


}

