template<typename Wire>
Bit_T<Wire> Float_T<Wire>::less_equal(const Float_T<Wire> & rhs) const {
	Float_T<Wire> res(*this);
	Bit_T<Wire> *B = new Bit_T<Wire>[516];
	for(int i = 0; i < 32; ++i) B[i] = value[i];
	for(int i = 0; i < 32; ++i) B[i+32] = rhs[i];
	uint32_t gates[] = {
12, 0, 64, 2, 
44, 64, 65, 0, 
65, 0, 66, 2, 
20, 0, 67, 2, 
52, 67, 68, 0, 
68, 0, 69, 2, 
8, 0, 70, 2, 
40, 70, 71, 0, 
71, 0, 72, 2, 
4, 0, 73, 2, 
36, 73, 74, 0, 
74, 0, 75, 2, 
16, 0, 76, 2, 
48, 76, 77, 0, 
77, 0, 78, 2, 
1, 0, 79, 2, 
33, 79, 80, 0, 
80, 0, 81, 2, 
24, 23, 82, 1, 
24, 23, 83, 0, 
82, 83, 84, 1, 
84, 0, 85, 2, 
26, 0, 86, 2, 
25, 0, 87, 2, 
86, 87, 88, 0, 
85, 88, 89, 0, 
28, 0, 90, 2, 
27, 0, 91, 2, 
90, 91, 92, 0, 
30, 0, 93, 2, 
29, 0, 94, 2, 
93, 94, 95, 0, 
92, 95, 96, 0, 
89, 96, 97, 0, 
97, 0, 98, 2, 
31, 98, 99, 0, 
56, 0, 100, 2, 
55, 0, 101, 2, 
100, 101, 102, 0, 
58, 0, 103, 2, 
57, 0, 104, 2, 
103, 104, 105, 0, 
102, 105, 106, 0, 
60, 0, 107, 2, 
59, 0, 108, 2, 
107, 108, 109, 0, 
62, 0, 110, 2, 
61, 0, 111, 2, 
110, 111, 112, 0, 
109, 112, 113, 0, 
106, 113, 114, 0, 
114, 0, 115, 2, 
63, 115, 116, 0, 
99, 116, 117, 1, 
117, 0, 118, 2, 
21, 0, 119, 2, 
53, 119, 120, 0, 
120, 0, 121, 2, 
52, 0, 122, 2, 
121, 122, 123, 0, 
20, 123, 124, 0, 
124, 0, 125, 2, 
53, 0, 126, 2, 
21, 126, 127, 0, 
127, 0, 128, 2, 
125, 128, 129, 0, 
49, 0, 130, 2, 
17, 130, 131, 0, 
131, 0, 132, 2, 
17, 0, 133, 2, 
49, 133, 134, 0, 
134, 0, 135, 2, 
48, 0, 136, 2, 
135, 136, 137, 0, 
16, 137, 138, 0, 
138, 0, 139, 2, 
132, 139, 140, 0, 
140, 0, 141, 2, 
18, 0, 142, 2, 
50, 142, 143, 0, 
143, 0, 144, 2, 
19, 0, 145, 2, 
51, 145, 146, 0, 
146, 0, 147, 2, 
144, 147, 148, 0, 
148, 0, 149, 2, 
149, 0, 150, 2, 
141, 150, 151, 0, 
151, 0, 152, 2, 
51, 0, 153, 2, 
19, 153, 154, 0, 
154, 0, 155, 2, 
152, 155, 156, 0, 
50, 0, 157, 2, 
147, 157, 158, 0, 
158, 18, 159, 0, 
159, 0, 160, 2, 
156, 160, 161, 0, 
161, 0, 162, 2, 
69, 121, 163, 0, 
163, 0, 164, 2, 
164, 0, 165, 2, 
162, 165, 166, 0, 
166, 0, 167, 2, 
129, 167, 168, 0, 
168, 0, 169, 2, 
22, 0, 170, 2, 
54, 170, 171, 0, 
171, 0, 172, 2, 
169, 172, 173, 0, 
173, 0, 174, 2, 
54, 0, 175, 2, 
22, 175, 176, 0, 
176, 0, 177, 2, 
174, 177, 178, 0, 
47, 0, 179, 2, 
15, 179, 180, 0, 
180, 0, 181, 2, 
45, 0, 182, 2, 
13, 182, 183, 0, 
183, 0, 184, 2, 
13, 0, 185, 2, 
45, 185, 186, 0, 
186, 0, 187, 2, 
44, 0, 188, 2, 
187, 188, 189, 0, 
12, 189, 190, 0, 
190, 0, 191, 2, 
184, 191, 192, 0, 
192, 0, 193, 2, 
14, 0, 194, 2, 
46, 194, 195, 0, 
195, 0, 196, 2, 
15, 0, 197, 2, 
47, 197, 198, 0, 
198, 0, 199, 2, 
196, 199, 200, 0, 
200, 0, 201, 2, 
201, 0, 202, 2, 
193, 202, 203, 0, 
203, 0, 204, 2, 
181, 204, 205, 0, 
46, 0, 206, 2, 
199, 206, 207, 0, 
207, 14, 208, 0, 
208, 0, 209, 2, 
41, 0, 210, 2, 
9, 210, 211, 0, 
211, 0, 212, 2, 
9, 0, 213, 2, 
41, 213, 214, 0, 
214, 0, 215, 2, 
40, 0, 216, 2, 
215, 216, 217, 0, 
8, 217, 218, 0, 
218, 0, 219, 2, 
212, 219, 220, 0, 
220, 0, 221, 2, 
10, 0, 222, 2, 
42, 222, 223, 0, 
223, 0, 224, 2, 
11, 0, 225, 2, 
43, 225, 226, 0, 
226, 0, 227, 2, 
224, 227, 228, 0, 
228, 0, 229, 2, 
229, 0, 230, 2, 
221, 230, 231, 0, 
231, 0, 232, 2, 
43, 0, 233, 2, 
11, 233, 234, 0, 
234, 0, 235, 2, 
232, 235, 236, 0, 
42, 0, 237, 2, 
227, 237, 238, 0, 
238, 10, 239, 0, 
239, 0, 240, 2, 
236, 240, 241, 0, 
241, 0, 242, 2, 
66, 187, 243, 0, 
201, 0, 244, 2, 
243, 244, 245, 0, 
245, 0, 246, 2, 
246, 0, 247, 2, 
242, 247, 248, 0, 
248, 0, 249, 2, 
209, 249, 250, 0, 
246, 229, 251, 1, 
246, 229, 252, 0, 
251, 252, 253, 1, 
253, 0, 254, 2, 
72, 215, 255, 0, 
37, 0, 256, 2, 
5, 256, 257, 0, 
257, 0, 258, 2, 
5, 0, 259, 2, 
37, 259, 260, 0, 
260, 0, 261, 2, 
36, 0, 262, 2, 
261, 262, 263, 0, 
4, 263, 264, 0, 
264, 0, 265, 2, 
258, 265, 266, 0, 
266, 0, 267, 2, 
6, 0, 268, 2, 
38, 268, 269, 0, 
269, 0, 270, 2, 
7, 0, 271, 2, 
39, 271, 272, 0, 
272, 0, 273, 2, 
270, 273, 274, 0, 
274, 0, 275, 2, 
275, 0, 276, 2, 
267, 276, 277, 0, 
277, 0, 278, 2, 
39, 0, 279, 2, 
7, 279, 280, 0, 
280, 0, 281, 2, 
278, 281, 282, 0, 
38, 0, 283, 2, 
273, 283, 284, 0, 
284, 6, 285, 0, 
285, 0, 286, 2, 
2, 0, 287, 2, 
34, 287, 288, 0, 
288, 0, 289, 2, 
3, 0, 290, 2, 
35, 290, 291, 0, 
291, 0, 292, 2, 
289, 292, 293, 0, 
33, 0, 294, 2, 
1, 294, 295, 0, 
295, 0, 296, 2, 
32, 0, 297, 2, 
81, 297, 298, 0, 
298, 0, 299, 0, 
299, 0, 300, 2, 
296, 300, 301, 0, 
301, 0, 302, 2, 
293, 302, 303, 0, 
303, 0, 304, 2, 
35, 0, 305, 2, 
3, 305, 306, 0, 
306, 0, 307, 2, 
304, 307, 308, 0, 
34, 291, 309, 1, 
34, 291, 310, 0, 
309, 310, 311, 1, 
311, 0, 312, 2, 
312, 2, 313, 0, 
313, 0, 314, 2, 
308, 314, 315, 0, 
315, 0, 316, 2, 
275, 0, 317, 2, 
316, 317, 318, 0, 
75, 261, 319, 0, 
318, 319, 320, 0, 
320, 0, 321, 2, 
286, 321, 322, 0, 
282, 322, 323, 0, 
323, 0, 324, 2, 
255, 324, 325, 0, 
254, 325, 326, 0, 
326, 0, 327, 2, 
250, 327, 328, 0, 
205, 328, 329, 0, 
329, 0, 330, 2, 
149, 0, 331, 2, 
330, 331, 332, 0, 
164, 0, 333, 2, 
332, 333, 334, 0, 
171, 0, 335, 2, 
135, 335, 336, 0, 
336, 78, 337, 0, 
334, 337, 338, 0, 
338, 0, 339, 2, 
178, 339, 340, 0, 
340, 0, 341, 2, 
56, 55, 342, 0, 
58, 57, 343, 0, 
342, 343, 344, 0, 
60, 59, 345, 0, 
62, 61, 346, 0, 
345, 346, 347, 0, 
344, 347, 348, 0, 
348, 0, 349, 2, 
97, 0, 350, 2, 
349, 350, 351, 0, 
351, 0, 352, 2, 
352, 0, 353, 2, 
341, 353, 354, 0, 
24, 56, 355, 1, 
23, 101, 356, 1, 
356, 0, 357, 2, 
355, 357, 358, 1, 
355, 357, 359, 0, 
358, 359, 360, 1, 
360, 0, 361, 2, 
26, 58, 362, 1, 
25, 57, 363, 1, 
362, 363, 364, 1, 
362, 363, 365, 0, 
364, 365, 366, 1, 
366, 0, 367, 2, 
361, 367, 368, 0, 
28, 60, 369, 1, 
27, 59, 370, 1, 
369, 370, 371, 1, 
369, 370, 372, 0, 
371, 372, 373, 1, 
373, 0, 374, 2, 
30, 62, 375, 1, 
29, 61, 376, 1, 
375, 376, 377, 1, 
375, 376, 378, 0, 
377, 378, 379, 1, 
379, 0, 380, 2, 
374, 380, 381, 0, 
368, 381, 382, 0, 
382, 0, 383, 2, 
383, 0, 384, 2, 
354, 384, 385, 0, 
385, 0, 386, 2, 
118, 386, 387, 0, 
30, 110, 388, 0, 
388, 0, 389, 2, 
108, 27, 390, 0, 
390, 0, 391, 2, 
104, 25, 392, 0, 
392, 0, 393, 2, 
101, 23, 394, 0, 
394, 0, 395, 2, 
395, 0, 396, 2, 
100, 396, 397, 0, 
397, 0, 398, 2, 
24, 0, 399, 2, 
398, 399, 400, 0, 
400, 0, 401, 2, 
56, 395, 402, 0, 
402, 0, 403, 2, 
401, 403, 404, 0, 
57, 87, 405, 0, 
405, 0, 406, 2, 
404, 406, 407, 0, 
407, 0, 408, 2, 
393, 408, 409, 0, 
26, 103, 410, 0, 
410, 0, 411, 2, 
409, 411, 412, 0, 
412, 0, 413, 2, 
58, 86, 414, 0, 
414, 0, 415, 2, 
413, 415, 416, 0, 
59, 91, 417, 0, 
417, 0, 418, 2, 
416, 418, 419, 0, 
419, 0, 420, 2, 
391, 420, 421, 0, 
28, 107, 422, 0, 
422, 0, 423, 2, 
421, 423, 424, 0, 
424, 0, 425, 2, 
60, 90, 426, 0, 
426, 0, 427, 2, 
425, 427, 428, 0, 
94, 61, 429, 0, 
429, 0, 430, 2, 
428, 430, 431, 0, 
431, 0, 432, 2, 
29, 111, 433, 0, 
433, 0, 434, 2, 
432, 434, 435, 0, 
435, 0, 436, 2, 
62, 93, 437, 0, 
437, 0, 438, 2, 
436, 438, 439, 0, 
439, 0, 440, 2, 
389, 440, 441, 0, 
441, 0, 442, 2, 
442, 0, 443, 2, 
387, 443, 444, 0, 
444, 0, 445, 2, 
23, 24, 446, 0, 
26, 25, 447, 0, 
446, 447, 448, 0, 
28, 27, 449, 0, 
30, 29, 450, 0, 
449, 450, 451, 0, 
448, 451, 452, 0, 
452, 0, 453, 2, 
81, 289, 454, 0, 
0, 0, 455, 2, 
32, 455, 456, 0, 
456, 0, 457, 2, 
261, 457, 458, 0, 
458, 75, 459, 0, 
454, 459, 460, 0, 
3, 0, 461, 2, 
35, 461, 462, 0, 
462, 0, 463, 2, 
72, 463, 464, 0, 
464, 273, 465, 0, 
227, 270, 466, 0, 
466, 224, 467, 0, 
465, 467, 468, 0, 
460, 468, 469, 0, 
196, 215, 470, 0, 
470, 187, 471, 0, 
135, 66, 472, 0, 
472, 78, 473, 0, 
471, 473, 474, 0, 
69, 199, 475, 0, 
475, 147, 476, 0, 
22, 0, 477, 2, 
54, 477, 478, 0, 
478, 0, 479, 2, 
479, 144, 480, 0, 
480, 121, 481, 0, 
476, 481, 482, 0, 
474, 482, 483, 0, 
469, 483, 484, 0, 
484, 0, 485, 2, 
453, 485, 486, 0, 
341, 0, 487, 2, 
486, 487, 488, 0, 
383, 488, 489, 1, 
383, 488, 490, 0, 
489, 490, 491, 1, 
118, 491, 492, 0, 
442, 0, 493, 2, 
492, 493, 494, 0, 
445, 494, 495, 1, 
99, 495, 496, 0, 
445, 496, 497, 1, 
488, 0, 498, 2, 
340, 498, 499, 0, 
499, 0, 500, 2, 
352, 0, 501, 2, 
500, 501, 502, 0, 
502, 0, 503, 2, 
118, 503, 504, 0, 
383, 0, 505, 2, 
504, 505, 506, 0, 
497, 506, 507, 1, 
497, 506, 508, 0, 
507, 508, 509, 1, 
509, 0, 510, 2, 
510, 506, 511, 1, 
510, 506, 512, 0, 
511, 512, 513, 1, 
};
	execute_circuit<uint32_t>(B, gates, sizeof(gates)/sizeof(uint32_t)/4);
	Bit_T<Wire> ret = B[513];
	delete[] B;
	return ret;
}
