/* ----------------------------------------------------------------- */
/*           The Japanese TTS System "Open JTalk"                    */
/*           developed by HTS Working Group                          */
/*           http://open-jtalk.sourceforge.net/                      */
/* ----------------------------------------------------------------- */
/*                                                                   */
/*  Copyright (c) 2008-2014  Nagoya Institute of Technology          */
/*                           Department of Computer Science          */
/*                                                                   */
/* All rights reserved.                                              */
/*                                                                   */
/* Redistribution and use in source and binary forms, with or        */
/* without modification, are permitted provided that the following   */
/* conditions are met:                                               */
/*                                                                   */
/* - Redistributions of source code must retain the above copyright  */
/*   notice, this list of conditions and the following disclaimer.   */
/* - Redistributions in binary form must reproduce the above         */
/*   copyright notice, this list of conditions and the following     */
/*   disclaimer in the documentation and/or other materials provided */
/*   with the distribution.                                          */
/* - Neither the name of the HTS working group nor the names of its  */
/*   contributors may be used to endorse or promote products derived */
/*   from this software without specific prior written permission.   */
/*                                                                   */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND            */
/* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,       */
/* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF          */
/* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE          */
/* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS */
/* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,          */
/* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED   */
/* TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,     */
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON */
/* ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,   */
/* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY    */
/* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE           */
/* POSSIBILITY OF SUCH DAMAGE.                                       */
/* ----------------------------------------------------------------- */

#ifndef NJD_SET_PRONUNCIATION_RULE_H
#define NJD_SET_PRONUNCIATION_RULE_H

#ifdef __cplusplus
#define NJD_SET_PRONUNCIATION_RULE_H_START extern "C" {
#define NJD_SET_PRONUNCIATION_RULE_H_END   }
#else
#define NJD_SET_PRONUNCIATION_RULE_H_START
#define NJD_SET_PRONUNCIATION_RULE_H_END
#endif                          /* __CPLUSPLUS */

NJD_SET_PRONUNCIATION_RULE_H_START;

