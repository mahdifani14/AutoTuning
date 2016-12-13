	.section .mdebug.abi32
	.previous
	.file	"output/sort_t.sw.ll"
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
	addiu	$4, $zero, 0
$BB0_1:                                 # %.lr.ph128.i
                                        # =>This Inner Loop Header: Depth=1
	lui	$3, %hi(input)
	lui	$2, %hi(y)
	addiu	$3, $3, %lo(input)
	sll	$5, $4, 2
	subu	$7, $3, $5
	addiu	$6, $2, %lo(y)
	addiu	$4, $4, -1
	addiu	$2, $zero, 91
	addiu	$3, $zero, 17
	lw	$7, 0($7)
	nop
	subu	$6, $6, $5
	addiu	$5, $zero, -100
	sw	$7, 0($6)
	bne	$4, $5, $BB0_1
	nop
$BB0_2:                                 # %.lr.ph27.i
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_222 Depth 2
                                        #     Child Loop BB0_191 Depth 2
                                        #     Child Loop BB0_167 Depth 2
                                        #     Child Loop BB0_143 Depth 2
                                        #     Child Loop BB0_119 Depth 2
                                        #     Child Loop BB0_95 Depth 2
                                        #     Child Loop BB0_71 Depth 2
                                        #     Child Loop BB0_47 Depth 2
                                        #     Child Loop BB0_23 Depth 2
                                        #     Child Loop BB0_3 Depth 2
                                        #     Child Loop BB0_27 Depth 2
                                        #     Child Loop BB0_51 Depth 2
                                        #     Child Loop BB0_75 Depth 2
                                        #     Child Loop BB0_99 Depth 2
                                        #     Child Loop BB0_123 Depth 2
                                        #     Child Loop BB0_147 Depth 2
                                        #     Child Loop BB0_171 Depth 2
                                        #     Child Loop BB0_196 Depth 2
	addiu	$12, $3, -7
	addiu	$9, $3, -6
	addiu	$8, $3, -5
	addiu	$7, $3, -4
	addiu	$6, $3, -3
	addiu	$5, $3, -2
	addiu	$4, $3, -1
	addiu	$10, $3, -16
	addiu	$13, $3, -8
	addiu	$11, $3, -17
$BB0_3:                                 #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$14, %hi(y)
	sll	$24, $11, 2
	addiu	$15, $14, %lo(y)
	sll	$14, $13, 2
	addu	$25, $15, $24
	addu	$24, $15, $14
	lw	$15, 0($25)
	nop
	lw	$24, -32($24)
	nop
	slt	$25, $24, $15
	beq	$25, $zero, $BB0_5
	nop
# BB#4:                                 #   in Loop: Header=BB0_3 Depth=2
	addiu	$11, $13, -8
	lui	$15, %hi(y)
	addiu	$25, $15, %lo(y)
	sll	$15, $3, 2
	addu	$16, $25, $15
	lw	$15, -68($16)
	nop
	addu	$25, $25, $14
	sw	$24, -68($16)
	sw	$15, -32($25)
$BB0_5:                                 #   in Loop: Header=BB0_3 Depth=2
	lui	$24, %hi(y)
	addiu	$24, $24, %lo(y)
	addu	$24, $24, $14
	lw	$24, -28($24)
	nop
	slt	$25, $24, $15
	beq	$25, $zero, $BB0_7
	nop
# BB#6:                                 #   in Loop: Header=BB0_3 Depth=2
	addiu	$11, $13, -7
	lui	$15, %hi(y)
	addiu	$25, $15, %lo(y)
	sll	$15, $3, 2
	addu	$16, $25, $15
	lw	$15, -68($16)
	nop
	addu	$25, $25, $14
	sw	$24, -68($16)
	sw	$15, -28($25)
$BB0_7:                                 #   in Loop: Header=BB0_3 Depth=2
	lui	$24, %hi(y)
	addiu	$24, $24, %lo(y)
	addu	$24, $24, $14
	lw	$24, -24($24)
	nop
	slt	$25, $24, $15
	beq	$25, $zero, $BB0_9
	nop
# BB#8:                                 #   in Loop: Header=BB0_3 Depth=2
	addiu	$11, $13, -6
	lui	$15, %hi(y)
	addiu	$25, $15, %lo(y)
	sll	$15, $3, 2
	addu	$16, $25, $15
	lw	$15, -68($16)
	nop
	addu	$25, $25, $14
	sw	$24, -68($16)
	sw	$15, -24($25)
$BB0_9:                                 #   in Loop: Header=BB0_3 Depth=2
	lui	$24, %hi(y)
	addiu	$24, $24, %lo(y)
	addu	$24, $24, $14
	lw	$24, -20($24)
	nop
	slt	$25, $24, $15
	beq	$25, $zero, $BB0_11
	nop
# BB#10:                                #   in Loop: Header=BB0_3 Depth=2
	addiu	$11, $13, -5
	lui	$15, %hi(y)
	addiu	$25, $15, %lo(y)
	sll	$15, $3, 2
	addu	$16, $25, $15
	lw	$15, -68($16)
	nop
	addu	$25, $25, $14
	sw	$24, -68($16)
	sw	$15, -20($25)
$BB0_11:                                #   in Loop: Header=BB0_3 Depth=2
	lui	$24, %hi(y)
	addiu	$24, $24, %lo(y)
	addu	$24, $24, $14
	lw	$24, -16($24)
	nop
	slt	$25, $24, $15
	beq	$25, $zero, $BB0_13
	nop
# BB#12:                                #   in Loop: Header=BB0_3 Depth=2
	addiu	$11, $13, -4
	lui	$15, %hi(y)
	addiu	$25, $15, %lo(y)
	sll	$15, $3, 2
	addu	$16, $25, $15
	lw	$15, -68($16)
	nop
	addu	$25, $25, $14
	sw	$24, -68($16)
	sw	$15, -16($25)
$BB0_13:                                #   in Loop: Header=BB0_3 Depth=2
	lui	$24, %hi(y)
	addiu	$24, $24, %lo(y)
	addu	$24, $24, $14
	lw	$24, -12($24)
	nop
	slt	$25, $24, $15
	beq	$25, $zero, $BB0_15
	nop
# BB#14:                                #   in Loop: Header=BB0_3 Depth=2
	addiu	$11, $13, -3
	lui	$15, %hi(y)
	addiu	$25, $15, %lo(y)
	sll	$15, $3, 2
	addu	$16, $25, $15
	lw	$15, -68($16)
	nop
	addu	$25, $25, $14
	sw	$24, -68($16)
	sw	$15, -12($25)
$BB0_15:                                #   in Loop: Header=BB0_3 Depth=2
	lui	$24, %hi(y)
	addiu	$24, $24, %lo(y)
	addu	$24, $24, $14
	lw	$24, -8($24)
	nop
	slt	$25, $24, $15
	beq	$25, $zero, $BB0_17
	nop
# BB#16:                                #   in Loop: Header=BB0_3 Depth=2
	addiu	$11, $13, -2
	lui	$15, %hi(y)
	addiu	$25, $15, %lo(y)
	sll	$15, $3, 2
	addu	$16, $25, $15
	lw	$15, -68($16)
	nop
	addu	$25, $25, $14
	sw	$24, -68($16)
	sw	$15, -8($25)
$BB0_17:                                #   in Loop: Header=BB0_3 Depth=2
	lui	$24, %hi(y)
	addiu	$24, $24, %lo(y)
	addu	$24, $24, $14
	lw	$24, -4($24)
	nop
	slt	$25, $24, $15
	beq	$25, $zero, $BB0_19
	nop
# BB#18:                                #   in Loop: Header=BB0_3 Depth=2
	addiu	$11, $13, -1
	lui	$15, %hi(y)
	addiu	$25, $15, %lo(y)
	sll	$15, $3, 2
	addu	$16, $25, $15
	lw	$15, -68($16)
	nop
	addu	$25, $25, $14
	sw	$24, -68($16)
	sw	$15, -4($25)
$BB0_19:                                #   in Loop: Header=BB0_3 Depth=2
	lui	$24, %hi(y)
	addiu	$24, $24, %lo(y)
	addu	$14, $24, $14
	lw	$24, 0($14)
	nop
	slt	$15, $24, $15
	beq	$15, $zero, $BB0_21
	nop
# BB#20:                                #   in Loop: Header=BB0_3 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	sll	$15, $3, 2
	addu	$15, $11, $15
	lw	$11, -68($15)
	nop
	sw	$24, -68($15)
	sw	$11, 0($14)
	addu	$11, $zero, $13
$BB0_21:                                #   in Loop: Header=BB0_3 Depth=2
	addiu	$14, $13, 1
	addiu	$13, $13, 9
	slti	$14, $14, 92
	bne	$14, $zero, $BB0_3
	nop
