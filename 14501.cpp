//#include "iostream"
//#include "stack"
//
///*
//N = 남은 날짜
//T = 상담에 걸리는 기간
//P = 받을 수 있는 금액
//*/
//
//using namespace std;
//
//int main() {
//	int N = 0;
//	
//	cin >> N;
//
//	int *T = new int[N];
//	int *P = new int[N];
//
//	for (int i = 0; i < N; ++i) {
//		cin >> T[i] >> P[i];
//	}
//
//	int max_profit = 0,tmp = 0;
//
//	for (int j = 0; j < N; ++j) {
//		tmp = 0;
//		int i = j;
//		while (1){
//			if (i + T[i] >= N) break;
//			tmp += P[i];
//			cout << (i) << ' '<<T[i] << ' ';
//			cout << "tmp=" << tmp << endl;
//			i += T[i];
//		}
//		cout << "tmp=" << tmp<< endl;
//		max_profit = tmp > max_profit ? tmp : max_profit;
//	}
//
//	cout << max_profit;
//
//	delete(T);
//	delete(P);
//}