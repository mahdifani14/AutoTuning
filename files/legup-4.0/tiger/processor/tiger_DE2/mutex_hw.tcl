# TCL File Generated by Component Editor 10.1sp1
# Thu Jun 28 18:45:26 EDT 2012
# DO NOT MODIFY


# +-----------------------------------
# | 
# | mutex "mutex" v1.0
# | null 2012.06.28.18:45:26
# | 
# | 
# | /home/choijon5/legup/tiger/processor/tiger_hybrid_pipelined_new/mutex.v
# | 
# |    ./mutex.v syn, sim
# | 
# +-----------------------------------

# +-----------------------------------
# | request TCL package from ACDS 10.1
# | 
package require -exact sopc 10.1
# | 
# +-----------------------------------

# +-----------------------------------
# | module mutex
# | 
set_module_property NAME mutex
set_module_property VERSION 1.0
set_module_property INTERNAL false
set_module_property OPAQUE_ADDRESS_MAP true
set_module_property DISPLAY_NAME mutex
set_module_property TOP_LEVEL_HDL_FILE mutex.v
set_module_property TOP_LEVEL_HDL_MODULE legup_mutex
set_module_property INSTANTIATE_IN_SYSTEM_MODULE true
set_module_property EDITABLE true
set_module_property ANALYZE_HDL TRUE
# | 
# +-----------------------------------

# +-----------------------------------
# | files
# | 
add_file mutex.v {SYNTHESIS SIMULATION}
# | 
# +-----------------------------------

# +-----------------------------------
# | parameters
# | 
# | 
# +-----------------------------------

# +-----------------------------------
# | display items
# | 
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point s1
# | 
add_interface s1 avalon end
set_interface_property s1 addressAlignment DYNAMIC
set_interface_property s1 addressUnits WORDS
set_interface_property s1 associatedClock clockreset
set_interface_property s1 burstOnBurstBoundariesOnly false
set_interface_property s1 explicitAddressSpan 0
set_interface_property s1 holdTime 0
set_interface_property s1 isMemoryDevice false
set_interface_property s1 isNonVolatileStorage false
set_interface_property s1 linewrapBursts false
set_interface_property s1 maximumPendingReadTransactions 0
set_interface_property s1 printableDevice false
set_interface_property s1 readLatency 0
set_interface_property s1 readWaitTime 1
set_interface_property s1 setupTime 0
set_interface_property s1 timingUnits Cycles
set_interface_property s1 writeWaitTime 0

set_interface_property s1 ENABLED true

add_interface_port s1 avs_s1_address address Input 1
add_interface_port s1 avs_s1_writedata writedata Input 128
add_interface_port s1 avs_s1_read read Input 1
add_interface_port s1 avs_s1_write write Input 1
add_interface_port s1 avs_s1_waitrequest waitrequest Output 1
add_interface_port s1 avs_s1_readdata readdata Output 128
# | 
# +-----------------------------------

# +-----------------------------------
# | connection point clockreset
# | 
add_interface clockreset clock end
set_interface_property clockreset clockRate 0

set_interface_property clockreset ENABLED true

add_interface_port clockreset csi_clockreset_clk clk Input 1
add_interface_port clockreset csi_clockreset_reset_n reset_n Input 1
# | 
# +-----------------------------------