# BB#22:                                # %._crit_edge28.i
                                        #   in Loop: Header=BB0_2 Depth=1
	lui	$14, 14563
	addiu	$13, $2, 8
	ori	$14, $14, 36409
	mult	$13, $14
	mfhi	$15
	sra	$14, $15, 1
	srl	$15, $15, 31
	addu	$14, $14, $15
	addiu	$15, $zero, 9
	mult	$14, $15
	mflo	$15
	addiu	$14, $zero, 100
	subu	$13, $13, $15
	subu	$13, $14, $13
	addiu	$14, $zero, 99
	slt	$14, $14, $13
	bne	$14, $zero, $BB0_26
	nop
$BB0_23:                                # %.lr.ph34.i
                                        #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$14, %hi(y)
	sll	$24, $11, 2
	addiu	$15, $14, %lo(y)
	sll	$14, $13, 2
	addu	$24, $15, $24
	addu	$15, $15, $14
	lw	$15, 0($15)
	nop
	lw	$24, 0($24)
	nop
	slt	$24, $15, $24
	beq	$24, $zero, $BB0_25
	nop
# BB#24:                                #   in Loop: Header=BB0_23 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	sll	$24, $3, 2
	addu	$25, $11, $24
	lw	$24, -68($25)
	nop
	addu	$11, $11, $14
	sw	$15, -68($25)
	sw	$24, 0($11)
	addu	$11, $zero, $13
$BB0_25:                                #   in Loop: Header=BB0_23 Depth=2
	addiu	$15, $13, 1
	slti	$14, $13, 99
	addu	$13, $zero, $15
	bne	$14, $zero, $BB0_23
	nop
$BB0_26:                                # %._crit_edge35.i
                                        #   in Loop: Header=BB0_2 Depth=1
	addiu	$11, $3, -15
	addiu	$13, $zero, 91
	slt	$13, $13, $11
	bne	$13, $zero, $BB0_46
	nop
$BB0_27:                                #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$13, %hi(y)
	sll	$15, $10, 2
	addiu	$14, $13, %lo(y)
	sll	$13, $12, 2
	addu	$24, $14, $15
	addu	$15, $14, $13
	lw	$14, 0($24)
	nop
	lw	$15, -32($15)
	nop
	slt	$24, $15, $14
	beq	$24, $zero, $BB0_29
	nop
# BB#28:                                #   in Loop: Header=BB0_27 Depth=2
	addiu	$10, $12, -8
	lui	$14, %hi(y)
	addiu	$24, $14, %lo(y)
	sll	$14, $3, 2
	addu	$25, $24, $14
	lw	$14, -64($25)
	nop
	addu	$24, $24, $13
	sw	$15, -64($25)
	sw	$14, -32($24)
$BB0_29:                                #   in Loop: Header=BB0_27 Depth=2
	lui	$15, %hi(y)
	addiu	$15, $15, %lo(y)
	addu	$15, $15, $13
	lw	$15, -28($15)
	nop
	slt	$24, $15, $14
	beq	$24, $zero, $BB0_31
	nop
# BB#30:                                #   in Loop: Header=BB0_27 Depth=2
	addiu	$10, $12, -7
	lui	$14, %hi(y)
	addiu	$24, $14, %lo(y)
	sll	$14, $3, 2
	addu	$25, $24, $14
	lw	$14, -64($25)
	nop
	addu	$24, $24, $13
	sw	$15, -64($25)
	sw	$14, -28($24)
$BB0_31:                                #   in Loop: Header=BB0_27 Depth=2
	lui	$15, %hi(y)
	addiu	$15, $15, %lo(y)
	addu	$15, $15, $13
	lw	$15, -24($15)
	nop
	slt	$24, $15, $14
	beq	$24, $zero, $BB0_33
	nop
# BB#32:                                #   in Loop: Header=BB0_27 Depth=2
	addiu	$10, $12, -6
	lui	$14, %hi(y)
	addiu	$24, $14, %lo(y)
	sll	$14, $3, 2
	addu	$25, $24, $14
	lw	$14, -64($25)
	nop
	addu	$24, $24, $13
	sw	$15, -64($25)
	sw	$14, -24($24)
$BB0_33:                                #   in Loop: Header=BB0_27 Depth=2
	lui	$15, %hi(y)
	addiu	$15, $15, %lo(y)
	addu	$15, $15, $13
	lw	$15, -20($15)
	nop
	slt	$24, $15, $14
	beq	$24, $zero, $BB0_35
	nop
# BB#34:                                #   in Loop: Header=BB0_27 Depth=2
	addiu	$10, $12, -5
	lui	$14, %hi(y)
	addiu	$24, $14, %lo(y)
	sll	$14, $3, 2
	addu	$25, $24, $14
	lw	$14, -64($25)
	nop
	addu	$24, $24, $13
	sw	$15, -64($25)
	sw	$14, -20($24)
$BB0_35:                                #   in Loop: Header=BB0_27 Depth=2
	lui	$15, %hi(y)
	addiu	$15, $15, %lo(y)
	addu	$15, $15, $13
	lw	$15, -16($15)
	nop
	slt	$24, $15, $14
	beq	$24, $zero, $BB0_37
	nop
# BB#36:                                #   in Loop: Header=BB0_27 Depth=2
	addiu	$10, $12, -4
	lui	$14, %hi(y)
	addiu	$24, $14, %lo(y)
	sll	$14, $3, 2
	addu	$25, $24, $14
	lw	$14, -64($25)
	nop
	addu	$24, $24, $13
	sw	$15, -64($25)
	sw	$14, -16($24)
$BB0_37:                                #   in Loop: Header=BB0_27 Depth=2
	lui	$15, %hi(y)
	addiu	$15, $15, %lo(y)
	addu	$15, $15, $13
	lw	$15, -12($15)
	nop
	slt	$24, $15, $14
	beq	$24, $zero, $BB0_39
	nop
# BB#38:                                #   in Loop: Header=BB0_27 Depth=2
	addiu	$10, $12, -3
	lui	$14, %hi(y)
	addiu	$24, $14, %lo(y)
	sll	$14, $3, 2
	addu	$25, $24, $14
	lw	$14, -64($25)
	nop
	addu	$24, $24, $13
	sw	$15, -64($25)
	sw	$14, -12($24)
$BB0_39:                                #   in Loop: Header=BB0_27 Depth=2
	lui	$15, %hi(y)
	addiu	$15, $15, %lo(y)
	addu	$15, $15, $13
	lw	$15, -8($15)
	nop
	slt	$24, $15, $14
	beq	$24, $zero, $BB0_41
	nop
# BB#40:                                #   in Loop: Header=BB0_27 Depth=2
	addiu	$10, $12, -2
	lui	$14, %hi(y)
	addiu	$24, $14, %lo(y)
	sll	$14, $3, 2
	addu	$25, $24, $14
	lw	$14, -64($25)
	nop
	addu	$24, $24, $13
	sw	$15, -64($25)
	sw	$14, -8($24)
$BB0_41:                                #   in Loop: Header=BB0_27 Depth=2
	lui	$15, %hi(y)
	addiu	$15, $15, %lo(y)
	addu	$15, $15, $13
	lw	$15, -4($15)
	nop
	slt	$24, $15, $14
	beq	$24, $zero, $BB0_43
	nop
# BB#42:                                #   in Loop: Header=BB0_27 Depth=2
	addiu	$10, $12, -1
	lui	$14, %hi(y)
	addiu	$24, $14, %lo(y)
	sll	$14, $3, 2
	addu	$25, $24, $14
	lw	$14, -64($25)
	nop
	addu	$24, $24, $13
	sw	$15, -64($25)
	sw	$14, -4($24)
$BB0_43:                                #   in Loop: Header=BB0_27 Depth=2
	lui	$15, %hi(y)
	addiu	$15, $15, %lo(y)
	addu	$13, $15, $13
	lw	$15, 0($13)
	nop
	slt	$14, $15, $14
	beq	$14, $zero, $BB0_45
	nop
# BB#44:                                #   in Loop: Header=BB0_27 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	sll	$14, $3, 2
	addu	$14, $10, $14
	lw	$10, -64($14)
	nop
	sw	$15, -64($14)
	sw	$10, 0($13)
	addu	$10, $zero, $12
$BB0_45:                                #   in Loop: Header=BB0_27 Depth=2
	addiu	$13, $12, 1
	addiu	$12, $12, 9
	slti	$13, $13, 92
	bne	$13, $zero, $BB0_27
	nop
$BB0_46:                                # %._crit_edge40.i
                                        #   in Loop: Header=BB0_2 Depth=1
	lui	$13, 14563
	addiu	$12, $2, 7
	ori	$13, $13, 36409
	mult	$12, $13
	mfhi	$14
	sra	$13, $14, 1
	srl	$14, $14, 31
	addu	$13, $13, $14
	addiu	$14, $zero, 9
	mult	$13, $14
	mflo	$14
	addiu	$13, $zero, 100
	subu	$12, $12, $14
	subu	$12, $13, $12
	addiu	$13, $zero, 99
	slt	$13, $13, $12
	bne	$13, $zero, $BB0_50
	nop
$BB0_47:                                #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$13, %hi(y)
	sll	$15, $10, 2
	addiu	$14, $13, %lo(y)
	sll	$13, $12, 2
	addu	$15, $14, $15
	addu	$14, $14, $13
	lw	$14, 0($14)
	nop
	lw	$15, 0($15)
	nop
	slt	$15, $14, $15
	beq	$15, $zero, $BB0_49
	nop
