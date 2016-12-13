	.section .mdebug.abi32
	.previous
	.file	"output/mul_t.sw.ll"
	.section	_main_section,"ax",@progbits
	.globl	main
	.align	2
	.type	main,@function
	.ent	main                    # @main
main:
$tmp2:
	.cfi_startproc
	.frame	$sp,840,$ra
	.mask 	0x800F0000,-4
	.fmask	0x00000000,0
# BB#0:
	.set	noreorder
	.set	nomacro
	addiu	$sp, $sp, -840
$tmp3:
	.cfi_def_cfa_offset 840
	sw	$ra, 836($sp)
	sw	$19, 832($sp)
	sw	$18, 828($sp)
	sw	$17, 824($sp)
	sw	$16, 820($sp)
$tmp4:
	.cfi_offset 31, -4
$tmp5:
	.cfi_offset 19, -8
$tmp6:
	.cfi_offset 18, -12
$tmp7:
	.cfi_offset 17, -16
$tmp8:
	.cfi_offset 16, -20
	addiu	$3, $zero, 0
	addiu	$4, $zero, -10
$BB0_1:                                 # %.lr.ph55.i
                                        # =>This Inner Loop Header: Depth=1
	lui	$2, %hi(input)
	mult	$3, $4
	mflo	$5
	addiu	$2, $2, %lo(input)
	sll	$6, $3, 2
	subu	$6, $2, $6
	addiu	$2, $sp, 420
	sll	$7, $5, 2
	lw	$5, 0($6)
	nop
	addu	$6, $2, $7
	sw	$5, 0($6)
	sw	$5, 4($6)
	sw	$5, 8($6)
	sw	$5, 12($6)
	sw	$5, 16($6)
	sw	$5, 20($6)
	sw	$5, 24($6)
	sw	$5, 28($6)
	addiu	$3, $3, -1
	sw	$5, 32($6)
	sw	$5, 36($6)
	bne	$3, $4, $BB0_1
	nop
# BB#2:                                 # %.lr.ph50.i.preheader
	addiu	$4, $zero, 0
	addiu	$5, $zero, -10
$BB0_3:                                 # %.lr.ph50.i
                                        # =>This Inner Loop Header: Depth=1
	lui	$3, %hi(input)
	mult	$4, $5
	mflo	$6
	addiu	$3, $3, %lo(input)
	sll	$7, $4, 2
	subu	$7, $3, $7
	addiu	$3, $sp, 20
	sll	$8, $6, 2
	lw	$6, 0($7)
	nop
	addu	$7, $3, $8
	sw	$6, 0($7)
	sw	$6, 4($7)
	sw	$6, 8($7)
	sw	$6, 12($7)
	sw	$6, 16($7)
	sw	$6, 20($7)
	sw	$6, 24($7)
	sw	$6, 28($7)
	addiu	$4, $4, -1
	sw	$6, 32($7)
	sw	$6, 36($7)
	bne	$4, $5, $BB0_3
	nop
# BB#4:                                 # %.preheader6.i.preheader
	addiu	$16, $zero, 0
	addu	$4, $zero, $16
$BB0_5:                                 # %.preheader6.i
                                        # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_8 Depth 2
                                        #     Child Loop BB0_6 Depth 2
	addiu	$5, $zero, 10
	mult	$4, $5
	mflo	$5
	sll	$5, $5, 2
	addu	$14, $2, $5
	lw	$5, 0($14)
	nop
	lw	$6, 4($14)
	nop
	lw	$7, 8($14)
	nop
	lw	$8, 12($14)
	nop
	lw	$9, 16($14)
	nop
	lw	$10, 20($14)
	nop
	lw	$11, 24($14)
	nop
	lw	$12, 28($14)
	nop
	lw	$13, 32($14)
	nop
	lw	$14, 36($14)
	nop
	addiu	$15, $zero, -10
