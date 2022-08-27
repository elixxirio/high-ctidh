// DO NOT EDIT! generated by ./autogen

#include "primes.h"

// number of keys: 1735592693373310657150088427047991236530523951657443879308823828125
// approximately 2^220.042683

// average costs (calculated):
// mults 366212.822175 AB 3.277705 elligator 6.555410 clear2 13.110820 isog0 0.031454 0.068980 0.033358 0.023914 0.016873 0.014170 0.010987 0.008607 0.007230 0.006322 0.005159 0.004730 0.004356 0.004016 0.003842 0.003534 0.003175 0.002957 0.002820 0.998707 0.001615 0.000000 2.000000 -0.000000 isog1 0.005548 0.012060 0.004607 0.002631 0.001531 0.001057 0.000686 0.000456 0.000327 0.000243 0.000170 0.000132 0.000102 0.000077 0.000059 0.000041 0.000027 0.995995 0.999063 2.001293 1.998385 0.000000 -0.000000 0.000000 isog2 0.962998 2.918959 2.962035 2.973455 2.981597 2.984772 2.988327 2.990937 2.992443 2.993435 2.994671 2.995138 2.995542 2.995907 2.996099 2.996424 2.996798 2.001048 1.998117 0.000000 -0.000000 0.000000 0.000000 0.000000 maxdac 54.128252 113.530500 97.554711 94.387013 85.231368 100.283472 109.264564 100.187701 91.141742 118.189256 85.100739 76.082419 67.066862 52.045227 73.074489 88.089992 67.061651 74.113755 74.114927 131.458970 40.059974 0.000000 77.386022 -0.000000 eachdac 3.555410 0.388743 0.478487 0.501839 0.518373 0.524798 0.531973 0.537228 0.540259 0.542252 0.544734 0.545670 0.546481 0.547213 0.547598 0.548250 0.549000 0.549458 0.549750 0.550193 2.552174 6.555410 2.552569 6.555410

// average costs (4096 simulated trials):
// mults 366139.198486 AB 3.276367 elligator 6.552734 clear2 13.105469 isog0 0.026855 0.067627 0.036133 0.026855 0.017334 0.015869 0.009033 0.008545 0.008057 0.005127 0.004639 0.004150 0.005615 0.004395 0.003418 0.004150 0.002930 0.003662 0.004639 0.998535 0.002197 0.000000 2.000000 0.000000 isog1 0.005615 0.008057 0.005127 0.001709 0.001465 0.000977 0.000732 0.000000 0.000000 0.000488 0.000244 0.000488 0.000000 0.000244 0.000000 0.000244 0.000000 0.995361 0.998047 2.001465 1.997803 0.000000 0.000000 0.000000 isog2 0.967529 2.924316 2.958740 2.971436 2.981201 2.983154 2.990234 2.991455 2.991943 2.994385 2.995117 2.995361 2.994385 2.995361 2.996582 2.995605 2.997070 2.000977 1.997314 0.000000 0.000000 0.000000 0.000000 0.000000 maxdac 53.686523 113.410400 97.596924 94.418457 85.233154 100.311279 109.222412 100.175537 91.149902 118.162354 85.092773 76.080078 67.083008 52.051025 73.066162 88.109863 67.056396 74.110107 74.160889 131.445557 40.081299 0.000000 77.379395 0.000000 eachdac 3.586914 0.398438 0.469727 0.494629 0.515137 0.519043 0.533203 0.535645 0.536621 0.541504 0.542969 0.543457 0.541504 0.543457 0.545898 0.543945 0.546875 0.545410 0.543457 0.547363 2.548340 6.552734 2.550293 6.552734

const long long primes[primes_num] = {
  3, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, 1009, 1013, 1019, 1021, 1031, 1033, 1039, 1049, 1051, 1061, 1063, 1069, 1087, 1091, 1093, 1097, 1103, 1109, 1117, 1123, 1129, 1151, 1153, 1163, 1171, 1181, 1187, 1193, 1201, 1213, 1217, 1223, 1229, 1231, 1237, 1249, 1259, 1277, 1279, 1283, 1289, 1291, 1297, 1301, 1303, 1307, 1319, 1321, 1327, 1361, 1367, 1373, 1381, 1399, 1409, 1423, 1427, 1429, 1433, 1439, 1447, 1451, 1453, 1459, 3413,
};

