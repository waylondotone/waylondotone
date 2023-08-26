#include <iostream>
#include <vector>

using namespace std;

vector<int> ConstructVector(){
return vector<int>{1,2,3,4,5};
}

void Method1_clear(){

vector<int> data = ConstructVector();
// 打印 vector 容器的大小和容量
std::cout << "original: size = " << data.size() << " ; capacity = " << data.capacity() << std::endl;

data.clear();

// 再次打印更新后 vector 容器的大小和容量
std::cout << "new: size = " << data.size() << " ; capacity = " << data.capacity() << std::endl;
}

void Method2_erase(){

vector<int> data = ConstructVector();
// 打印 vector 容器的大小和容量
std::cout << "original: size = " << data.size() << " ; capacity = " << data.capacity() << std::endl;

for(auto iter = data.begin();iter!=data.end();){
iter = data.erase(iter);
}

// 再次打印更新后 vector 容器的大小和容量
std::cout << "new: size = " << data.size() << " ; capacity = " << data.capacity() << std::endl;


vector<int> data1 = ConstructVector();
data1.erase(data1.begin(),data1.begin()+2);

std::cout << "new: size = " << data1.size() << " ; capacity = " << data1.capacity() << std::endl;
}
void Method3_swap(){

vector<int> data = ConstructVector();
// 打印 vector 容器的大小和容量
std::cout << "original: size = " << data.size() << " ; capacity = " << data.capacity() << std::endl;

vector<int>().swap(data);

// 再次打印更新后 vector 容器的大小和容量
std::cout << "new: size = " << data.size() << " ; capacity = " << data.capacity() << std::endl;
}

int main(){
	std::cout<<"Method 1"<<std::endl;
Method1_clear();

	std::cout<<"Method 2"<<std::endl;
Method2_erase();

	std::cout<<"Method 3"<<std::endl;
Method3_swap();

return 0;
}