static const char *njd_set_pronunciation_list[] = {
   "\x83\x94\x83\x87", "\x83\x94\x83\x87", "1",
   "\x83\x94\x83\x85", "\x83\x94\x83\x85", "1",
   "\x83\x94\x83\x83", "\x83\x94\x83\x83", "1",
   "\x83\x94\x83\x48", "\x83\x94\x83\x48", "1",
   "\x83\x94\x83\x46", "\x83\x94\x83\x46", "1",
   "\x83\x94\x83\x42", "\x83\x94\x83\x42", "1",
   "\x83\x94\x83\x40", "\x83\x94\x83\x40", "1",
   "\x83\x94", "\x83\x94", "1",
   "\x83\x93", "\x83\x93", "1",
   "\x83\x92", "\x83\x92", "1",
   "\x83\x91", "\x83\x91", "1",
   "\x83\x90", "\x83\x90", "1",
   "\x83\x8f", "\x83\x8f", "1",
   "\x83\x8d", "\x83\x8d", "1",
   "\x83\x8c", "\x83\x8c", "1",
   "\x83\x8b", "\x83\x8b", "1",
   "\x83\x8a\x83\x87", "\x83\x8a\x83\x87", "1",
   "\x83\x8a\x83\x85", "\x83\x8a\x83\x85", "1",
   "\x83\x8a\x83\x83", "\x83\x8a\x83\x83", "1",
   "\x83\x8a\x83\x46", "\x83\x8a\x83\x46", "1",
   "\x83\x8a", "\x83\x8a", "1",
   "\x83\x89", "\x83\x89", "1",
   "\x83\x88", "\x83\x88", "1",
   "\x83\x87", "\x83\x87", "1",
   "\x83\x86", "\x83\x86", "1",
   "\x83\x85", "\x83\x85", "1",
   "\x83\x84", "\x83\x84", "1",
   "\x83\x83", "\x83\x83", "1",
   "\x83\x82", "\x83\x82", "1",
   "\x83\x81", "\x83\x81", "1",
   "\x83\x80", "\x83\x80", "1",
   "\x83\x7e\x83\x87", "\x83\x7e\x83\x87", "1",
   "\x83\x7e\x83\x85", "\x83\x7e\x83\x85", "1",
   "\x83\x7e\x83\x83", "\x83\x7e\x83\x83", "1",
   "\x83\x7e\x83\x46", "\x83\x7e\x83\x46", "1",
   "\x83\x7e", "\x83\x7e", "1",
   "\x83\x7d", "\x83\x7d", "1",
   "\x83\x7c", "\x83\x7c", "1",
   "\x83\x7b", "\x83\x7b", "1",
   "\x83\x7a", "\x83\x7a", "1",
   "\x83\x79", "\x83\x79", "1",
   "\x83\x78", "\x83\x78", "1",
   "\x83\x77", "\x83\x77", "1",
   "\x83\x76", "\x83\x76", "1",
   "\x83\x75", "\x83\x75", "1",
   "\x83\x74\x83\x48", "\x83\x74\x83\x48", "1",
   "\x83\x74\x83\x46", "\x83\x74\x83\x46", "1",
   "\x83\x74\x83\x42", "\x83\x74\x83\x42", "1",
   "\x83\x74\x83\x40", "\x83\x74\x83\x40", "1",
   "\x83\x74", "\x83\x74", "1",
   "\x83\x73\x83\x87", "\x83\x73\x83\x87", "1",
   "\x83\x73\x83\x85", "\x83\x73\x83\x85", "1",
   "\x83\x73\x83\x83", "\x83\x73\x83\x83", "1",
   "\x83\x73\x83\x46", "\x83\x73\x83\x46", "1",
   "\x83\x73", "\x83\x73", "1",
   "\x83\x72\x83\x87", "\x83\x72\x83\x87", "1",
   "\x83\x72\x83\x85", "\x83\x72\x83\x85", "1",
   "\x83\x72\x83\x83", "\x83\x72\x83\x83", "1",
   "\x83\x72\x83\x46", "\x83\x72\x83\x46", "1",
   "\x83\x72", "\x83\x72", "1",
   "\x83\x71\x83\x87", "\x83\x71\x83\x87", "1",
   "\x83\x71\x83\x85", "\x83\x71\x83\x85", "1",
   "\x83\x71\x83\x83", "\x83\x71\x83\x83", "1",
   "\x83\x71\x83\x46", "\x83\x71\x83\x46", "1",
   "\x83\x71", "\x83\x71", "1",
   "\x83\x70", "\x83\x70", "1",
   "\x83\x6f", "\x83\x6f", "1",
   "\x83\x6e", "\x83\x6e", "1",
   "\x83\x6d", "\x83\x6d", "1",
   "\x83\x6c", "\x83\x6c", "1",
   "\x83\x6b", "\x83\x6b", "1",
   "\x83\x6a\x83\x87", "\x83\x6a\x83\x87", "1",
   "\x83\x6a\x83\x85", "\x83\x6a\x83\x85", "1",
   "\x83\x6a\x83\x83", "\x83\x6a\x83\x83", "1",
   "\x83\x6a\x83\x46", "\x83\x6a\x83\x46", "1",
   "\x83\x6a", "\x83\x6a", "1",
   "\x83\x69", "\x83\x69", "1",
   "\x83\x68\x83\x44", "\x83\x68\x83\x44", "1",
   "\x83\x68", "\x83\x68", "1",
   "\x83\x67\x83\x44", "\x83\x67\x83\x44", "1",
   "\x83\x67", "\x83\x67", "1",
   "\x83\x66\x83\x87", "\x83\x66\x83\x87", "1",
   "\x83\x66\x83\x85", "\x83\x66\x83\x85", "1",
   "\x83\x66\x83\x83", "\x83\x66\x83\x83", "1",
   "\x83\x66\x83\x46", "\x83\x66\x83\x46", "1",
   "\x83\x66\x83\x42", "\x83\x66\x83\x42", "1",
   "\x83\x66", "\x83\x66", "1",
   "\x83\x65\x83\x87", "\x83\x65\x83\x87", "1",
   "\x83\x65\x83\x85", "\x83\x65\x83\x85", "1",
   "\x83\x65\x83\x83", "\x83\x65\x83\x83", "1",
   "\x83\x65\x83\x42", "\x83\x65\x83\x42", "1",
   "\x83\x65", "\x83\x65", "1",
   "\x83\x64", "\x83\x64", "1",
   "\x83\x63\x83\x48", "\x83\x63\x83\x48", "1",
   "\x83\x63\x83\x46", "\x83\x63\x83\x46", "1",
   "\x83\x63\x83\x42", "\x83\x63\x83\x42", "1",
   "\x83\x63\x83\x40", "\x83\x63\x83\x40", "1",
   "\x83\x63", "\x83\x63", "1",
   "\x83\x62", "\x83\x62", "1",
   "\x83\x61", "\x83\x61", "1",
   "\x83\x60\x83\x87", "\x83\x60\x83\x87", "1",
   "\x83\x60\x83\x85", "\x83\x60\x83\x85", "1",
   "\x83\x60\x83\x83", "\x83\x60\x83\x83", "1",
   "\x83\x60\x83\x46", "\x83\x60\x83\x46", "1",
   "\x83\x60", "\x83\x60", "1",
   "\x83\x5f", "\x83\x5f", "1",
   "\x83\x5e", "\x83\x5e", "1",
   "\x83\x5d", "\x83\x5d", "1",
   "\x83\x5c", "\x83\x5c", "1",
   "\x83\x5b", "\x83\x5b", "1",
   "\x83\x5a", "\x83\x5a", "1",
   "\x83\x59\x83\x42", "\x83\x59\x83\x42", "1",
   "\x83\x59", "\x83\x59", "1",
   "\x83\x58\x83\x42", "\x83\x58\x83\x42", "1",
   "\x83\x58", "\x83\x58", "1",
   "\x83\x57\x83\x87", "\x83\x57\x83\x87", "1",
   "\x83\x57\x83\x85", "\x83\x57\x83\x85", "1",
   "\x83\x57\x83\x83", "\x83\x57\x83\x83", "1",
   "\x83\x57\x83\x46", "\x83\x57\x83\x46", "1",
   "\x83\x57", "\x83\x57", "1",
   "\x83\x56\x83\x87", "\x83\x56\x83\x87", "1",
   "\x83\x56\x83\x85", "\x83\x56\x83\x85", "1",
   "\x83\x56\x83\x83", "\x83\x56\x83\x83", "1",
   "\x83\x56\x83\x46", "\x83\x56\x83\x46", "1",
   "\x83\x56", "\x83\x56", "1",
   "\x83\x55", "\x83\x55", "1",
   "\x83\x54", "\x83\x54", "1",
   "\x83\x53", "\x83\x53", "1",
   "\x83\x52", "\x83\x52", "1",
   "\x83\x51", "\x83\x51", "1",
   "\x83\x50", "\x83\x50", "1",
   "\x83\x4f", "\x83\x4f", "1",
   "\x83\x4e", "\x83\x4e", "1",
   "\x83\x4d\x83\x87", "\x83\x4d\x83\x87", "1",
   "\x83\x4d\x83\x85", "\x83\x4d\x83\x85", "1",
   "\x83\x4d\x83\x83", "\x83\x4d\x83\x83", "1",
   "\x83\x4d\x83\x46", "\x83\x4d\x83\x46", "1",
   "\x83\x4d", "\x83\x4d", "1",
   "\x83\x4c\x83\x87", "\x83\x4c\x83\x87", "1",
   "\x83\x4c\x83\x85", "\x83\x4c\x83\x85", "1",
   "\x83\x4c\x83\x83", "\x83\x4c\x83\x83", "1",
   "\x83\x4c\x83\x46", "\x83\x4c\x83\x46", "1",
   "\x83\x4c", "\x83\x4c", "1",
   "\x83\x4b", "\x83\x4b", "1",
   "\x83\x4a", "\x83\x4a", "1",
   "\x83\x49", "\x83\x49", "1",
   "\x83\x48", "\x83\x48", "1",
   "\x83\x47", "\x83\x47", "1",
   "\x83\x46", "\x83\x46", "1",
   "\x83\x45\x83\x48", "\x83\x45\x83\x48", "1",
   "\x83\x45\x83\x46", "\x83\x45\x83\x46", "1",
   "\x83\x45\x83\x42", "\x83\x45\x83\x42", "1",
   "\x83\x45", "\x83\x45", "1",
   "\x83\x44", "\x83\x44", "1",
   "\x83\x43\x83\x46", "\x83\x43\x83\x46", "1",
   "\x83\x43", "\x83\x43", "1",
   "\x83\x42", "\x83\x42", "1",
   "\x83\x41", "\x83\x41", "1",
   "\x83\x40", "\x83\x40", "1",
   "\x82\xf1", "\x83\x93", "1",
   "\x82\xf0", "\x83\x92", "1",
   "\x82\xef", "\x83\x91", "1",
   "\x82\xee", "\x83\x90", "1",
   "\x82\xed", "\x83\x8f", "1",
   "\x82\xeb", "\x83\x8d", "1",
   "\x82\xea", "\x83\x8c", "1",
   "\x82\xe9", "\x83\x8b", "1",
   "\x82\xe8\x82\xe5", "\x83\x8a\x83\x87", "1",
   "\x82\xe8\x82\xe3", "\x83\x8a\x83\x85", "1",
   "\x82\xe8\x82\xe1", "\x83\x8a\x83\x83", "1",
   "\x82\xe8\x82\xa5", "\x83\x8a\x83\x46", "1",
   "\x82\xe8", "\x83\x8a", "1",
   "\x82\xe7", "\x83\x89", "1",
   "\x82\xe6", "\x83\x88", "1",
   "\x82\xe5", "\x83\x87", "1",
   "\x82\xe4", "\x83\x86", "1",
   "\x82\xe3", "\x83\x85", "1",
   "\x82\xe2", "\x83\x84", "1",
   "\x82\xe1", "\x83\x83", "1",
   "\x82\xe0", "\x83\x82", "1",
   "\x82\xdf", "\x83\x81", "1",
   "\x82\xde", "\x83\x80", "1",
   "\x82\xdd\x82\xe5", "\x83\x7e\x83\x87", "1",
   "\x82\xdd\x82\xe3", "\x83\x7e\x83\x85", "1",
   "\x82\xdd\x82\xe1", "\x83\x7e\x83\x83", "1",
   "\x82\xdd\x82\xa5", "\x83\x7e\x83\x46", "1",
   "\x82\xdd", "\x83\x7e", "1",
   "\x82\xdc", "\x83\x7d", "1",
   "\x82\xdb", "\x83\x7c", "1",
   "\x82\xda", "\x83\x7b", "1",
   "\x82\xd9", "\x83\x7a", "1",
   "\x82\xd8", "\x83\x79", "1",
   "\x82\xd7", "\x83\x78", "1",
   "\x82\xd6", "\x83\x77", "1",
   "\x82\xd5", "\x83\x76", "1",
   "\x82\xd4", "\x83\x75", "1",
   "\x82\xd3\x82\xa7", "\x83\x74\x83\x48", "1",
   "\x82\xd3\x82\xa5", "\x83\x74\x83\x46", "1",
   "\x82\xd3\x82\xa1", "\x83\x74\x83\x42", "1",
   "\x82\xd3\x82\x9f", "\x83\x74\x83\x40", "1",
   "\x82\xd3", "\x83\x74", "1",
   "\x82\xd2\x82\xe5", "\x83\x73\x83\x87", "1",
   "\x82\xd2\x82\xe3", "\x83\x73\x83\x85", "1",
   "\x82\xd2\x82\xe1", "\x83\x73\x83\x83", "1",
   "\x82\xd2\x82\xa5", "\x83\x73\x83\x46", "1",
   "\x82\xd2", "\x83\x73", "1",
   "\x82\xd1\x82\xe5", "\x83\x72\x83\x87", "1",
   "\x82\xd1\x82\xe3", "\x83\x72\x83\x85", "1",
   "\x82\xd1\x82\xe1", "\x83\x72\x83\x83", "1",
   "\x82\xd1\x82\xa5", "\x83\x72\x83\x46", "1",
   "\x82\xd1", "\x83\x72", "1",
   "\x82\xd0\x82\xe5", "\x83\x71\x83\x87", "1",
   "\x82\xd0\x82\xe3", "\x83\x71\x83\x85", "1",
   "\x82\xd0\x82\xe1", "\x83\x71\x83\x83", "1",
   "\x82\xd0\x82\xa5", "\x83\x71\x83\x46", "1",
   "\x82\xd0", "\x83\x71", "1",
   "\x82\xcf", "\x83\x70", "1",
   "\x82\xce", "\x83\x6f", "1",
   "\x82\xcd", "\x83\x6e", "1",
   "\x82\xcc", "\x83\x6d", "1",
   "\x82\xcb", "\x83\x6c", "1",
   "\x82\xca", "\x83\x6b", "1",
   "\x82\xc9\x82\xe5", "\x83\x6a\x83\x87", "1",
   "\x82\xc9\x82\xe3", "\x83\x6a\x83\x85", "1",
   "\x82\xc9\x82\xe1", "\x83\x6a\x83\x83", "1",
   "\x82\xc9\x82\xa5", "\x83\x6a\x83\x46", "1",
   "\x82\xc9", "\x83\x6a", "1",
   "\x82\xc8", "\x83\x69", "1",
   "\x82\xc7\x82\xa3", "\x83\x68\x83\x44", "1",
   "\x82\xc7", "\x83\x68", "1",
   "\x82\xc6\x82\xa3", "\x83\x67\x83\x44", "1",
   "\x82\xc6", "\x83\x67", "1",
   "\x82\xc5\x82\xe5", "\x83\x66\x83\x87", "1",
   "\x82\xc5\x82\xe3", "\x83\x66\x83\x85", "1",
   "\x82\xc5\x82\xe1", "\x83\x66\x83\x83", "1",
   "\x82\xc5\x82\xa5", "\x83\x66\x83\x46", "1",
   "\x82\xc5\x82\xa1", "\x83\x66\x83\x42", "1",
   "\x82\xc5", "\x83\x66", "1",
   "\x82\xc4\x82\xe5", "\x83\x65\x83\x87", "1",
   "\x82\xc4\x82\xe3", "\x83\x65\x83\x85", "1",
   "\x82\xc4\x82\xe1", "\x83\x65\x83\x83", "1",
   "\x82\xc4\x82\xa1", "\x83\x65\x83\x42", "1",
   "\x82\xc4", "\x83\x65", "1",
   "\x82\xc3", "\x83\x64", "1",
   "\x82\xc2\x82\xa7", "\x83\x63\x83\x48", "1",
   "\x82\xc2\x82\xa5", "\x83\x63\x83\x46", "1",
   "\x82\xc2\x82\xa1", "\x83\x63\x83\x42", "1",
   "\x82\xc2\x82\x9f", "\x83\x63\x83\x40", "1",
   "\x82\xc2", "\x83\x63", "1",
   "\x82\xc1", "\x83\x62", "1",
   "\x82\xc0", "\x83\x61", "1",
   "\x82\xbf\x82\xe5", "\x83\x60\x83\x87", "1",
   "\x82\xbf\x82\xe3", "\x83\x60\x83\x85", "1",
   "\x82\xbf\x82\xe1", "\x83\x60\x83\x83", "1",
   "\x82\xbf\x82\xa5", "\x83\x60\x83\x46", "1",
   "\x82\xbf", "\x83\x60", "1",
   "\x82\xbe", "\x83\x5f", "1",
   "\x82\xbd", "\x83\x5e", "1",
   "\x82\xbc", "\x83\x5d", "1",
   "\x82\xbb", "\x83\x5c", "1",
   "\x82\xba", "\x83\x5b", "1",
   "\x82\xb9", "\x83\x5a", "1",
   "\x82\xb8\x82\xa1", "\x83\x59\x83\x42", "1",
   "\x82\xb8", "\x83\x59", "1",
   "\x82\xb7\x82\xa1", "\x83\x58\x83\x42", "1",
   "\x82\xb7", "\x83\x58", "1",
   "\x82\xb6\x82\xe5", "\x83\x57\x83\x87", "1",
   "\x82\xb6\x82\xe3", "\x83\x57\x83\x85", "1",
   "\x82\xb6\x82\xe1", "\x83\x57\x83\x83", "1",
   "\x82\xb6\x82\xa5", "\x83\x57\x83\x46", "1",
   "\x82\xb6", "\x83\x57", "1",
   "\x82\xb5\x82\xe5", "\x83\x56\x83\x87", "1",
   "\x82\xb5\x82\xe3", "\x83\x56\x83\x85", "1",
   "\x82\xb5\x82\xe1", "\x83\x56\x83\x83", "1",
   "\x82\xb5\x82\xa5", "\x83\x56\x83\x46", "1",
   "\x82\xb5", "\x83\x56", "1",
   "\x82\xb4", "\x83\x55", "1",
   "\x82\xb3", "\x83\x54", "1",
   "\x82\xb2", "\x83\x53", "1",
   "\x82\xb1", "\x83\x52", "1",
   "\x82\xb0", "\x83\x51", "1",
   "\x82\xaf", "\x83\x50", "1",
   "\x82\xae", "\x83\x4f", "1",
   "\x82\xad", "\x83\x4e", "1",
   "\x82\xac\x82\xe5", "\x83\x4d\x83\x87", "1",
   "\x82\xac\x82\xe3", "\x83\x4d\x83\x85", "1",
   "\x82\xac\x82\xe1", "\x83\x4d\x83\x83", "1",
   "\x82\xac\x82\xa5", "\x83\x4d\x83\x46", "1",
   "\x82\xac", "\x83\x4d", "1",
   "\x82\xab\x82\xe5", "\x83\x4c\x83\x87", "1",
   "\x82\xab\x82\xe3", "\x83\x4c\x83\x85", "1",
   "\x82\xab\x82\xe1", "\x83\x4c\x83\x83", "1",
   "\x82\xab\x82\xa5", "\x83\x4c\x83\x46", "1",
   "\x82\xab", "\x83\x4c", "1",
   "\x82\xaa", "\x83\x4b", "1",
   "\x82\xa9", "\x83\x4a", "1",
   "\x82\xa8", "\x83\x49", "1",
   "\x82\xa7", "\x83\x48", "1",
   "\x82\xa6", "\x83\x47", "1",
   "\x82\xa5", "\x83\x46", "1",
   "\x82\xa4\x82\xa7", "\x83\x45\x83\x48", "1",
   "\x82\xa4\x82\xa5", "\x83\x45\x83\x46", "1",
   "\x82\xa4\x82\xa1", "\x83\x45\x83\x42", "1",
   "\x82\xa4", "\x83\x45", "1",
   "\x82\xa3", "\x83\x44", "1",
   "\x82\xa2\x82\xa5", "\x83\x43\x83\x46", "1",
   "\x82\xa2", "\x83\x43", "1",
   "\x82\xa1", "\x83\x42", "1",
   "\x82\xa0", "\x83\x41", "1",
   "\x82\x9f", "\x83\x40", "1",
   "\x82\x9a", "\x83\x59\x83\x42\x81\x5b", "2",
   "\x82\x99", "\x83\x8f\x83\x43", "2",
   "\x82\x98", "\x83\x47\x83\x62\x83\x4e\x83\x58", "4",
   "\x82\x97", "\x83\x5f\x83\x75\x83\x8a\x83\x85\x81\x5b", "4",
   "\x82\x96", "\x83\x75\x83\x43", "2",
   "\x82\x95", "\x83\x86\x81\x5b", "2",
   "\x82\x94", "\x83\x65\x83\x42\x81\x5b", "2",
   "\x82\x93", "\x83\x47\x83\x58", "2",
   "\x82\x92", "\x83\x41\x81\x5b\x83\x8b", "3",
   "\x82\x91", "\x83\x4c\x83\x85\x81\x5b", "2",
   "\x82\x90", "\x83\x73\x81\x5b", "2",
   "\x82\x8f", "\x83\x49\x81\x5b", "2",
   "\x82\x8e", "\x83\x47\x83\x6b", "2",
   "\x82\x8d", "\x83\x47\x83\x80", "2",
   "\x82\x8c", "\x83\x47\x83\x8b", "2",
   "\x82\x8b", "\x83\x50\x81\x5b", "2",
   "\x82\x8a", "\x83\x57\x83\x46\x81\x5b", "2",
   "\x82\x89", "\x83\x41\x83\x43", "2",
   "\x82\x88", "\x83\x47\x83\x43\x83\x60", "3",
   "\x82\x87", "\x83\x57\x81\x5b", "2",
   "\x82\x86", "\x83\x47\x83\x74", "2",
   "\x82\x85", "\x83\x43\x81\x5b", "2",
   "\x82\x84", "\x83\x66\x83\x42\x81\x5b", "2",
   "\x82\x83", "\x83\x56\x81\x5b", "2",
   "\x82\x82", "\x83\x72\x81\x5b", "2",
   "\x82\x81", "\x83\x47\x83\x43", "2",
   "\x82\x79", "\x83\x59\x83\x42\x81\x5b", "2",
   "\x82\x78", "\x83\x8f\x83\x43", "2",
   "\x82\x77", "\x83\x47\x83\x62\x83\x4e\x83\x58", "4",
   "\x82\x76", "\x83\x5f\x83\x75\x83\x8a\x83\x85\x81\x5b", "4",
   "\x82\x75", "\x83\x75\x83\x43", "2",
   "\x82\x74", "\x83\x86\x81\x5b", "2",
   "\x82\x73", "\x83\x65\x83\x42\x81\x5b", "2",
   "\x82\x72", "\x83\x47\x83\x58", "2",
   "\x82\x71", "\x83\x41\x81\x5b\x83\x8b", "3",
   "\x82\x70", "\x83\x4c\x83\x85\x81\x5b", "2",
   "\x82\x6f", "\x83\x73\x81\x5b", "2",
   "\x82\x6e", "\x83\x49\x81\x5b", "2",
   "\x82\x6d", "\x83\x47\x83\x6b", "2",
   "\x82\x6c", "\x83\x47\x83\x80", "2",
   "\x82\x6b", "\x83\x47\x83\x8b", "2",
   "\x82\x6a", "\x83\x50\x81\x5b", "2",
   "\x82\x69", "\x83\x57\x83\x46\x81\x5b", "2",
   "\x82\x68", "\x83\x41\x83\x43", "2",
   "\x82\x67", "\x83\x47\x83\x43\x83\x60", "3",
   "\x82\x66", "\x83\x57\x81\x5b", "2",
   "\x82\x65", "\x83\x47\x83\x74", "2",
   "\x82\x64", "\x83\x43\x81\x5b", "2",
   "\x82\x63", "\x83\x66\x83\x42\x81\x5b", "2",
   "\x82\x62", "\x83\x56\x81\x5b", "2",
   "\x82\x61", "\x83\x72\x81\x5b", "2",
   "\x82\x60", "\x83\x47\x83\x43", "2",
   "\x81\x5b", "\x81\x5b", "1",
   NULL, NULL, NULL
};

