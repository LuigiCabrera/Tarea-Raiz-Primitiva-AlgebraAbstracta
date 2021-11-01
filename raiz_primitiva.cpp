#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull expo_mood(ull base, ull expo, ull mood){ // Return (base^expo) % mod very fast
	if (expo == 1) return base % mood;
	ull result = expo_mood(base, (ull) expo/2, mood);
	if (expo % 2) return (result*result*base) % mood;
	return result*result % mood;
}

ull primitive_root(ull prime){
	set <ull> numbs;
	bool verify;
	ull result;
	for (ull root = 1; root < prime; root++){
		verify = true;
		for (ull expo = 1; expo < prime; expo++){
			result = expo_mood(root, expo, prime);
			if (numbs.find(result) != numbs.end()){
				verify = false;
				break;
			}
			numbs.insert(result);
		}
		if (verify) return root;
		numbs.clear();
	}
	return 0;
}

int main(){
	ull p, result;
	cout << "\n\n\t\t *** Smallest Primitive Root ***\n\n";
	while (1){
		cout << "\n\nType a prime number p: "; cin>>p;
		if (p == 0) break;
		result = primitive_root(p);
		if (result == 0) cout << "Maybe " << p << " its not prime\n";
		else cout << "Primitive Root of " << p << " = " << result << "\n";
	}
	return 0;
}