const long long primes_dac[primes_num] = {
  0, 2, 4, 0, 10, 4, 24, 16, 8, 48, 42, 34, 32, 106, 88, 81, 72, 80, 20, 16, 210, 0, 192, 164, 48, 96, 132, 464, 417, 64, 424, 388, 416, 180, 384, 296, 266, 192, 272, 258, 136, 130, 785, 256, 788, 708, 776, 784, 0, 682, 832, 554, 641, 592, 552, 648, 672, 328, 576, 514, 264, 160, 80, 320, 1704, 32, 1384, 1448, 1424, 1600, 1410, 1354, 1440, 1345, 1285, 1352, 1320, 1290, 1092, 3594, 1312, 1284, 3744, 1282, 324, 532, 3472, 1028, 1032, 3712, 1280, 3210, 544, 320, 3346, 1024, 2850, 3232, 128, 2882, 2896, 2400, 2584, 2730, 2832, 3104, 2322, 2194, 1304, 2880, 2212, 2689, 3328, 2186, 2692, 2640, 2696, 2308, 2084, 2561, 2066, 2114, 2178, 2088, 2058, 656, 328, 1536, 6484, 1288, 6730, 6916, 6920, 6740, 576, 520, 6218, 7168, 5780, 6722, 5824, 6800, 6273, 6736, 6786, 6212, 6666, 5296, 512, 6178, 64, 6164, 6660, 6672, 6145, 6658, 6784, 4746, 5640, 5258, 5288, 6272, 4108, 5442, 4386, 5456, 4618, 5192, 4178, 6656, 4362, 4418, 4225, 4353, 2096, 3088, 3080, 4624, 13860, 4610, 2704, 4232, 4368, 4162, 4354, 13904, 4256, 2192, 2320, 1184, 1284, 1104, 2624, 2564, 13336, 1344, 4224, 4104, 12628, 10945, 13394, 13636, 288, 528, 13354, 2304, 13648, 2052, 2112, 2080, 2056, 12297, 13448, 12610, 640, 13584, 12432, 13392, 10800, 13632, 11284, 12322, 256, 128, 8388, 10944, 8752, 9378, 2048, 9506, 51840,
};

const long long primes_daclen[primes_num] = {
  0, 2, 3, 3, 4, 4, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 8, 7, 8, 8, 8, 8, 8, 9, 9, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 10, 9, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 12, 11, 11, 12, 11, 11, 11, 12, 11, 11, 12, 11, 12, 11, 11, 12, 11, 12, 12, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 13, 12, 13, 13, 13, 13, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 12, 13, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 13, 13, 13, 13, 13, 13, 14, 13, 13, 13, 13, 13, 13, 13, 13, 14, 13, 13, 13, 14, 14, 14, 14, 13, 13, 14, 13, 14, 13, 13, 13, 13, 14, 14, 14, 13, 14, 14, 14, 14, 14, 14, 14, 13, 13, 14, 14, 14, 14, 13, 14, 16,
};

const long long primes_batchsize[primes_batches] = {
  9, 10, 8, 8, 7, 10, 12, 11, 10, 15, 10, 9, 8, 6, 10, 13, 10, 9, 12, 13, 10, 10, 10, 1,
};

const long long primes_batchstart[primes_batches] = {
  0, 9, 19, 27, 35, 42, 52, 64, 75, 85, 100, 110, 119, 127, 133, 143, 156, 166, 175, 187, 200, 210, 220, 230,
};

const long long primes_batchstop[primes_batches] = {
  9, 19, 27, 35, 42, 52, 64, 75, 85, 100, 110, 119, 127, 133, 143, 156, 166, 175, 187, 200, 210, 220, 230, 231,
};

const long long primes_batchmaxdaclen[primes_batches] = {
  5, 7, 8, 9, 9, 10, 10, 11, 12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 14, 14, 14, 14, 14, 16,
};

const long long primes_batchbound[primes_batches] = {
  1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 0, 2, 0,
};
