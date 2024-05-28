#include <iostream>
using namespace std;

class remotelampu {
private:
	string saklarNo[10];
public:
	void setSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getSaklarNo(int i) {
		return saklarNo[i];
	}
};

int main() {
	remotelampu lampurumah;
	
	lampurumah.setSaklarNo(0, "Lampu Teras Rumah");
	lampurumah.setSaklarNo(1, "Lampu Ruang Tamu");
	lampurumah.setSaklarNo(2, "Lampu Kamar Tidur");
	lampurumah.setSaklarNo(3, "Lampu Dapur");

	cout << lampurumah.getSaklarNo(0) << endl;
	cout << lampurumah.getSaklarNo(1) << endl;
	cout << lampurumah.getSaklarNo(2) << endl;
	cout << lampurumah.getSaklarNo(3) << endl;
	return 0;
}