# BB#48:                                #   in Loop: Header=BB0_47 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	sll	$15, $3, 2
	addu	$24, $10, $15
	lw	$15, -64($24)
	nop
	addu	$10, $10, $13
	sw	$14, -64($24)
	sw	$15, 0($10)
	addu	$10, $zero, $12
$BB0_49:                                #   in Loop: Header=BB0_47 Depth=2
	addiu	$14, $12, 1
	slti	$13, $12, 99
	addu	$12, $zero, $14
	bne	$13, $zero, $BB0_47
	nop
$BB0_50:                                # %._crit_edge46.i
                                        #   in Loop: Header=BB0_2 Depth=1
	addiu	$10, $3, -14
	addiu	$12, $zero, 91
	slt	$12, $12, $10
	bne	$12, $zero, $BB0_70
	nop
$BB0_51:                                #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$12, %hi(y)
	sll	$14, $11, 2
	addiu	$13, $12, %lo(y)
	sll	$12, $9, 2
	addu	$15, $13, $14
	addu	$14, $13, $12
	lw	$13, 0($15)
	nop
	lw	$14, -32($14)
	nop
	slt	$15, $14, $13
	beq	$15, $zero, $BB0_53
	nop
# BB#52:                                #   in Loop: Header=BB0_51 Depth=2
	addiu	$11, $9, -8
	lui	$13, %hi(y)
	addiu	$15, $13, %lo(y)
	sll	$13, $3, 2
	addu	$24, $15, $13
	lw	$13, -60($24)
	nop
	addu	$15, $15, $12
	sw	$14, -60($24)
	sw	$13, -32($15)
$BB0_53:                                #   in Loop: Header=BB0_51 Depth=2
	lui	$14, %hi(y)
	addiu	$14, $14, %lo(y)
	addu	$14, $14, $12
	lw	$14, -28($14)
	nop
	slt	$15, $14, $13
	beq	$15, $zero, $BB0_55
	nop
# BB#54:                                #   in Loop: Header=BB0_51 Depth=2
	addiu	$11, $9, -7
	lui	$13, %hi(y)
	addiu	$15, $13, %lo(y)
	sll	$13, $3, 2
	addu	$24, $15, $13
	lw	$13, -60($24)
	nop
	addu	$15, $15, $12
	sw	$14, -60($24)
	sw	$13, -28($15)
$BB0_55:                                #   in Loop: Header=BB0_51 Depth=2
	lui	$14, %hi(y)
	addiu	$14, $14, %lo(y)
	addu	$14, $14, $12
	lw	$14, -24($14)
	nop
	slt	$15, $14, $13
	beq	$15, $zero, $BB0_57
	nop
# BB#56:                                #   in Loop: Header=BB0_51 Depth=2
	addiu	$11, $9, -6
	lui	$13, %hi(y)
	addiu	$15, $13, %lo(y)
	sll	$13, $3, 2
	addu	$24, $15, $13
	lw	$13, -60($24)
	nop
	addu	$15, $15, $12
	sw	$14, -60($24)
	sw	$13, -24($15)
$BB0_57:                                #   in Loop: Header=BB0_51 Depth=2
	lui	$14, %hi(y)
	addiu	$14, $14, %lo(y)
	addu	$14, $14, $12
	lw	$14, -20($14)
	nop
	slt	$15, $14, $13
	beq	$15, $zero, $BB0_59
	nop
# BB#58:                                #   in Loop: Header=BB0_51 Depth=2
	addiu	$11, $9, -5
	lui	$13, %hi(y)
	addiu	$15, $13, %lo(y)
	sll	$13, $3, 2
	addu	$24, $15, $13
	lw	$13, -60($24)
	nop
	addu	$15, $15, $12
	sw	$14, -60($24)
	sw	$13, -20($15)
$BB0_59:                                #   in Loop: Header=BB0_51 Depth=2
	lui	$14, %hi(y)
	addiu	$14, $14, %lo(y)
	addu	$14, $14, $12
	lw	$14, -16($14)
	nop
	slt	$15, $14, $13
	beq	$15, $zero, $BB0_61
	nop
# BB#60:                                #   in Loop: Header=BB0_51 Depth=2
	addiu	$11, $9, -4
	lui	$13, %hi(y)
	addiu	$15, $13, %lo(y)
	sll	$13, $3, 2
	addu	$24, $15, $13
	lw	$13, -60($24)
	nop
	addu	$15, $15, $12
	sw	$14, -60($24)
	sw	$13, -16($15)
$BB0_61:                                #   in Loop: Header=BB0_51 Depth=2
	lui	$14, %hi(y)
	addiu	$14, $14, %lo(y)
	addu	$14, $14, $12
	lw	$14, -12($14)
	nop
	slt	$15, $14, $13
	beq	$15, $zero, $BB0_63
	nop
# BB#62:                                #   in Loop: Header=BB0_51 Depth=2
	addiu	$11, $9, -3
	lui	$13, %hi(y)
	addiu	$15, $13, %lo(y)
	sll	$13, $3, 2
	addu	$24, $15, $13
	lw	$13, -60($24)
	nop
	addu	$15, $15, $12
	sw	$14, -60($24)
	sw	$13, -12($15)
$BB0_63:                                #   in Loop: Header=BB0_51 Depth=2
	lui	$14, %hi(y)
	addiu	$14, $14, %lo(y)
	addu	$14, $14, $12
	lw	$14, -8($14)
	nop
	slt	$15, $14, $13
	beq	$15, $zero, $BB0_65
	nop
# BB#64:                                #   in Loop: Header=BB0_51 Depth=2
	addiu	$11, $9, -2
	lui	$13, %hi(y)
	addiu	$15, $13, %lo(y)
	sll	$13, $3, 2
	addu	$24, $15, $13
	lw	$13, -60($24)
	nop
	addu	$15, $15, $12
	sw	$14, -60($24)
	sw	$13, -8($15)
$BB0_65:                                #   in Loop: Header=BB0_51 Depth=2
	lui	$14, %hi(y)
	addiu	$14, $14, %lo(y)
	addu	$14, $14, $12
	lw	$14, -4($14)
	nop
	slt	$15, $14, $13
	beq	$15, $zero, $BB0_67
	nop
# BB#66:                                #   in Loop: Header=BB0_51 Depth=2
	addiu	$11, $9, -1
	lui	$13, %hi(y)
	addiu	$15, $13, %lo(y)
	sll	$13, $3, 2
	addu	$24, $15, $13
	lw	$13, -60($24)
	nop
	addu	$15, $15, $12
	sw	$14, -60($24)
	sw	$13, -4($15)
$BB0_67:                                #   in Loop: Header=BB0_51 Depth=2
	lui	$14, %hi(y)
	addiu	$14, $14, %lo(y)
	addu	$12, $14, $12
	lw	$14, 0($12)
	nop
	slt	$13, $14, $13
	beq	$13, $zero, $BB0_69
	nop
# BB#68:                                #   in Loop: Header=BB0_51 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	sll	$13, $3, 2
	addu	$13, $11, $13
	lw	$11, -60($13)
	nop
	sw	$14, -60($13)
	sw	$11, 0($12)
	addu	$11, $zero, $9
$BB0_69:                                #   in Loop: Header=BB0_51 Depth=2
	addiu	$12, $9, 1
	addiu	$9, $9, 9
	slti	$12, $12, 92
	bne	$12, $zero, $BB0_51
	nop
$BB0_70:                                # %._crit_edge51.i
                                        #   in Loop: Header=BB0_2 Depth=1
	lui	$12, 14563
	addiu	$9, $2, 6
	ori	$12, $12, 36409
	mult	$9, $12
	mfhi	$13
	sra	$12, $13, 1
	srl	$13, $13, 31
	addu	$12, $12, $13
	addiu	$13, $zero, 9
	mult	$12, $13
	mflo	$13
	addiu	$12, $zero, 100
	subu	$9, $9, $13
	subu	$9, $12, $9
	addiu	$12, $zero, 99
	slt	$12, $12, $9
	bne	$12, $zero, $BB0_74
	nop
$BB0_71:                                #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$12, %hi(y)
	sll	$14, $11, 2
	addiu	$13, $12, %lo(y)
	sll	$12, $9, 2
	addu	$14, $13, $14
	addu	$13, $13, $12
	lw	$13, 0($13)
	nop
	lw	$14, 0($14)
	nop
	slt	$14, $13, $14
	beq	$14, $zero, $BB0_73
	nop
# BB#72:                                #   in Loop: Header=BB0_71 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	sll	$14, $3, 2
	addu	$15, $11, $14
	lw	$14, -60($15)
	nop
	addu	$11, $11, $12
	sw	$13, -60($15)
	sw	$14, 0($11)
	addu	$11, $zero, $9
$BB0_73:                                #   in Loop: Header=BB0_71 Depth=2
	addiu	$13, $9, 1
	slti	$12, $9, 99
	addu	$9, $zero, $13
	bne	$12, $zero, $BB0_71
	nop
