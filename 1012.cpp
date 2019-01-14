//#include <iostream>
//#include <string.h>
//#include <vector>
//
//int main() {
//	int T;
//	int M, N, K;
//	std::cin >> T;
//	int *ans = new int[T];
//	for (int p = 0; p < T; ++p) {
//		std::cin >> M >> N >> K;
//		int *field = new int[M*N];
//		int *ori = new int[M*N];
//
//		memset(field, 0, M*N * sizeof(int));
//		memset(ori, 0, M*N * sizeof(int));
//
//		for (int i = 0; i < K; ++i) {
//			int x, y;
//			std::cin >> x >> y;
//			field[y*M + x] = 1;
//		}
//
//		//memcpy(ori, field, N*M * sizeof(int));
//		std::vector<int> stack;
//		int k = 0;
//
//		for (int y = 0; y < N; ++y) {
//			for (int x = 0; x < M; ++x) {
//				int ym = y, xm = x;
//				if (field[y*M + x] == 1 && ori[y*M + x] == 0 &&
//					y >= 0 && y < N && x >= 0 && x < M) {
//					k++;
//				}
//				do {
//					if (field[ym*M + xm] == 1 && ori[ym*M + xm] == 0 &&
//						ym >= 0 && ym < N && xm >= 0 && xm < M) {
//						ori[ym*M + xm] = k;
//						//if (field[(ym + 1)*M + xm] == 1 && ori[(ym + 1)*M + xm] == 0) {
//						stack.push_back(ym + 1);
//						stack.push_back(xm);
//						//}
//						//if (field[(ym - 1)*M + xm] == 1 && ori[(ym - 1)*M + xm] == 0) {
//						stack.push_back(ym - 1);
//						stack.push_back(xm);
//						//}
//						//if (field[(ym)*M + xm + 1] == 1 && ori[(ym)*M + xm + 1] == 0) {
//						stack.push_back(ym);
//						stack.push_back(xm + 1);
//						//}
//						//if (field[(ym)*M + xm - 1] == 1 && ori[(ym)*M + xm - 1] == 0) {
//						stack.push_back(ym);
//						stack.push_back(xm - 1);
//						//}
//					}
//					if (stack.size() == 0)break;
//						xm = stack.back();
//						stack.pop_back();
//						ym = stack.back();
//						stack.pop_back();
//				} while (1);
//
//				/*for (int y = 0; y < N; ++y) {
//					for (int x = 0; x < M; ++x) {
//						std::cout << ori[y*M + x] << " ";
//					}
//					std::cout << std::endl;
//				}*/
//			}
//		}
//		ans[p] = k;
//		delete(field);
//		delete(ori);
//	}
//	for (int p = 0; p < T; ++p) {
//		std::cout << ans[p] << std::endl;
//	}
//	return 0;
//}