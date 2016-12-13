# TCL File Generated by Component Editor 12.0
# Thu Mar 21 15:28:58 EDT 2013
# DO NOT MODIFY


# 
# MP_2ports "MP_2ports" v1.0
# null 2013.03.21.15:28:58
# 
# 

# 
# request TCL package from ACDS 12.0
# 
package require -exact qsys 12.0


# 
# module MP_2ports
# 
set_module_property NAME MP_2ports
set_module_property VERSION 1.0
set_module_property INTERNAL false
set_module_property OPAQUE_ADDRESS_MAP true
set_module_property DISPLAY_NAME MP_2ports
set_module_property INSTANTIATE_IN_SYSTEM_MODULE true
set_module_property EDITABLE true
set_module_property ANALYZE_HDL AUTO
set_module_property REPORT_TO_TALKBACK false
set_module_property ALLOW_GREYBOX_GENERATION false


# 
# file sets
# 
add_fileset QUARTUS_SYNTH QUARTUS_SYNTH "" ""
set_fileset_property QUARTUS_SYNTH TOP_LEVEL MP_2ports
set_fileset_property QUARTUS_SYNTH ENABLE_RELATIVE_INCLUDE_PATHS false
add_fileset_file MP_2ports.v VERILOG PATH /home/victor/University/legup/pcie/sim/multipump/MP_2ports.v


# 
# parameters
# 


# 
# display items
# 


# 
# connection point avalon_slave_0
# 
add_interface avalon_slave_0 avalon end
set_interface_property avalon_slave_0 addressAlignment DYNAMIC
set_interface_property avalon_slave_0 addressUnits WORDS
set_interface_property avalon_slave_0 associatedClock clock_x1
set_interface_property avalon_slave_0 associatedReset reset
set_interface_property avalon_slave_0 burstOnBurstBoundariesOnly false
set_interface_property avalon_slave_0 explicitAddressSpan 0
set_interface_property avalon_slave_0 holdTime 0
set_interface_property avalon_slave_0 isMemoryDevice false
set_interface_property avalon_slave_0 isNonVolatileStorage false
set_interface_property avalon_slave_0 linewrapBursts false
set_interface_property avalon_slave_0 maximumPendingReadTransactions 0
set_interface_property avalon_slave_0 printableDevice false
set_interface_property avalon_slave_0 readLatency 0
set_interface_property avalon_slave_0 readWaitTime 0
set_interface_property avalon_slave_0 setupTime 0
set_interface_property avalon_slave_0 timingUnits Cycles
set_interface_property avalon_slave_0 writeWaitTime 0
set_interface_property avalon_slave_0 ENABLED true

add_interface_port avalon_slave_0 byte_en_0 byteenable Input 8
add_interface_port avalon_slave_0 read_data_0 readdata Output 64
add_interface_port avalon_slave_0 addr_0 address Input 20
add_interface_port avalon_slave_0 write_en_0 write Input 1
add_interface_port avalon_slave_0 read_en_0 read Input 1
add_interface_port avalon_slave_0 write_data_0 writedata Input 64
add_interface_port avalon_slave_0 waitrequest_0 waitrequest Output 1


# 
# connection point avalon_master_0
# 
add_interface avalon_master_0 avalon start
set_interface_property avalon_master_0 addressUnits SYMBOLS
set_interface_property avalon_master_0 associatedClock clock_x2
set_interface_property avalon_master_0 associatedReset reset
set_interface_property avalon_master_0 burstOnBurstBoundariesOnly false
set_interface_property avalon_master_0 doStreamReads false
set_interface_property avalon_master_0 doStreamWrites false
set_interface_property avalon_master_0 linewrapBursts false
set_interface_property avalon_master_0 readLatency 0
set_interface_property avalon_master_0 ENABLED true

add_interface_port avalon_master_0 avm_byte_en byteenable Output 8
add_interface_port avalon_master_0 avm_write_data writedata Output 64
add_interface_port avalon_master_0 avm_read_data readdata Input 64
add_interface_port avalon_master_0 avm_addr address Output 20
add_interface_port avalon_master_0 avm_write_en write Output 1
add_interface_port avalon_master_0 avm_read_en read Output 1
add_interface_port avalon_master_0 avm_waitrequest waitrequest Input 1


# 
# connection point reset
# 
add_interface reset reset end
set_interface_property reset associatedClock clock_x1
set_interface_property reset synchronousEdges DEASSERT
set_interface_property reset ENABLED true

add_interface_port reset reset reset Input 1


# 
# connection point avalon_slave_1
# 
add_interface avalon_slave_1 avalon end
set_interface_property avalon_slave_1 addressAlignment DYNAMIC
set_interface_property avalon_slave_1 addressUnits WORDS
set_interface_property avalon_slave_1 associatedClock clock_x1
set_interface_property avalon_slave_1 associatedReset reset
set_interface_property avalon_slave_1 burstOnBurstBoundariesOnly false
set_interface_property avalon_slave_1 explicitAddressSpan 0
set_interface_property avalon_slave_1 holdTime 0
set_interface_property avalon_slave_1 isMemoryDevice false
set_interface_property avalon_slave_1 isNonVolatileStorage false
set_interface_property avalon_slave_1 linewrapBursts false
set_interface_property avalon_slave_1 maximumPendingReadTransactions 0
set_interface_property avalon_slave_1 printableDevice false
set_interface_property avalon_slave_1 readLatency 0
set_interface_property avalon_slave_1 readWaitTime 0
set_interface_property avalon_slave_1 setupTime 0
set_interface_property avalon_slave_1 timingUnits Cycles
set_interface_property avalon_slave_1 writeWaitTime 0
set_interface_property avalon_slave_1 ENABLED true

add_interface_port avalon_slave_1 addr_1 address Input 20
add_interface_port avalon_slave_1 write_en_1 write Input 1
add_interface_port avalon_slave_1 read_en_1 read Input 1
add_interface_port avalon_slave_1 byte_en_1 byteenable Input 8
add_interface_port avalon_slave_1 write_data_1 writedata Input 64
add_interface_port avalon_slave_1 read_data_1 readdata Output 64
add_interface_port avalon_slave_1 waitrequest_1 waitrequest Output 1


# 
# connection point clock_x1
# 
add_interface clock_x1 clock end
set_interface_property clock_x1 clockRate 0
set_interface_property clock_x1 ENABLED true

add_interface_port clock_x1 base_clock clk Input 1


# 
# connection point clock_x2
# 
add_interface clock_x2 clock end
set_interface_property clock_x2 clockRate 0
set_interface_property clock_x2 ENABLED true

add_interface_port clock_x2 clock clk Input 1

