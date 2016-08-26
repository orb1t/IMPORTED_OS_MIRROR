/*
 * Copyright (c) 2012, 2013, 2014 Jonas 'Sortie' Termansen.
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
 * sortix/__/dt.h
 * Defines the values for the d_type field.
 */

#ifndef INCLUDE_SORTIX____DT_H
#define INCLUDE_SORTIX____DT_H

#include <sys/cdefs.h>

#ifdef __cplusplus
extern "C" {
#endif

#define __DT_UNKNOWN 0x0
#define __DT_FIFO 0x1
#define __DT_CHR 0x2
#define __DT_DIR 0x4
#define __DT_BLK 0x6
#define __DT_REG 0x8
#define __DT_LNK 0xA
#define __DT_SOCK 0xC
#define __DT_BITS 0xF

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
