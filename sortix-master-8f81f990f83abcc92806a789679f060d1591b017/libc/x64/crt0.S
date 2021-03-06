/*
 * Copyright (c) 2011, 2012, 2014 Jonas 'Sortie' Termansen.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 *
 * x64/crt0.S
 * Implement the _start symbol at which execution begins which performs the
 * task of initializing the standard library and executing the main function.
 */

.section .text

.global _start
.global __start
.type _start, @function
.type __start, @function
_start:
__start:
	# Set up end of the stack frame linked list.
	xorl %ebp, %ebp
	pushq %rbp # rip=0
	pushq %rbp # rbp=0
	movq %rsp, %rbp

	movq %rcx, environ # envp

	# Initialize the standard library.
	subq $8, %rsp
	pushq %rsi
	pushq %rdi
	pushq %rcx
	call initialize_standard_library

	# Run the global constructors.
	call _init

	# Run main
	popq %rdx # Note! envp is now %rdx (previously %rcx)
	popq %rdi
	popq %rsi
	addq $8, %rsp
	call main

	# Terminate the process with main's exit code.
	movl %eax, %edi
	call exit
.size _start, .-_start
.size __start, .-__start