$BB0_74:                                # %._crit_edge57.i
                                        #   in Loop: Header=BB0_2 Depth=1
	addiu	$9, $3, -13
	addiu	$11, $zero, 91
	slt	$11, $11, $9
	bne	$11, $zero, $BB0_94
	nop
$BB0_75:                                #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$11, %hi(y)
	sll	$13, $10, 2
	addiu	$12, $11, %lo(y)
	sll	$11, $8, 2
	addu	$14, $12, $13
	addu	$13, $12, $11
	lw	$12, 0($14)
	nop
	lw	$13, -32($13)
	nop
	slt	$14, $13, $12
	beq	$14, $zero, $BB0_77
	nop
# BB#76:                                #   in Loop: Header=BB0_75 Depth=2
	addiu	$10, $8, -8
	lui	$12, %hi(y)
	addiu	$14, $12, %lo(y)
	sll	$12, $3, 2
	addu	$15, $14, $12
	lw	$12, -56($15)
	nop
	addu	$14, $14, $11
	sw	$13, -56($15)
	sw	$12, -32($14)
$BB0_77:                                #   in Loop: Header=BB0_75 Depth=2
	lui	$13, %hi(y)
	addiu	$13, $13, %lo(y)
	addu	$13, $13, $11
	lw	$13, -28($13)
	nop
	slt	$14, $13, $12
	beq	$14, $zero, $BB0_79
	nop
# BB#78:                                #   in Loop: Header=BB0_75 Depth=2
	addiu	$10, $8, -7
	lui	$12, %hi(y)
	addiu	$14, $12, %lo(y)
	sll	$12, $3, 2
	addu	$15, $14, $12
	lw	$12, -56($15)
	nop
	addu	$14, $14, $11
	sw	$13, -56($15)
	sw	$12, -28($14)
$BB0_79:                                #   in Loop: Header=BB0_75 Depth=2
	lui	$13, %hi(y)
	addiu	$13, $13, %lo(y)
	addu	$13, $13, $11
	lw	$13, -24($13)
	nop
	slt	$14, $13, $12
	beq	$14, $zero, $BB0_81
	nop
# BB#80:                                #   in Loop: Header=BB0_75 Depth=2
	addiu	$10, $8, -6
	lui	$12, %hi(y)
	addiu	$14, $12, %lo(y)
	sll	$12, $3, 2
	addu	$15, $14, $12
	lw	$12, -56($15)
	nop
	addu	$14, $14, $11
	sw	$13, -56($15)
	sw	$12, -24($14)
$BB0_81:                                #   in Loop: Header=BB0_75 Depth=2
	lui	$13, %hi(y)
	addiu	$13, $13, %lo(y)
	addu	$13, $13, $11
	lw	$13, -20($13)
	nop
	slt	$14, $13, $12
	beq	$14, $zero, $BB0_83
	nop
# BB#82:                                #   in Loop: Header=BB0_75 Depth=2
	addiu	$10, $8, -5
	lui	$12, %hi(y)
	addiu	$14, $12, %lo(y)
	sll	$12, $3, 2
	addu	$15, $14, $12
	lw	$12, -56($15)
	nop
	addu	$14, $14, $11
	sw	$13, -56($15)
	sw	$12, -20($14)
$BB0_83:                                #   in Loop: Header=BB0_75 Depth=2
	lui	$13, %hi(y)
	addiu	$13, $13, %lo(y)
	addu	$13, $13, $11
	lw	$13, -16($13)
	nop
	slt	$14, $13, $12
	beq	$14, $zero, $BB0_85
	nop
# BB#84:                                #   in Loop: Header=BB0_75 Depth=2
	addiu	$10, $8, -4
	lui	$12, %hi(y)
	addiu	$14, $12, %lo(y)
	sll	$12, $3, 2
	addu	$15, $14, $12
	lw	$12, -56($15)
	nop
	addu	$14, $14, $11
	sw	$13, -56($15)
	sw	$12, -16($14)
$BB0_85:                                #   in Loop: Header=BB0_75 Depth=2
	lui	$13, %hi(y)
	addiu	$13, $13, %lo(y)
	addu	$13, $13, $11
	lw	$13, -12($13)
	nop
	slt	$14, $13, $12
	beq	$14, $zero, $BB0_87
	nop
# BB#86:                                #   in Loop: Header=BB0_75 Depth=2
	addiu	$10, $8, -3
	lui	$12, %hi(y)
	addiu	$14, $12, %lo(y)
	sll	$12, $3, 2
	addu	$15, $14, $12
	lw	$12, -56($15)
	nop
	addu	$14, $14, $11
	sw	$13, -56($15)
	sw	$12, -12($14)
$BB0_87:                                #   in Loop: Header=BB0_75 Depth=2
	lui	$13, %hi(y)
	addiu	$13, $13, %lo(y)
	addu	$13, $13, $11
	lw	$13, -8($13)
	nop
	slt	$14, $13, $12
	beq	$14, $zero, $BB0_89
	nop
# BB#88:                                #   in Loop: Header=BB0_75 Depth=2
	addiu	$10, $8, -2
	lui	$12, %hi(y)
	addiu	$14, $12, %lo(y)
	sll	$12, $3, 2
	addu	$15, $14, $12
	lw	$12, -56($15)
	nop
	addu	$14, $14, $11
	sw	$13, -56($15)
	sw	$12, -8($14)
$BB0_89:                                #   in Loop: Header=BB0_75 Depth=2
	lui	$13, %hi(y)
	addiu	$13, $13, %lo(y)
	addu	$13, $13, $11
	lw	$13, -4($13)
	nop
	slt	$14, $13, $12
	beq	$14, $zero, $BB0_91
	nop
# BB#90:                                #   in Loop: Header=BB0_75 Depth=2
	addiu	$10, $8, -1
	lui	$12, %hi(y)
	addiu	$14, $12, %lo(y)
	sll	$12, $3, 2
	addu	$15, $14, $12
	lw	$12, -56($15)
	nop
	addu	$14, $14, $11
	sw	$13, -56($15)
	sw	$12, -4($14)
$BB0_91:                                #   in Loop: Header=BB0_75 Depth=2
	lui	$13, %hi(y)
	addiu	$13, $13, %lo(y)
	addu	$11, $13, $11
	lw	$13, 0($11)
	nop
	slt	$12, $13, $12
	beq	$12, $zero, $BB0_93
	nop
# BB#92:                                #   in Loop: Header=BB0_75 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	sll	$12, $3, 2
	addu	$12, $10, $12
	lw	$10, -56($12)
	nop
	sw	$13, -56($12)
	sw	$10, 0($11)
	addu	$10, $zero, $8
$BB0_93:                                #   in Loop: Header=BB0_75 Depth=2
	addiu	$11, $8, 1
	addiu	$8, $8, 9
	slti	$11, $11, 92
	bne	$11, $zero, $BB0_75
	nop
$BB0_94:                                # %._crit_edge62.i
                                        #   in Loop: Header=BB0_2 Depth=1
	lui	$11, 14563
	addiu	$8, $2, 5
	ori	$11, $11, 36409
	mult	$8, $11
	mfhi	$12
	sra	$11, $12, 1
	srl	$12, $12, 31
	addu	$11, $11, $12
	addiu	$12, $zero, 9
	mult	$11, $12
	mflo	$12
	addiu	$11, $zero, 100
	subu	$8, $8, $12
	subu	$8, $11, $8
	addiu	$11, $zero, 99
	slt	$11, $11, $8
	bne	$11, $zero, $BB0_98
	nop
$BB0_95:                                #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$11, %hi(y)
	sll	$13, $10, 2
	addiu	$12, $11, %lo(y)
	sll	$11, $8, 2
	addu	$13, $12, $13
	addu	$12, $12, $11
	lw	$12, 0($12)
	nop
	lw	$13, 0($13)
	nop
	slt	$13, $12, $13
	beq	$13, $zero, $BB0_97
	nop
# BB#96:                                #   in Loop: Header=BB0_95 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	sll	$13, $3, 2
	addu	$14, $10, $13
	lw	$13, -56($14)
	nop
	addu	$10, $10, $11
	sw	$12, -56($14)
	sw	$13, 0($10)
	addu	$10, $zero, $8
$BB0_97:                                #   in Loop: Header=BB0_95 Depth=2
	addiu	$12, $8, 1
	slti	$11, $8, 99
	addu	$8, $zero, $12
	bne	$11, $zero, $BB0_95
	nop
$BB0_98:                                # %._crit_edge68.i
                                        #   in Loop: Header=BB0_2 Depth=1
	addiu	$8, $3, -12
	addiu	$10, $zero, 91
	slt	$10, $10, $8
	bne	$10, $zero, $BB0_118
	nop
$BB0_99:                                #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$10, %hi(y)
	sll	$12, $9, 2
	addiu	$11, $10, %lo(y)
	sll	$10, $7, 2
	addu	$13, $11, $12
	addu	$12, $11, $10
	lw	$11, 0($13)
	nop
	lw	$12, -32($12)
	nop
	slt	$13, $12, $11
	beq	$13, $zero, $BB0_101
	nop
