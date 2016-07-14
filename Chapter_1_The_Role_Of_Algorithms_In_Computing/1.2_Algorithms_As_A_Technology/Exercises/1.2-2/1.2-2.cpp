/*
  Introduction to algorithms, CLRS
  Chapter 1: The Role of Algorithms in Computing
  Solution for Exersice 1.2-2
  Rakesh Kumar @ cpp.rakesh@gmail.com
  Date: June 20th, 2016
*/

/*
  1.2-2
  Suppose we are comparing implementations of insertion sort and merge sort on the
  same machine. For inputs of size n, insertion sort runs in 8n2 steps, while merge
  sort runs in 64n lg n steps. For which values of n does insertion sort beat merge
  sort?
 */

/*
  Result

  n == [ 2] || Insertion Timing == [32.00000000] || Merge Timing == [128.00000000]
  n == [ 3] || Insertion Timing == [72.00000000] || Merge Timing == [304.31280014]
  n == [ 4] || Insertion Timing == [128.00000000] || Merge Timing == [512.00000000]
  n == [ 5] || Insertion Timing == [200.00000000] || Merge Timing == [743.01699036]
  n == [ 6] || Insertion Timing == [288.00000000] || Merge Timing == [992.62560028]
  n == [ 7] || Insertion Timing == [392.00000000] || Merge Timing == [1257.69500508]
  n == [ 8] || Insertion Timing == [512.00000000] || Merge Timing == [1536.00000000]
  n == [ 9] || Insertion Timing == [648.00000000] || Merge Timing == [1825.87680083]
  n == [10] || Insertion Timing == [800.00000000] || Merge Timing == [2126.03398073]
  n == [11] || Insertion Timing == [968.00000000] || Merge Timing == [2435.43985952]
  n == [12] || Insertion Timing == [1152.00000000] || Merge Timing == [2753.25120055]
  n == [13] || Insertion Timing == [1352.00000000] || Merge Timing == [3078.76584549]
  n == [14] || Insertion Timing == [1568.00000000] || Merge Timing == [3411.39001016]
  n == [15] || Insertion Timing == [1800.00000000] || Merge Timing == [3750.61497178]
  n == [16] || Insertion Timing == [2048.00000000] || Merge Timing == [4096.00000000]
  n == [17] || Insertion Timing == [2312.00000000] || Merge Timing == [4447.15957128]
  n == [18] || Insertion Timing == [2592.00000000] || Merge Timing == [4803.75360166]
  n == [19] || Insertion Timing == [2888.00000000] || Merge Timing == [5165.47985635]
  n == [20] || Insertion Timing == [3200.00000000] || Merge Timing == [5532.06796146]
  n == [21] || Insertion Timing == [3528.00000000] || Merge Timing == [5903.27461621]
  n == [22] || Insertion Timing == [3872.00000000] || Merge Timing == [6278.87971904]
  n == [23] || Insertion Timing == [4232.00000000] || Merge Timing == [6658.68319932]
  n == [24] || Insertion Timing == [4608.00000000] || Merge Timing == [7042.50240111]
  n == [25] || Insertion Timing == [5000.00000000] || Merge Timing == [7430.16990364]
  n == [26] || Insertion Timing == [5408.00000000] || Merge Timing == [7821.53169099]
  n == [27] || Insertion Timing == [5832.00000000] || Merge Timing == [8216.44560374]
  n == [28] || Insertion Timing == [6272.00000000] || Merge Timing == [8614.78002033]
  n == [29] || Insertion Timing == [6728.00000000] || Merge Timing == [9016.41272696]
  n == [30] || Insertion Timing == [7200.00000000] || Merge Timing == [9421.22994357]
  n == [31] || Insertion Timing == [7688.00000000] || Merge Timing == [9829.12547981]
  n == [32] || Insertion Timing == [8192.00000000] || Merge Timing == [10240.00000000]
  n == [33] || Insertion Timing == [8712.00000000] || Merge Timing == [10653.76038009]
  n == [34] || Insertion Timing == [9248.00000000] || Merge Timing == [11070.31914256]
  n == [35] || Insertion Timing == [9800.00000000] || Merge Timing == [11489.59395796]
  n == [36] || Insertion Timing == [10368.00000000] || Merge Timing == [11911.50720332]
  n == [37] || Insertion Timing == [10952.00000000] || Merge Timing == [12335.98556981]
  n == [38] || Insertion Timing == [11552.00000000] || Merge Timing == [12762.95971269]
  n == [39] || Insertion Timing == [12168.00000000] || Merge Timing == [13192.36393828]
  n == [40] || Insertion Timing == [12800.00000000] || Merge Timing == [13624.13592291]
  n == [41] || Insertion Timing == [13448.00000000] || Merge Timing == [14058.21646012]
  n == [42] || Insertion Timing == [14112.00000000] || Merge Timing == [14494.54923243]
  n == [43] || Insertion Timing == [14792.00000000] || Merge Timing == [14933.08060494]
  n == [44] || Insertion Timing == [15488.00000000] || Merge Timing == [15373.75943808]
*/

#include <cstdio>
#include <cmath>

int main() {
	int n = 2;
	while (1) {
		const double insertion_sort_timing = 8 * n * n;
		const double merge_sort_timing = 64 * n * log2(n);

		printf("n == [%2d] || Insertion Timing == [%6.8f] || Merge Timing == [%6.8f]\n", n, insertion_sort_timing, merge_sort_timing);

		if (insertion_sort_timing > merge_sort_timing)
			break;
		++n;
	}
	
	return 0;
}