$BB0_6:                                 # %.lr.ph31.i
                                        #   Parent Loop BB0_5 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	sll	$24, $15, 2
	addu	$24, $3, $24
	lw	$17, 40($24)
	nop
	lw	$25, 80($24)
	nop
	mult	$17, $5
	mflo	$17
	lw	$18, 120($24)
	nop
	mult	$25, $6
	mflo	$25
	addu	$19, $17, $16
	lw	$17, 160($24)
	nop
	mult	$18, $7
	mflo	$16
	addu	$18, $25, $19
	lw	$25, 200($24)
	nop
	mult	$17, $8
	mflo	$17
	addu	$18, $16, $18
	lw	$16, 240($24)
	nop
	mult	$25, $9
	mflo	$25
	addu	$18, $17, $18
	lw	$17, 280($24)
	nop
	mult	$16, $10
	mflo	$16
	addu	$18, $25, $18
	lw	$25, 320($24)
	nop
	mult	$17, $11
	mflo	$17
	addu	$18, $16, $18
	lw	$16, 360($24)
	nop
	mult	$25, $12
	mflo	$25
	addu	$18, $17, $18
	lw	$17, 400($24)
	nop
	mult	$16, $13
	mflo	$24
	addu	$16, $25, $18
	mult	$17, $14
	mflo	$25
	addu	$24, $24, $16
	addiu	$15, $15, 1
	addu	$16, $25, $24
	bne	$15, $zero, $BB0_6
	nop
# BB#7:                                 # %.preheader5.i
                                        #   in Loop: Header=BB0_5 Depth=1
	addiu	$5, $zero, 10
	mult	$4, $5
	mflo	$5
	sll	$5, $5, 2
	addu	$14, $2, $5
	lw	$5, 40($14)
	nop
	lw	$6, 44($14)
	nop
	lw	$7, 48($14)
	nop
	lw	$8, 52($14)
	nop
	lw	$9, 56($14)
	nop
	lw	$10, 60($14)
	nop
	lw	$11, 64($14)
	nop
	lw	$12, 68($14)
	nop
	lw	$13, 72($14)
	nop
	lw	$14, 76($14)
	nop
	addiu	$15, $zero, -10
$BB0_8:                                 # %.lr.ph38.i
                                        #   Parent Loop BB0_5 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	sll	$24, $15, 2
	addu	$24, $3, $24
	lw	$17, 40($24)
	nop
	lw	$25, 80($24)
	nop
	mult	$17, $5
	mflo	$17
	lw	$18, 120($24)
	nop
	mult	$25, $6
	mflo	$25
	addu	$19, $17, $16
	lw	$17, 160($24)
	nop
	mult	$18, $7
	mflo	$16
	addu	$18, $25, $19
	lw	$25, 200($24)
	nop
	mult	$17, $8
	mflo	$17
	addu	$18, $16, $18
	lw	$16, 240($24)
	nop
	mult	$25, $9
	mflo	$25
	addu	$18, $17, $18
	lw	$17, 280($24)
	nop
	mult	$16, $10
	mflo	$16
	addu	$18, $25, $18
	lw	$25, 320($24)
	nop
	mult	$17, $11
	mflo	$17
	addu	$18, $16, $18
	lw	$16, 360($24)
	nop
	mult	$25, $12
	mflo	$25
	addu	$18, $17, $18
	lw	$17, 400($24)
	nop
	mult	$16, $13
	mflo	$24
	addu	$16, $25, $18
	mult	$17, $14
	mflo	$25
	addu	$24, $24, $16
	addiu	$15, $15, 1
	addu	$16, $25, $24
	bne	$15, $zero, $BB0_8
	nop
# BB#9:                                 # %._crit_edge44.i
                                        #   in Loop: Header=BB0_5 Depth=1
	addiu	$4, $4, 2
	slti	$5, $4, 9
	bne	$5, $zero, $BB0_5
	nop
# BB#10:                                # %mat3x3.exit
	lui	$3, %hi($.str)
	lui	$2, 5
	addiu	$4, $3, %lo($.str)
	ori	$17, $2, 10880
	addu	$5, $zero, $16
	jal	printf
	nop
	bne	$16, $17, $BB0_12
	nop
# BB#11:
	lui	$2, %hi($.str1)
	addiu	$4, $2, %lo($.str1)
	j	$BB0_13
	nop
$BB0_12:
	lui	$2, %hi($.str2)
	addiu	$4, $2, %lo($.str2)
