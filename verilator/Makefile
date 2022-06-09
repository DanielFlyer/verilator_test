tb:tb_vlg.v
	verilator -O3 -cc --top-module tb tb_vlg.v

sim:./tb_cpp/tb.cpp
	g++ -I obj_dir -I/usr/share/verilator/include -Lobj_dir ./tb_cpp/tb.cpp ./obj_dir/Vtb.cpp ./obj_dir/Vtb__Syms.cpp /usr/share/verilator/include/verilated.cpp -o tb
