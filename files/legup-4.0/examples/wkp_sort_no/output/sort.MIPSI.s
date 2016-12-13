	.section .mdebug.abi32
	.previous
	.file	"output/sort.sw.ll"
	.section	_main_section,"ax",@progbits
	.globl	main
	.align	2
	.type	main,@function
	.ent	main                    # @main
main:
$tmp2:
	.cfi_startproc
	.frame	$sp,32,$ra
	.mask 	0x80030000,-4
	.fmask	0x00000000,0
# BB#0:
	.set	noreorder
	.set	nomacro
	addiu	$sp, $sp, -32
$tmp3:
	.cfi_def_cfa_offset 32
	sw	$ra, 28($sp)
	sw	$17, 24($sp)
	sw	$16, 20($sp)
$tmp4:
	.cfi_offset 31, -4
$tmp5:
	.cfi_offset 17, -8
$tmp6:
	.cfi_offset 16, -12
	addiu	$3, $zero, 0
$BB0_1:                                 # %.lr.ph7.i
                                        # =>This Inner Loop Header: Depth=1
	lui	$4, %hi(input)
	lui	$2, %hi(y)
	addiu	$5, $4, %lo(input)
	sll	$4, $3, 2
	subu	$6, $5, $4
	addiu	$5, $2, %lo(y)
	addiu	$3, $3, -1
	addiu	$2, $zero, 0
	lw	$6, 0($6)
	nop
	subu	$5, $5, $4
	addiu	$4, $zero, -100
	sw	$6, 0($5)
	bne	$3, $4, $BB0_1
	nop
# BB#2:
	addiu	$16, $zero, 0
$BB0_3:                                 # %.lr.ph.i
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_13 Depth 2
	addu	$6, $zero, $2
	lui	$2, %hi(y)
	addiu	$8, $2, %lo(y)
	sll	$3, $6, 2
	addu	$7, $8, $3
	lw	$5, 0($7)
	nop
	lw	$4, 4($7)
	nop
	addiu	$2, $6, 1
	slt	$9, $4, $5
	addu	$4, $zero, $6
	beq	$9, $zero, $BB0_5
	nop
# BB#4:                                 # %.lr.ph.i
                                        #   in Loop: Header=BB0_3 Depth=1
	addu	$4, $zero, $2
$BB0_5:                                 # %.lr.ph.i
                                        #   in Loop: Header=BB0_3 Depth=1
	sll	$9, $4, 2
	addu	$8, $8, $9
	lw	$9, 0($8)
	nop
	sw	$9, 0($7)
	addiu	$7, $zero, 98
	sw	$5, 0($8)
	bne	$6, $7, $BB0_12
	nop
$BB0_6:                                 # %.loopexit.i
                                        #   in Loop: Header=BB0_3 Depth=1
	addiu	$3, $zero, 99
	bne	$2, $3, $BB0_3
	nop
# BB#7:
	addiu	$17, $zero, -100
$BB0_8:                                 # %sort.exit
                                        # =>This Inner Loop Header: Depth=1
	lui	$2, %hi(y)
	addiu	$2, $2, %lo(y)
	sll	$3, $16, 2
	subu	$3, $2, $3
	lui	$2, %hi($.str)
	lw	$5, 0($3)
	nop
	addiu	$16, $16, -1
	addiu	$4, $2, %lo($.str)
	jal	printf
	nop
	bne	$16, $17, $BB0_8
	nop
# BB#9:
	lui	$2, %hi($.str1)
	addiu	$16, $zero, 0
	addiu	$4, $2, %lo($.str1)
	jal	printf
	nop
	addiu	$17, $zero, -100
$BB0_10:                                # =>This Inner Loop Header: Depth=1
	lui	$2, %hi(correctOutput)
	addiu	$2, $2, %lo(correctOutput)
	sll	$4, $16, 2
	lui	$3, %hi($.str)
	subu	$2, $2, $4
	addiu	$16, $16, -1
	addiu	$4, $3, %lo($.str)
	lw	$5, 0($2)
	nop
	jal	printf
	nop
	bne	$16, $17, $BB0_10
	nop
# BB#11:
	addiu	$2, $zero, 0
	lw	$16, 20($sp)
	nop
	lw	$17, 24($sp)
	nop
	lw	$ra, 28($sp)
	nop
	addiu	$sp, $sp, 32
	jr	$ra
	nop
$BB0_12:                                #   in Loop: Header=BB0_3 Depth=1
	addiu	$6, $6, 2
$BB0_13:                                # %._crit_edge9.i
                                        #   Parent Loop BB0_3 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$7, %hi(y)
	addiu	$7, $7, %lo(y)
	sll	$8, $6, 2
	addu	$8, $7, $8
	lw	$8, 0($8)
	nop
	slt	$5, $8, $5
	beq	$5, $zero, $BB0_15
	nop
