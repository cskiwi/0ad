/* Copyright (c) 2010 Wildfire Games
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*
 * bring in Crypto++ SHA algorithms
 */

#ifndef INCLUDED_CRYPTOPP
#define INCLUDED_CRYPTOPP

// not W4-clean
#if MSC_VERSION
# pragma warning(push, 3)
#endif

// Crypto++ and SpiderMonkey both define IS_(LITTLE|BIG)_ENDIAN,
// so undefine SM's to avoid redefinition warnings
#undef IS_LITTLE_ENDIAN
#undef IS_BIG_ENDIAN

#include "cryptopp/sha.h"

#if MSC_VERSION
# pragma warning(pop)
#endif

#endif	// #ifndef INCLUDED_CRYPTOPP
