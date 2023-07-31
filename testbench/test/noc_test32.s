	.file	"noc_loadstore_test.c"
	.option nopic
	.attribute arch, "rv32i2p1_m2p0_a2p1_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.section	.rodata
	.align	2
.LC0:
	.string	"TEST PASSED!"
	.align	2
.LC1:
	.string	"TEST FAILED!"
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-32
	sw	ra,28(sp)
	sw	s0,24(sp)
	addi	s0,sp,32
	li	a4,0
	li	a5,100
	sw	a5,0(a4)
	li	a5,536870912
	li	a4,200
	sw	a4,0(a5)
	li	a5,1073741824
	li	a4,300
	sw	a4,0(a5)
	li	a5,1610612736
	li	a4,400
	sw	a4,0(a5)
	li	a5,-2147483648
	li	a4,500
	sw	a4,0(a5)
	li	a5,-1610612736
	li	a4,600
	sw	a4,0(a5)
	li	a5,-1073741824
	li	a4,700
	sw	a4,0(a5)
	li	a5,-536870912
	li	a4,800
	sw	a4,0(a5)
	li	a5,0
	lw	a4,0(a5)
	li	a5,536870912
	lw	a5,0(a5)
	add	a4,a4,a5
	li	a5,1073741824
	lw	a5,0(a5)
	add	a4,a4,a5
	li	a5,1610612736
	lw	a5,0(a5)
	add	a4,a4,a5
	li	a5,-2147483648
	lw	a5,0(a5)
	add	a4,a4,a5
	li	a5,-1610612736
	lw	a5,0(a5)
	add	a4,a4,a5
	li	a5,-1073741824
	lw	a5,0(a5)
	add	a4,a4,a5
	li	a5,-536870912
	lw	a5,0(a5)
	add	a5,a4,a5
	sw	a5,-20(s0)
	lw	a4,-20(s0)
	li	a5,4096
	addi	a5,a5,-496
	bne	a4,a5,.L2
	lui	a5,%hi(.LC0)
	addi	a0,a5,%lo(.LC0)
	call	printf
	li	a5,0
	j	.L3
.L2:
	lui	a5,%hi(.LC1)
	addi	a0,a5,%lo(.LC1)
	call	printf
	li	a5,1
.L3:
	mv	a0,a5
	lw	ra,28(sp)
	lw	s0,24(sp)
	addi	sp,sp,32
	jr	ra
	.size	main, .-main
	.ident	"GCC: () 12.2.0"
	.section	.note.GNU-stack,"",@progbits