# BB#14:                                # %._crit_edge9.i
                                        #   in Loop: Header=BB0_13 Depth=2
	addu	$4, $zero, $6
$BB0_15:                                # %._crit_edge9.i
                                        #   in Loop: Header=BB0_13 Depth=2
	sll	$5, $4, 2
	addu	$8, $7, $5
	addu	$7, $7, $3
	lw	$5, 0($7)
	nop
	lw	$9, 0($8)
	nop
	addiu	$6, $6, 1
	sw	$9, 0($7)
	addiu	$7, $zero, 100
	sw	$5, 0($8)
	beq	$6, $7, $BB0_6
	nop
	j	$BB0_13
	nop
	.set	macro
	.set	reorder
	.end	main
$tmp7:
	.size	main, ($tmp7)-main
$tmp8:
	.cfi_endproc
$eh_func_end0:

	.type	input,@object           # @input
	.section	.rodata,"a",@progbits
	.align	2
input:
	.4byte	283                     # 0x11b
	.4byte	286                     # 0x11e
	.4byte	177                     # 0xb1
	.4byte	115                     # 0x73
	.4byte	293                     # 0x125
	.4byte	235                     # 0xeb
	.4byte	286                     # 0x11e
	.4byte	192                     # 0xc0
	.4byte	249                     # 0xf9
	.4byte	121                     # 0x79
	.4byte	62                      # 0x3e
	.4byte	127                     # 0x7f
	.4byte	290                     # 0x122
	.4byte	259                     # 0x103
	.4byte	263                     # 0x107
	.4byte	226                     # 0xe2
	.4byte	240                     # 0xf0
	.4byte	126                     # 0x7e
	.4byte	172                     # 0xac
	.4byte	136                     # 0x88
	.4byte	11                      # 0xb
	.4byte	68                      # 0x44
	.4byte	267                     # 0x10b
	.4byte	129                     # 0x81
	.4byte	182                     # 0xb6
	.4byte	230                     # 0xe6
	.4byte	62                      # 0x3e
	.4byte	223                     # 0xdf
	.4byte	67                      # 0x43
	.4byte	235                     # 0xeb
	.4byte	29                      # 0x1d
	.4byte	102                     # 0x66
	.4byte	222                     # 0xde
	.4byte	258                     # 0x102
	.4byte	269                     # 0x10d
	.4byte	267                     # 0x10b
	.4byte	193                     # 0xc1
	.4byte	256                     # 0x100
	.4byte	211                     # 0xd3
	.4byte	142                     # 0x8e
	.4byte	129                     # 0x81
	.4byte	273                     # 0x111
	.4byte	21                      # 0x15
	.4byte	119                     # 0x77
	.4byte	284                     # 0x11c
	.4byte	37                      # 0x25
	.4byte	98                      # 0x62
	.4byte	224                     # 0xe0
	.4byte	215                     # 0xd7
	.4byte	270                     # 0x10e
	.4byte	113                     # 0x71
	.4byte	226                     # 0xe2
	.4byte	91                      # 0x5b
	.4byte	80                      # 0x50
	.4byte	56                      # 0x38
	.4byte	273                     # 0x111
	.4byte	62                      # 0x3e
	.4byte	170                     # 0xaa
	.4byte	196                     # 0xc4
	.4byte	181                     # 0xb5
	.4byte	105                     # 0x69
	.4byte	225                     # 0xe1
	.4byte	284                     # 0x11c
	.4byte	236                     # 0xec
	.4byte	46                      # 0x2e
	.4byte	5                       # 0x5
	.4byte	129                     # 0x81
	.4byte	13                      # 0xd
	.4byte	257                     # 0x101
	.4byte	24                      # 0x18
	.4byte	195                     # 0xc3
	.4byte	282                     # 0x11a
	.4byte	45                      # 0x2d
	.4byte	14                      # 0xe
	.4byte	267                     # 0x10b
	.4byte	134                     # 0x86
	.4byte	164                     # 0xa4
	.4byte	243                     # 0xf3
	.4byte	50                      # 0x32
	.4byte	187                     # 0xbb
	.4byte	108                     # 0x6c
	.4byte	276                     # 0x114
	.4byte	278                     # 0x116
	.4byte	188                     # 0xbc
	.4byte	84                      # 0x54
	.4byte	3                       # 0x3
	.4byte	251                     # 0xfb
	.4byte	254                     # 0xfe
	.4byte	199                     # 0xc7
	.4byte	132                     # 0x84
	.4byte	56                      # 0x38
	.4byte	176                     # 0xb0
	.4byte	168                     # 0xa8
	.4byte	139                     # 0x8b
	.4byte	112                     # 0x70
	.4byte	226                     # 0xe2
	.4byte	186                     # 0xba
	.4byte	294                     # 0x126
	.4byte	239                     # 0xef
	.4byte	27                      # 0x1b
	.size	input, 400

	.type	correctOutput,@object   # @correctOutput
	.align	2
