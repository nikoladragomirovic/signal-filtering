
#ifndef IIR_LOW_PASS_FILTERS_H
#define IIR_LOW_PASS_FILTERS_H

Int16 IIR_low_pass_2000_2[6] = { 32767,  -31653,  32767,
		32767, -30070, 29572};

Int16 IIR_low_pass_300_2[6] = { 32767,  -31653,  32767,
		32767, -30070, 29572};

Int16 IIR_low_pass_300_4[2][6] = { { 32767,  -32741,  32767,
		32767, -32087, 31469},
													{ 32767,  -32741,  32767,
															32767, -32087, 31469}};

Int16 IIR_low_pass_300_6[3][6] = { { 32767,  -32741,  32767,
		32767, -32087, 31469},
		                                                 { 32767,  -32741,  32767,
		                                                			32767, -32087, 31469},
															{ 32767,  -32741,  32767,
																	32767, -32087, 31469 } };
#endif