#define NJD_SET_PRONUNCIATION_KIGOU "\x8b\x4c\x8d\x86"
#define NJD_SET_PRONUNCIATION_KAZU "\x90\x94"

static const char *njd_set_pronunciation_symbol_list[] = {
   "\x81\x40", "\x81\x41",
   "\x81\x41", "\x81\x41",
   "\x81\x42", "\x81\x41",
   "\x81\x43", "\x81\x41",
   "\x81\x44", "\x81\x41",
   "\x81\x45", "\x81\x41",
   "\x81\x46", "\x81\x41",
   "\x81\x47", "\x81\x41",
   "\x81\x48", "\x81\x48",
   "\x81\x49", "\x81\x41",
   "\x81\x4a", "\x81\x41",
   "\x81\x4b", "\x81\x41",
   "\x81\x4c", "\x81\x41",
   "\x81\x4d", "\x81\x41",
   "\x81\x4e", "\x81\x41",
   "\x81\x4f", "\x81\x41",
   "\x81\x50", "\x81\x41",
   "\x81\x51", "\x81\x41",
   "\x81\x52", "\x81\x41",
   "\x81\x53", "\x81\x41",
   "\x81\x54", "\x81\x41",
   "\x81\x55", "\x81\x41",
   "\x81\x56", "\x81\x41",
   "\x81\x57", "\x81\x41",
   "\x81\x58", "\x81\x41",
   "\x81\x58\x81\x58", "\x81\x41",
   "\x81\x59", "\x81\x41",
   "\x81\x5a", "\x81\x41",
   "\x81\x5c", "\x81\x41",
   "\x81\x5c\x81\x5c", "\x81\x41",
   "\x81\x5d", "\x81\x41",
   "\x81\x5e", "\x81\x41",
   "\x81\x5f", "\x81\x41",
   "\x81\x60", "\x81\x41",
   "\x81\x61", "\x81\x41",
   "\x81\x62", "\x81\x41",
   "\x81\x63", "\x81\x41",
   "\x81\x64", "\x81\x41",
   "\x81\x65", "\x81\x41",
   "\x81\x66", "\x81\x41",
   "\x81\x67", "\x81\x41",
   "\x81\x68", "\x81\x41",
   "\x81\x69", "\x81\x41",
   "\x81\x6a", "\x81\x41",
   "\x81\x6b", "\x81\x41",
   "\x81\x6c", "\x81\x41",
   "\x81\x6d", "\x81\x41",
   "\x81\x6e", "\x81\x41",
   "\x81\x6f", "\x81\x41",
   "\x81\x70", "\x81\x41",
   "\x81\x71", "\x81\x41",
   "\x81\x72", "\x81\x41",
   "\x81\x73", "\x81\x41",
   "\x81\x74", "\x81\x41",
   "\x81\x75", "\x81\x41",
   "\x81\x76", "\x81\x41",
   "\x81\x77", "\x81\x41",
   "\x81\x78", "\x81\x41",
   "\x81\x79", "\x81\x41",
   "\x81\x7a", "\x81\x41",
   "\x81\x7c\x81\x7c", "\x81\x41",
   "\x81\x81", "\x81\x41",
   "\x81\x83", "\x81\x41",
   "\x81\x84", "\x81\x41",
   "\x81\x8c", "\x81\x41",
   "\x81\x96", "\x81\x41",
   "\x81\x99", "\x81\x41",
   "\x81\x9a", "\x81\x41",
   "\x81\x9b", "\x81\x41",
   "\x81\x9c", "\x81\x41",
   "\x81\x9d", "\x81\x41",
   "\x81\x9e", "\x81\x41",
   "\x81\x9f", "\x81\x41",
   "\x81\xa0", "\x81\x41",
   "\x81\xa1", "\x81\x41",
   "\x81\xa2", "\x81\x41",
   "\x81\xa3", "\x81\x41",
   "\x81\xa4", "\x81\x41",
   "\x81\xa5", "\x81\x41",
   "\x81\xa6", "\x81\x41",
   "\x81\xa8", "\x81\x41",
   "\x81\xa9", "\x81\x41",
   "\x81\xaa", "\x81\x41",
   "\x81\xab", "\x81\x41",
   "\x81\xac", "\x81\x41",
   "\x84\x9f", "\x81\x41",
   "\x84\x9f\x84\x9f", "\x81\x41",
   "\x81\x7c", "\x81\x41",
   NULL, NULL
};

#define NJD_SET_PRONUNCIATION_FILLER "\x83\x74\x83\x42\x83\x89\x81\x5b"

#define NJD_SET_PRONUNCIATION_U        "\x83\x45"
#define NJD_SET_PRONUNCIATION_DOUSHI   "\x93\xae\x8e\x8c"
#define NJD_SET_PRONUNCIATION_JODOUSHI "\x8f\x95\x93\xae\x8e\x8c"
#define NJD_SET_PRONUNCIATION_CHOUON   "\x81\x5b"

#define NJD_SET_PRONUNCIATION_QUESTION  "\x81\x48"
#define NJD_SET_PRONUNCIATION_DESU_STR  "\x82\xc5\x82\xb7"
#define NJD_SET_PRONUNCIATION_MASU_STR  "\x82\xdc\x82\xb7"
#define NJD_SET_PRONUNCIATION_DESU_PRON "\x83\x66\x83\x58"
#define NJD_SET_PRONUNCIATION_MASU_PRON "\x83\x7d\x83\x58"

NJD_SET_PRONUNCIATION_RULE_H_END;

#endif                          /* !NJD_SET_PRONUNCIATION_RULE_H */