correctOutput:
	.4byte	3                       # 0x3
	.4byte	5                       # 0x5
	.4byte	11                      # 0xb
	.4byte	13                      # 0xd
	.4byte	14                      # 0xe
	.4byte	21                      # 0x15
	.4byte	24                      # 0x18
	.4byte	27                      # 0x1b
	.4byte	29                      # 0x1d
	.4byte	37                      # 0x25
	.4byte	45                      # 0x2d
	.4byte	46                      # 0x2e
	.4byte	50                      # 0x32
	.4byte	56                      # 0x38
	.4byte	56                      # 0x38
	.4byte	62                      # 0x3e
	.4byte	62                      # 0x3e
	.4byte	62                      # 0x3e
	.4byte	67                      # 0x43
	.4byte	68                      # 0x44
	.4byte	80                      # 0x50
	.4byte	84                      # 0x54
	.4byte	91                      # 0x5b
	.4byte	98                      # 0x62
	.4byte	102                     # 0x66
	.4byte	105                     # 0x69
	.4byte	108                     # 0x6c
	.4byte	112                     # 0x70
	.4byte	113                     # 0x71
	.4byte	115                     # 0x73
	.4byte	119                     # 0x77
	.4byte	121                     # 0x79
	.4byte	126                     # 0x7e
	.4byte	127                     # 0x7f
	.4byte	129                     # 0x81
	.4byte	129                     # 0x81
	.4byte	129                     # 0x81
	.4byte	132                     # 0x84
	.4byte	134                     # 0x86
	.4byte	136                     # 0x88
	.4byte	139                     # 0x8b
	.4byte	142                     # 0x8e
	.4byte	164                     # 0xa4
	.4byte	168                     # 0xa8
	.4byte	170                     # 0xaa
	.4byte	172                     # 0xac
	.4byte	176                     # 0xb0
	.4byte	177                     # 0xb1
	.4byte	181                     # 0xb5
	.4byte	182                     # 0xb6
	.4byte	186                     # 0xba
	.4byte	187                     # 0xbb
	.4byte	188                     # 0xbc
	.4byte	192                     # 0xc0
	.4byte	193                     # 0xc1
	.4byte	195                     # 0xc3
	.4byte	196                     # 0xc4
	.4byte	199                     # 0xc7
	.4byte	211                     # 0xd3
	.4byte	215                     # 0xd7
	.4byte	222                     # 0xde
	.4byte	223                     # 0xdf
	.4byte	224                     # 0xe0
	.4byte	225                     # 0xe1
	.4byte	226                     # 0xe2
	.4byte	226                     # 0xe2
	.4byte	226                     # 0xe2
	.4byte	230                     # 0xe6
	.4byte	235                     # 0xeb
	.4byte	235                     # 0xeb
	.4byte	236                     # 0xec
	.4byte	239                     # 0xef
	.4byte	240                     # 0xf0
	.4byte	243                     # 0xf3
	.4byte	249                     # 0xf9
	.4byte	251                     # 0xfb
	.4byte	254                     # 0xfe
	.4byte	256                     # 0x100
	.4byte	257                     # 0x101
	.4byte	258                     # 0x102
	.4byte	259                     # 0x103
	.4byte	263                     # 0x107
	.4byte	267                     # 0x10b
	.4byte	267                     # 0x10b
	.4byte	267                     # 0x10b
	.4byte	269                     # 0x10d
	.4byte	270                     # 0x10e
	.4byte	273                     # 0x111
	.4byte	273                     # 0x111
	.4byte	276                     # 0x114
	.4byte	278                     # 0x116
	.4byte	282                     # 0x11a
	.4byte	283                     # 0x11b
	.4byte	284                     # 0x11c
	.4byte	284                     # 0x11c
	.4byte	286                     # 0x11e
	.4byte	286                     # 0x11e
	.4byte	290                     # 0x122
	.4byte	293                     # 0x125
	.4byte	294                     # 0x126
	.size	correctOutput, 400

	.type	y,@object               # @y
	.local	y
	.comm	y,400,4
	.type	$.str,@object           # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
$.str:
	.asciz	 "%d\t"
	.size	$.str, 4

	.type	$.str1,@object          # @.str1
$.str1:
	.asciz	 "\n\n-----------\n"
	.size	$.str1, 15


