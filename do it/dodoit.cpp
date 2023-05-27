#include <iostream>
#include <doodle/doodle.hpp>

using namespace std;
using namespace doodle;
class Scene {
public:
	int a;
	int b;
	void print() {
		cout << "Print is work" << endl;
	}
};
int main() {
	Scene a;
	a.print();
	
}