open_project vhls_prj
set_top loadable_counter_wrapper
add_files ../src/loadable_counter.h
add_file ../src/loadable_counter_wrapper.h
add_file ../src/loadable_counter_wrapper.cpp
add_files -tb ../src/getCPUTime.cpp
add_files -tb ../src/tb_loadable_counter.cpp
open_solution "solution1"
set_part {xcku040-ffva1156-2-e}
create_clock -period 5 -name default
source "../src/directives.tcl"
csim_design -ldflags {-lm -lrt}
csynth_design
#cosim_design -ldflags {-lm -lrt}
#export_design -format ip_catalog
exit
