.define _out_byte
_out_byte:
	push bp
	mov bp, sp
	movb al, 6(bp)
	mov dx, 4(bp)
	outb dx
	pop bp
	ret

.define _in_byte
_in_byte:
	push bp
	mov bp, sp
	mov dx, 4(bp)
	inb dx
	pop bp
	ret

.define _memory_write
_memory_write:
	push bp
	mov bp, sp
	mov ax, 4(bp)
	mov es, ax
	mov bx, 6(bp)
	mov ax, 8(bp)
	eseg mov (bx), ax
	pop bp
	ret

.define _cli
.define _sti
_cli:
	cli
	ret
_sti:
	sti
	ret

.define _idle
_idle:
	hlt
	ret