# BB#100:                               #   in Loop: Header=BB0_99 Depth=2
	addiu	$9, $7, -8
	lui	$11, %hi(y)
	addiu	$13, $11, %lo(y)
	sll	$11, $3, 2
	addu	$14, $13, $11
	lw	$11, -52($14)
	nop
	addu	$13, $13, $10
	sw	$12, -52($14)
	sw	$11, -32($13)
$BB0_101:                               #   in Loop: Header=BB0_99 Depth=2
	lui	$12, %hi(y)
	addiu	$12, $12, %lo(y)
	addu	$12, $12, $10
	lw	$12, -28($12)
	nop
	slt	$13, $12, $11
	beq	$13, $zero, $BB0_103
	nop
# BB#102:                               #   in Loop: Header=BB0_99 Depth=2
	addiu	$9, $7, -7
	lui	$11, %hi(y)
	addiu	$13, $11, %lo(y)
	sll	$11, $3, 2
	addu	$14, $13, $11
	lw	$11, -52($14)
	nop
	addu	$13, $13, $10
	sw	$12, -52($14)
	sw	$11, -28($13)
$BB0_103:                               #   in Loop: Header=BB0_99 Depth=2
	lui	$12, %hi(y)
	addiu	$12, $12, %lo(y)
	addu	$12, $12, $10
	lw	$12, -24($12)
	nop
	slt	$13, $12, $11
	beq	$13, $zero, $BB0_105
	nop
# BB#104:                               #   in Loop: Header=BB0_99 Depth=2
	addiu	$9, $7, -6
	lui	$11, %hi(y)
	addiu	$13, $11, %lo(y)
	sll	$11, $3, 2
	addu	$14, $13, $11
	lw	$11, -52($14)
	nop
	addu	$13, $13, $10
	sw	$12, -52($14)
	sw	$11, -24($13)
$BB0_105:                               #   in Loop: Header=BB0_99 Depth=2
	lui	$12, %hi(y)
	addiu	$12, $12, %lo(y)
	addu	$12, $12, $10
	lw	$12, -20($12)
	nop
	slt	$13, $12, $11
	beq	$13, $zero, $BB0_107
	nop
# BB#106:                               #   in Loop: Header=BB0_99 Depth=2
	addiu	$9, $7, -5
	lui	$11, %hi(y)
	addiu	$13, $11, %lo(y)
	sll	$11, $3, 2
	addu	$14, $13, $11
	lw	$11, -52($14)
	nop
	addu	$13, $13, $10
	sw	$12, -52($14)
	sw	$11, -20($13)
$BB0_107:                               #   in Loop: Header=BB0_99 Depth=2
	lui	$12, %hi(y)
	addiu	$12, $12, %lo(y)
	addu	$12, $12, $10
	lw	$12, -16($12)
	nop
	slt	$13, $12, $11
	beq	$13, $zero, $BB0_109
	nop
# BB#108:                               #   in Loop: Header=BB0_99 Depth=2
	addiu	$9, $7, -4
	lui	$11, %hi(y)
	addiu	$13, $11, %lo(y)
	sll	$11, $3, 2
	addu	$14, $13, $11
	lw	$11, -52($14)
	nop
	addu	$13, $13, $10
	sw	$12, -52($14)
	sw	$11, -16($13)
$BB0_109:                               #   in Loop: Header=BB0_99 Depth=2
	lui	$12, %hi(y)
	addiu	$12, $12, %lo(y)
	addu	$12, $12, $10
	lw	$12, -12($12)
	nop
	slt	$13, $12, $11
	beq	$13, $zero, $BB0_111
	nop
# BB#110:                               #   in Loop: Header=BB0_99 Depth=2
	addiu	$9, $7, -3
	lui	$11, %hi(y)
	addiu	$13, $11, %lo(y)
	sll	$11, $3, 2
	addu	$14, $13, $11
	lw	$11, -52($14)
	nop
	addu	$13, $13, $10
	sw	$12, -52($14)
	sw	$11, -12($13)
$BB0_111:                               #   in Loop: Header=BB0_99 Depth=2
	lui	$12, %hi(y)
	addiu	$12, $12, %lo(y)
	addu	$12, $12, $10
	lw	$12, -8($12)
	nop
	slt	$13, $12, $11
	beq	$13, $zero, $BB0_113
	nop
# BB#112:                               #   in Loop: Header=BB0_99 Depth=2
	addiu	$9, $7, -2
	lui	$11, %hi(y)
	addiu	$13, $11, %lo(y)
	sll	$11, $3, 2
	addu	$14, $13, $11
	lw	$11, -52($14)
	nop
	addu	$13, $13, $10
	sw	$12, -52($14)
	sw	$11, -8($13)
$BB0_113:                               #   in Loop: Header=BB0_99 Depth=2
	lui	$12, %hi(y)
	addiu	$12, $12, %lo(y)
	addu	$12, $12, $10
	lw	$12, -4($12)
	nop
	slt	$13, $12, $11
	beq	$13, $zero, $BB0_115
	nop
# BB#114:                               #   in Loop: Header=BB0_99 Depth=2
	addiu	$9, $7, -1
	lui	$11, %hi(y)
	addiu	$13, $11, %lo(y)
	sll	$11, $3, 2
	addu	$14, $13, $11
	lw	$11, -52($14)
	nop
	addu	$13, $13, $10
	sw	$12, -52($14)
	sw	$11, -4($13)
$BB0_115:                               #   in Loop: Header=BB0_99 Depth=2
	lui	$12, %hi(y)
	addiu	$12, $12, %lo(y)
	addu	$10, $12, $10
	lw	$12, 0($10)
	nop
	slt	$11, $12, $11
	beq	$11, $zero, $BB0_117
	nop
# BB#116:                               #   in Loop: Header=BB0_99 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	sll	$11, $3, 2
	addu	$11, $9, $11
	lw	$9, -52($11)
	nop
	sw	$12, -52($11)
	sw	$9, 0($10)
	addu	$9, $zero, $7
$BB0_117:                               #   in Loop: Header=BB0_99 Depth=2
	addiu	$10, $7, 1
	addiu	$7, $7, 9
	slti	$10, $10, 92
	bne	$10, $zero, $BB0_99
	nop
$BB0_118:                               # %._crit_edge73.i
                                        #   in Loop: Header=BB0_2 Depth=1
	lui	$10, 14563
	addiu	$7, $2, 4
	ori	$10, $10, 36409
	mult	$7, $10
	mfhi	$11
	sra	$10, $11, 1
	srl	$11, $11, 31
	addu	$10, $10, $11
	addiu	$11, $zero, 9
	mult	$10, $11
	mflo	$11
	addiu	$10, $zero, 100
	subu	$7, $7, $11
	subu	$7, $10, $7
	addiu	$10, $zero, 99
	slt	$10, $10, $7
	bne	$10, $zero, $BB0_122
	nop
$BB0_119:                               #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$10, %hi(y)
	sll	$12, $9, 2
	addiu	$11, $10, %lo(y)
	sll	$10, $7, 2
	addu	$12, $11, $12
	addu	$11, $11, $10
	lw	$11, 0($11)
	nop
	lw	$12, 0($12)
	nop
	slt	$12, $11, $12
	beq	$12, $zero, $BB0_121
	nop
# BB#120:                               #   in Loop: Header=BB0_119 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	sll	$12, $3, 2
	addu	$13, $9, $12
	lw	$12, -52($13)
	nop
	addu	$9, $9, $10
	sw	$11, -52($13)
	sw	$12, 0($9)
	addu	$9, $zero, $7
$BB0_121:                               #   in Loop: Header=BB0_119 Depth=2
	addiu	$11, $7, 1
	slti	$10, $7, 99
	addu	$7, $zero, $11
	bne	$10, $zero, $BB0_119
	nop
$BB0_122:                               # %._crit_edge79.i
                                        #   in Loop: Header=BB0_2 Depth=1
	addiu	$7, $3, -11
	addiu	$9, $zero, 91
	slt	$9, $9, $7
	bne	$9, $zero, $BB0_142
	nop
$BB0_123:                               #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$9, %hi(y)
	sll	$11, $8, 2
	addiu	$10, $9, %lo(y)
	sll	$9, $6, 2
	addu	$12, $10, $11
	addu	$11, $10, $9
	lw	$10, 0($12)
	nop
	lw	$11, -32($11)
	nop
	slt	$12, $11, $10
	beq	$12, $zero, $BB0_125
	nop
# BB#124:                               #   in Loop: Header=BB0_123 Depth=2
	addiu	$8, $6, -8
	lui	$10, %hi(y)
	addiu	$12, $10, %lo(y)
	sll	$10, $3, 2
	addu	$13, $12, $10
	lw	$10, -48($13)
	nop
	addu	$12, $12, $9
	sw	$11, -48($13)
	sw	$10, -32($12)
$BB0_125:                               #   in Loop: Header=BB0_123 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	addu	$11, $11, $9
	lw	$11, -28($11)
	nop
	slt	$12, $11, $10
	beq	$12, $zero, $BB0_127
	nop