$BB0_13:
	jal	printf
	nop
	addiu	$2, $zero, 0
	lw	$16, 820($sp)
	nop
	lw	$17, 824($sp)
	nop
	lw	$18, 828($sp)
	nop
	lw	$19, 832($sp)
	nop
	lw	$ra, 836($sp)
	nop
	addiu	$sp, $sp, 840
	jr	$ra
	nop
	.set	macro
	.set	reorder
	.end	main
$tmp9:
	.size	main, ($tmp9)-main
$tmp10:
	.cfi_endproc
$eh_func_end0:

	.type	input,@object           # @input
	.section	.rodata,"a",@progbits
	.align	2
input:
	.4byte	28                      # 0x1c
	.4byte	2                       # 0x2
	.4byte	17                      # 0x11
	.4byte	15                      # 0xf
	.4byte	23                      # 0x17
	.4byte	25                      # 0x19
	.4byte	26                      # 0x1a
	.4byte	12                      # 0xc
	.4byte	24                      # 0x18
	.4byte	12                      # 0xc
	.4byte	62                      # 0x3e
	.4byte	17                      # 0x11
	.4byte	20                      # 0x14
	.4byte	29                      # 0x1d
	.4byte	63                      # 0x3f
	.4byte	26                      # 0x1a
	.4byte	24                      # 0x18
	.4byte	12                      # 0xc
	.4byte	2                       # 0x2
	.4byte	6                       # 0x6
	.4byte	11                      # 0xb
	.4byte	8                       # 0x8
	.4byte	27                      # 0x1b
	.4byte	12                      # 0xc
	.4byte	12                      # 0xc
	.4byte	23                      # 0x17
	.4byte	62                      # 0x3e
	.4byte	22                      # 0x16
	.4byte	67                      # 0x43
	.4byte	35                      # 0x23
	.4byte	29                      # 0x1d
	.4byte	2                       # 0x2
	.4byte	22                      # 0x16
	.4byte	58                      # 0x3a
	.4byte	69                      # 0x45
	.4byte	67                      # 0x43
	.4byte	93                      # 0x5d
	.4byte	56                      # 0x38
	.4byte	11                      # 0xb
	.4byte	42                      # 0x2a
	.4byte	19                      # 0x13
	.4byte	23                      # 0x17
	.4byte	1                       # 0x1
	.4byte	19                      # 0x13
	.4byte	84                      # 0x54
	.4byte	7                       # 0x7
	.4byte	8                       # 0x8
	.4byte	24                      # 0x18
	.4byte	15                      # 0xf
	.4byte	70                      # 0x46
	.4byte	13                      # 0xd
	.4byte	26                      # 0x1a
	.4byte	1                       # 0x1
	.4byte	80                      # 0x50
	.4byte	6                       # 0x6
	.4byte	23                      # 0x17
	.4byte	62                      # 0x3e
	.4byte	170                     # 0xaa
	.4byte	196                     # 0xc4
	.4byte	181                     # 0xb5
	.4byte	5                       # 0x5
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
	.4byte	64                      # 0x40
	.4byte	43                      # 0x2b
	.4byte	50                      # 0x32
	.4byte	87                      # 0x57
	.4byte	8                       # 0x8
	.4byte	26                      # 0x1a
	.4byte	78                      # 0x4e
	.4byte	88                      # 0x58
	.4byte	4                       # 0x4
	.4byte	3                       # 0x3
	.4byte	51                      # 0x33
	.4byte	24                      # 0x18
	.4byte	9                       # 0x9
	.4byte	32                      # 0x20
	.4byte	56                      # 0x38
	.4byte	16                      # 0x10
	.4byte	68                      # 0x44
	.4byte	39                      # 0x27
	.4byte	12                      # 0xc
	.4byte	26                      # 0x1a
	.4byte	86                      # 0x56
	.4byte	4                       # 0x4
	.4byte	39                      # 0x27
	.4byte	27                      # 0x1b
	.size	input, 400

	.type	$.str,@object           # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
$.str:
	.asciz	 "\nSum: %d\n\n"
	.size	$.str, 11

	.type	$.str1,@object          # @.str1
$.str1:
	.asciz	 "PASS\n"
	.size	$.str1, 6

	.type	$.str2,@object          # @.str2
$.str2:
	.asciz	 "FAIL\n"
	.size	$.str2, 6