# BB#126:                               #   in Loop: Header=BB0_123 Depth=2
	addiu	$8, $6, -7
	lui	$10, %hi(y)
	addiu	$12, $10, %lo(y)
	sll	$10, $3, 2
	addu	$13, $12, $10
	lw	$10, -48($13)
	nop
	addu	$12, $12, $9
	sw	$11, -48($13)
	sw	$10, -28($12)
$BB0_127:                               #   in Loop: Header=BB0_123 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	addu	$11, $11, $9
	lw	$11, -24($11)
	nop
	slt	$12, $11, $10
	beq	$12, $zero, $BB0_129
	nop
# BB#128:                               #   in Loop: Header=BB0_123 Depth=2
	addiu	$8, $6, -6
	lui	$10, %hi(y)
	addiu	$12, $10, %lo(y)
	sll	$10, $3, 2
	addu	$13, $12, $10
	lw	$10, -48($13)
	nop
	addu	$12, $12, $9
	sw	$11, -48($13)
	sw	$10, -24($12)
$BB0_129:                               #   in Loop: Header=BB0_123 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	addu	$11, $11, $9
	lw	$11, -20($11)
	nop
	slt	$12, $11, $10
	beq	$12, $zero, $BB0_131
	nop
# BB#130:                               #   in Loop: Header=BB0_123 Depth=2
	addiu	$8, $6, -5
	lui	$10, %hi(y)
	addiu	$12, $10, %lo(y)
	sll	$10, $3, 2
	addu	$13, $12, $10
	lw	$10, -48($13)
	nop
	addu	$12, $12, $9
	sw	$11, -48($13)
	sw	$10, -20($12)
$BB0_131:                               #   in Loop: Header=BB0_123 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	addu	$11, $11, $9
	lw	$11, -16($11)
	nop
	slt	$12, $11, $10
	beq	$12, $zero, $BB0_133
	nop
# BB#132:                               #   in Loop: Header=BB0_123 Depth=2
	addiu	$8, $6, -4
	lui	$10, %hi(y)
	addiu	$12, $10, %lo(y)
	sll	$10, $3, 2
	addu	$13, $12, $10
	lw	$10, -48($13)
	nop
	addu	$12, $12, $9
	sw	$11, -48($13)
	sw	$10, -16($12)
$BB0_133:                               #   in Loop: Header=BB0_123 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	addu	$11, $11, $9
	lw	$11, -12($11)
	nop
	slt	$12, $11, $10
	beq	$12, $zero, $BB0_135
	nop
# BB#134:                               #   in Loop: Header=BB0_123 Depth=2
	addiu	$8, $6, -3
	lui	$10, %hi(y)
	addiu	$12, $10, %lo(y)
	sll	$10, $3, 2
	addu	$13, $12, $10
	lw	$10, -48($13)
	nop
	addu	$12, $12, $9
	sw	$11, -48($13)
	sw	$10, -12($12)
$BB0_135:                               #   in Loop: Header=BB0_123 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	addu	$11, $11, $9
	lw	$11, -8($11)
	nop
	slt	$12, $11, $10
	beq	$12, $zero, $BB0_137
	nop
# BB#136:                               #   in Loop: Header=BB0_123 Depth=2
	addiu	$8, $6, -2
	lui	$10, %hi(y)
	addiu	$12, $10, %lo(y)
	sll	$10, $3, 2
	addu	$13, $12, $10
	lw	$10, -48($13)
	nop
	addu	$12, $12, $9
	sw	$11, -48($13)
	sw	$10, -8($12)
$BB0_137:                               #   in Loop: Header=BB0_123 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	addu	$11, $11, $9
	lw	$11, -4($11)
	nop
	slt	$12, $11, $10
	beq	$12, $zero, $BB0_139
	nop
# BB#138:                               #   in Loop: Header=BB0_123 Depth=2
	addiu	$8, $6, -1
	lui	$10, %hi(y)
	addiu	$12, $10, %lo(y)
	sll	$10, $3, 2
	addu	$13, $12, $10
	lw	$10, -48($13)
	nop
	addu	$12, $12, $9
	sw	$11, -48($13)
	sw	$10, -4($12)
$BB0_139:                               #   in Loop: Header=BB0_123 Depth=2
	lui	$11, %hi(y)
	addiu	$11, $11, %lo(y)
	addu	$9, $11, $9
	lw	$11, 0($9)
	nop
	slt	$10, $11, $10
	beq	$10, $zero, $BB0_141
	nop
# BB#140:                               #   in Loop: Header=BB0_123 Depth=2
	lui	$8, %hi(y)
	addiu	$8, $8, %lo(y)
	sll	$10, $3, 2
	addu	$10, $8, $10
	lw	$8, -48($10)
	nop
	sw	$11, -48($10)
	sw	$8, 0($9)
	addu	$8, $zero, $6
$BB0_141:                               #   in Loop: Header=BB0_123 Depth=2
	addiu	$9, $6, 1
	addiu	$6, $6, 9
	slti	$9, $9, 92
	bne	$9, $zero, $BB0_123
	nop
$BB0_142:                               # %._crit_edge84.i
                                        #   in Loop: Header=BB0_2 Depth=1
	lui	$9, 14563
	addiu	$6, $2, 3
	ori	$9, $9, 36409
	mult	$6, $9
	mfhi	$10
	sra	$9, $10, 1
	srl	$10, $10, 31
	addu	$9, $9, $10
	addiu	$10, $zero, 9
	mult	$9, $10
	mflo	$10
	addiu	$9, $zero, 100
	subu	$6, $6, $10
	subu	$6, $9, $6
	addiu	$9, $zero, 99
	slt	$9, $9, $6
	bne	$9, $zero, $BB0_146
	nop
$BB0_143:                               #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$9, %hi(y)
	sll	$11, $8, 2
	addiu	$10, $9, %lo(y)
	sll	$9, $6, 2
	addu	$11, $10, $11
	addu	$10, $10, $9
	lw	$10, 0($10)
	nop
	lw	$11, 0($11)
	nop
	slt	$11, $10, $11
	beq	$11, $zero, $BB0_145
	nop
# BB#144:                               #   in Loop: Header=BB0_143 Depth=2
	lui	$8, %hi(y)
	addiu	$8, $8, %lo(y)
	sll	$11, $3, 2
	addu	$12, $8, $11
	lw	$11, -48($12)
	nop
	addu	$8, $8, $9
	sw	$10, -48($12)
	sw	$11, 0($8)
	addu	$8, $zero, $6
$BB0_145:                               #   in Loop: Header=BB0_143 Depth=2
	addiu	$10, $6, 1
	slti	$9, $6, 99
	addu	$6, $zero, $10
	bne	$9, $zero, $BB0_143
	nop
$BB0_146:                               # %._crit_edge90.i
                                        #   in Loop: Header=BB0_2 Depth=1
	addiu	$6, $3, -10
	addiu	$8, $zero, 91
	slt	$8, $8, $6
	bne	$8, $zero, $BB0_166
	nop
$BB0_147:                               #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$8, %hi(y)
	sll	$10, $7, 2
	addiu	$9, $8, %lo(y)
	sll	$8, $5, 2
	addu	$11, $9, $10
	addu	$10, $9, $8
	lw	$9, 0($11)
	nop
	lw	$10, -32($10)
	nop
	slt	$11, $10, $9
	beq	$11, $zero, $BB0_149
	nop
# BB#148:                               #   in Loop: Header=BB0_147 Depth=2
	addiu	$7, $5, -8
	lui	$9, %hi(y)
	addiu	$11, $9, %lo(y)
	sll	$9, $3, 2
	addu	$12, $11, $9
	lw	$9, -44($12)
	nop
	addu	$11, $11, $8
	sw	$10, -44($12)
	sw	$9, -32($11)
$BB0_149:                               #   in Loop: Header=BB0_147 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	addu	$10, $10, $8
	lw	$10, -28($10)
	nop
	slt	$11, $10, $9
	beq	$11, $zero, $BB0_151
	nop
# BB#150:                               #   in Loop: Header=BB0_147 Depth=2
	addiu	$7, $5, -7
	lui	$9, %hi(y)
	addiu	$11, $9, %lo(y)
	sll	$9, $3, 2
	addu	$12, $11, $9
	lw	$9, -44($12)
	nop
	addu	$11, $11, $8
	sw	$10, -44($12)
	sw	$9, -28($11)
$BB0_151:                               #   in Loop: Header=BB0_147 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	addu	$10, $10, $8
	lw	$10, -24($10)
	nop
	slt	$11, $10, $9
	beq	$11, $zero, $BB0_153
	nop
# BB#152:                               #   in Loop: Header=BB0_147 Depth=2
	addiu	$7, $5, -6
	lui	$9, %hi(y)
	addiu	$11, $9, %lo(y)
	sll	$9, $3, 2
	addu	$12, $11, $9
	lw	$9, -44($12)
	nop
	addu	$11, $11, $8
	sw	$10, -44($12)
	sw	$9, -24($11)
$BB0_153:                               #   in Loop: Header=BB0_147 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	addu	$10, $10, $8
	lw	$10, -20($10)
	nop
	slt	$11, $10, $9
	beq	$11, $zero, $BB0_155
	nop
# BB#154:                               #   in Loop: Header=BB0_147 Depth=2
	addiu	$7, $5, -5
	lui	$9, %hi(y)
	addiu	$11, $9, %lo(y)
	sll	$9, $3, 2
	addu	$12, $11, $9
	lw	$9, -44($12)
	nop
	addu	$11, $11, $8
	sw	$10, -44($12)
	sw	$9, -20($11)
$BB0_155:                               #   in Loop: Header=BB0_147 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	addu	$10, $10, $8
	lw	$10, -16($10)
	nop
	slt	$11, $10, $9
	beq	$11, $zero, $BB0_157
	nop
# BB#156:                               #   in Loop: Header=BB0_147 Depth=2
	addiu	$7, $5, -4
	lui	$9, %hi(y)
	addiu	$11, $9, %lo(y)
	sll	$9, $3, 2
	addu	$12, $11, $9
	lw	$9, -44($12)
	nop
	addu	$11, $11, $8
	sw	$10, -44($12)
	sw	$9, -16($11)
$BB0_157:                               #   in Loop: Header=BB0_147 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	addu	$10, $10, $8
	lw	$10, -12($10)
	nop
	slt	$11, $10, $9
	beq	$11, $zero, $BB0_159
	nop
# BB#158:                               #   in Loop: Header=BB0_147 Depth=2
	addiu	$7, $5, -3
	lui	$9, %hi(y)
	addiu	$11, $9, %lo(y)
	sll	$9, $3, 2
	addu	$12, $11, $9
	lw	$9, -44($12)
	nop
	addu	$11, $11, $8
	sw	$10, -44($12)
	sw	$9, -12($11)
$BB0_159:                               #   in Loop: Header=BB0_147 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	addu	$10, $10, $8
	lw	$10, -8($10)
	nop
	slt	$11, $10, $9
	beq	$11, $zero, $BB0_161
	nop
# BB#160:                               #   in Loop: Header=BB0_147 Depth=2
	addiu	$7, $5, -2
	lui	$9, %hi(y)
	addiu	$11, $9, %lo(y)
	sll	$9, $3, 2
	addu	$12, $11, $9
	lw	$9, -44($12)
	nop
	addu	$11, $11, $8
	sw	$10, -44($12)
	sw	$9, -8($11)
$BB0_161:                               #   in Loop: Header=BB0_147 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	addu	$10, $10, $8
	lw	$10, -4($10)
	nop
	slt	$11, $10, $9
	beq	$11, $zero, $BB0_163
	nop
# BB#162:                               #   in Loop: Header=BB0_147 Depth=2
	addiu	$7, $5, -1
	lui	$9, %hi(y)
	addiu	$11, $9, %lo(y)
	sll	$9, $3, 2
	addu	$12, $11, $9
	lw	$9, -44($12)
	nop
	addu	$11, $11, $8
	sw	$10, -44($12)
	sw	$9, -4($11)
$BB0_163:                               #   in Loop: Header=BB0_147 Depth=2
	lui	$10, %hi(y)
	addiu	$10, $10, %lo(y)
	addu	$8, $10, $8
	lw	$10, 0($8)
	nop
	slt	$9, $10, $9
	beq	$9, $zero, $BB0_165
	nop
# BB#164:                               #   in Loop: Header=BB0_147 Depth=2
	lui	$7, %hi(y)
	addiu	$7, $7, %lo(y)
	sll	$9, $3, 2
	addu	$9, $7, $9
	lw	$7, -44($9)
	nop
	sw	$10, -44($9)
	sw	$7, 0($8)
	addu	$7, $zero, $5
$BB0_165:                               #   in Loop: Header=BB0_147 Depth=2
	addiu	$8, $5, 1
	addiu	$5, $5, 9
	slti	$8, $8, 92
	bne	$8, $zero, $BB0_147
	nop
$BB0_166:                               # %._crit_edge95.i
                                        #   in Loop: Header=BB0_2 Depth=1
	lui	$8, 14563
	addiu	$5, $2, 2
	ori	$8, $8, 36409
	mult	$5, $8
	mfhi	$9
	sra	$8, $9, 1
	srl	$9, $9, 31
	addu	$8, $8, $9
	addiu	$9, $zero, 9
	mult	$8, $9
	mflo	$9
	addiu	$8, $zero, 100
	subu	$5, $5, $9
	subu	$5, $8, $5
	addiu	$8, $zero, 99
	slt	$8, $8, $5
	bne	$8, $zero, $BB0_170
	nop
$BB0_167:                               #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$8, %hi(y)
	sll	$10, $7, 2
	addiu	$9, $8, %lo(y)
	sll	$8, $5, 2
	addu	$10, $9, $10
	addu	$9, $9, $8
	lw	$9, 0($9)
	nop
	lw	$10, 0($10)
	nop
	slt	$10, $9, $10
	beq	$10, $zero, $BB0_169
	nop
# BB#168:                               #   in Loop: Header=BB0_167 Depth=2
	lui	$7, %hi(y)
	addiu	$7, $7, %lo(y)
	sll	$10, $3, 2
	addu	$11, $7, $10
	lw	$10, -44($11)
	nop
	addu	$7, $7, $8
	sw	$9, -44($11)
	sw	$10, 0($7)
	addu	$7, $zero, $5
$BB0_169:                               #   in Loop: Header=BB0_167 Depth=2
	addiu	$9, $5, 1
	slti	$8, $5, 99
	addu	$5, $zero, $9
	bne	$8, $zero, $BB0_167
	nop
$BB0_170:                               # %._crit_edge101.i
                                        #   in Loop: Header=BB0_2 Depth=1
	addiu	$5, $3, -9
	addiu	$7, $zero, 91
	slt	$7, $7, $5
	bne	$7, $zero, $BB0_190
	nop
$BB0_171:                               #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$7, %hi(y)
	sll	$9, $6, 2
	addiu	$8, $7, %lo(y)
	sll	$7, $4, 2
	addu	$10, $8, $9
	addu	$9, $8, $7
	lw	$8, 0($10)
	nop
	lw	$9, -32($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_173
	nop
# BB#172:                               #   in Loop: Header=BB0_171 Depth=2
	addiu	$6, $4, -8
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -40($11)
	nop
	addu	$10, $10, $7
	sw	$9, -40($11)
	sw	$8, -32($10)
$BB0_173:                               #   in Loop: Header=BB0_171 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -28($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_175
	nop
# BB#174:                               #   in Loop: Header=BB0_171 Depth=2
	addiu	$6, $4, -7
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -40($11)
	nop
	addu	$10, $10, $7
	sw	$9, -40($11)
	sw	$8, -28($10)
$BB0_175:                               #   in Loop: Header=BB0_171 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -24($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_177
	nop
# BB#176:                               #   in Loop: Header=BB0_171 Depth=2
	addiu	$6, $4, -6
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -40($11)
	nop
	addu	$10, $10, $7
	sw	$9, -40($11)
	sw	$8, -24($10)
$BB0_177:                               #   in Loop: Header=BB0_171 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -20($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_179
	nop
# BB#178:                               #   in Loop: Header=BB0_171 Depth=2
	addiu	$6, $4, -5
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -40($11)
	nop
	addu	$10, $10, $7
	sw	$9, -40($11)
	sw	$8, -20($10)
$BB0_179:                               #   in Loop: Header=BB0_171 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -16($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_181
	nop
# BB#180:                               #   in Loop: Header=BB0_171 Depth=2
	addiu	$6, $4, -4
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -40($11)
	nop
	addu	$10, $10, $7
	sw	$9, -40($11)
	sw	$8, -16($10)
$BB0_181:                               #   in Loop: Header=BB0_171 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -12($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_183
	nop
# BB#182:                               #   in Loop: Header=BB0_171 Depth=2
	addiu	$6, $4, -3
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -40($11)
	nop
	addu	$10, $10, $7
	sw	$9, -40($11)
	sw	$8, -12($10)
$BB0_183:                               #   in Loop: Header=BB0_171 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -8($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_185
	nop
# BB#184:                               #   in Loop: Header=BB0_171 Depth=2
	addiu	$6, $4, -2
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -40($11)
	nop
	addu	$10, $10, $7
	sw	$9, -40($11)
	sw	$8, -8($10)
$BB0_185:                               #   in Loop: Header=BB0_171 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -4($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_187
	nop
# BB#186:                               #   in Loop: Header=BB0_171 Depth=2
	addiu	$6, $4, -1
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -40($11)
	nop
	addu	$10, $10, $7
	sw	$9, -40($11)
	sw	$8, -4($10)
$BB0_187:                               #   in Loop: Header=BB0_171 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$7, $9, $7
	lw	$9, 0($7)
	nop
	slt	$8, $9, $8
	beq	$8, $zero, $BB0_189
	nop
# BB#188:                               #   in Loop: Header=BB0_171 Depth=2
	lui	$6, %hi(y)
	addiu	$6, $6, %lo(y)
	sll	$8, $3, 2
	addu	$8, $6, $8
	lw	$6, -40($8)
	nop
	sw	$9, -40($8)
	sw	$6, 0($7)
	addu	$6, $zero, $4
$BB0_189:                               #   in Loop: Header=BB0_171 Depth=2
	addiu	$7, $4, 1
	addiu	$4, $4, 9
	slti	$7, $7, 92
	bne	$7, $zero, $BB0_171
	nop
$BB0_190:                               # %._crit_edge106.i
                                        #   in Loop: Header=BB0_2 Depth=1
	lui	$7, 14563
	addiu	$4, $2, 1
	ori	$7, $7, 36409
	mult	$4, $7
	mfhi	$8
	sra	$7, $8, 1
	srl	$8, $8, 31
	addu	$7, $7, $8
	addiu	$8, $zero, 9
	mult	$7, $8
	mflo	$8
	addiu	$7, $zero, 100
	subu	$4, $4, $8
	subu	$4, $7, $4
	addiu	$7, $zero, 99
	slt	$7, $7, $4
	bne	$7, $zero, $BB0_194
	nop
$BB0_191:                               #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$7, %hi(y)
	sll	$9, $6, 2
	addiu	$8, $7, %lo(y)
	sll	$7, $4, 2
	addu	$9, $8, $9
	addu	$8, $8, $7
	lw	$8, 0($8)
	nop
	lw	$9, 0($9)
	nop
	slt	$9, $8, $9
	beq	$9, $zero, $BB0_193
	nop
# BB#192:                               #   in Loop: Header=BB0_191 Depth=2
	lui	$6, %hi(y)
	addiu	$6, $6, %lo(y)
	sll	$9, $3, 2
	addu	$10, $6, $9
	lw	$9, -40($10)
	nop
	addu	$6, $6, $7
	sw	$8, -40($10)
	sw	$9, 0($6)
	addu	$6, $zero, $4
$BB0_193:                               #   in Loop: Header=BB0_191 Depth=2
	addiu	$8, $4, 1
	slti	$7, $4, 99
	addu	$4, $zero, $8
	bne	$7, $zero, $BB0_191
	nop
$BB0_194:                               # %._crit_edge112.i
                                        #   in Loop: Header=BB0_2 Depth=1
	addiu	$6, $zero, 91
	addiu	$4, $3, -8
	slt	$6, $6, $4
	bne	$6, $zero, $BB0_215
	nop
# BB#195:                               # %.lr.ph116.i
                                        #   in Loop: Header=BB0_2 Depth=1
	addu	$6, $zero, $3
$BB0_196:                               #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$7, %hi(y)
	sll	$9, $5, 2
	addiu	$8, $7, %lo(y)
	sll	$7, $6, 2
	addu	$10, $8, $9
	addu	$9, $8, $7
	lw	$8, 0($10)
	nop
	lw	$9, -32($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_198
	nop
# BB#197:                               #   in Loop: Header=BB0_196 Depth=2
	addiu	$5, $6, -8
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -36($11)
	nop
	addu	$10, $10, $7
	sw	$9, -36($11)
	sw	$8, -32($10)
$BB0_198:                               #   in Loop: Header=BB0_196 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -28($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_200
	nop
# BB#199:                               #   in Loop: Header=BB0_196 Depth=2
	addiu	$5, $6, -7
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -36($11)
	nop
	addu	$10, $10, $7
	sw	$9, -36($11)
	sw	$8, -28($10)
$BB0_200:                               #   in Loop: Header=BB0_196 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -24($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_202
	nop
# BB#201:                               #   in Loop: Header=BB0_196 Depth=2
	addiu	$5, $6, -6
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -36($11)
	nop
	addu	$10, $10, $7
	sw	$9, -36($11)
	sw	$8, -24($10)
$BB0_202:                               #   in Loop: Header=BB0_196 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -20($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_204
	nop
# BB#203:                               #   in Loop: Header=BB0_196 Depth=2
	addiu	$5, $6, -5
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -36($11)
	nop
	addu	$10, $10, $7
	sw	$9, -36($11)
	sw	$8, -20($10)
$BB0_204:                               #   in Loop: Header=BB0_196 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -16($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_206
	nop
# BB#205:                               #   in Loop: Header=BB0_196 Depth=2
	addiu	$5, $6, -4
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -36($11)
	nop
	addu	$10, $10, $7
	sw	$9, -36($11)
	sw	$8, -16($10)
$BB0_206:                               #   in Loop: Header=BB0_196 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -12($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_208
	nop
# BB#207:                               #   in Loop: Header=BB0_196 Depth=2
	addiu	$5, $6, -3
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -36($11)
	nop
	addu	$10, $10, $7
	sw	$9, -36($11)
	sw	$8, -12($10)
$BB0_208:                               #   in Loop: Header=BB0_196 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -8($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_210
	nop
# BB#209:                               #   in Loop: Header=BB0_196 Depth=2
	addiu	$5, $6, -2
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -36($11)
	nop
	addu	$10, $10, $7
	sw	$9, -36($11)
	sw	$8, -8($10)
$BB0_210:                               #   in Loop: Header=BB0_196 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$9, $9, $7
	lw	$9, -4($9)
	nop
	slt	$10, $9, $8
	beq	$10, $zero, $BB0_212
	nop
# BB#211:                               #   in Loop: Header=BB0_196 Depth=2
	addiu	$5, $6, -1
	lui	$8, %hi(y)
	addiu	$10, $8, %lo(y)
	sll	$8, $3, 2
	addu	$11, $10, $8
	lw	$8, -36($11)
	nop
	addu	$10, $10, $7
	sw	$9, -36($11)
	sw	$8, -4($10)
$BB0_212:                               #   in Loop: Header=BB0_196 Depth=2
	lui	$9, %hi(y)
	addiu	$9, $9, %lo(y)
	addu	$7, $9, $7
	lw	$9, 0($7)
	nop
	slt	$8, $9, $8
	beq	$8, $zero, $BB0_214
	nop
# BB#213:                               #   in Loop: Header=BB0_196 Depth=2
	lui	$5, %hi(y)
	addiu	$5, $5, %lo(y)
	sll	$8, $3, 2
	addu	$8, $5, $8
	lw	$5, -36($8)
	nop
	sw	$9, -36($8)
	sw	$5, 0($7)
	addu	$5, $zero, $6
$BB0_214:                               #   in Loop: Header=BB0_196 Depth=2
	addiu	$7, $6, 1
	addiu	$6, $6, 9
	slti	$7, $7, 92
	bne	$7, $zero, $BB0_196
	nop
$BB0_215:                               # %._crit_edge117.i
                                        #   in Loop: Header=BB0_2 Depth=1
	lui	$6, 14563
	ori	$6, $6, 36409
	mult	$2, $6
	mfhi	$7
	sra	$6, $7, 1
	srl	$7, $7, 31
	addu	$6, $6, $7
	addiu	$7, $zero, 9
	mult	$6, $7
	mflo	$7
	addiu	$6, $zero, 100
	subu	$7, $2, $7
	subu	$6, $6, $7
	addiu	$7, $zero, 99
	slt	$7, $7, $6
	beq	$7, $zero, $BB0_222
	nop
$BB0_216:                               # %.loopexit12.i
                                        #   in Loop: Header=BB0_2 Depth=1
	addiu	$3, $3, 9
	addiu	$2, $2, -9
	addiu	$16, $zero, 0
	addiu	$5, $zero, 90
	slt	$4, $5, $4
	beq	$4, $zero, $BB0_2
	nop
# BB#217:
	addiu	$17, $zero, -100
$BB0_218:                               # %sort.exit
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
	bne	$16, $17, $BB0_218
	nop
# BB#219:
	lui	$2, %hi($.str1)
	addiu	$16, $zero, 0
	addiu	$4, $2, %lo($.str1)
	jal	printf
	nop
	addiu	$17, $zero, -100
$BB0_220:                               # =>This Inner Loop Header: Depth=1
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
	bne	$16, $17, $BB0_220
	nop
# BB#221:
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
$BB0_222:                               #   Parent Loop BB0_2 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	lui	$7, %hi(y)
	sll	$9, $5, 2
	addiu	$8, $7, %lo(y)
	sll	$7, $6, 2
	addu	$9, $8, $9
	addu	$8, $8, $7
	lw	$8, 0($8)
	nop
	lw	$9, 0($9)
	nop
	slt	$9, $8, $9
	beq	$9, $zero, $BB0_224
	nop
# BB#223:                               #   in Loop: Header=BB0_222 Depth=2
	lui	$5, %hi(y)
	addiu	$5, $5, %lo(y)
	sll	$9, $3, 2
	addu	$10, $5, $9
	lw	$9, -36($10)
	nop
	addu	$5, $5, $7
	sw	$8, -36($10)
	sw	$9, 0($5)
	addu	$5, $zero, $6
$BB0_224:                               #   in Loop: Header=BB0_222 Depth=2
	addiu	$8, $6, 1
	slti	$7, $6, 99
	addu	$6, $zero, $8
	beq	$7, $zero, $BB0_216
	nop
	j	$BB0_222
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


