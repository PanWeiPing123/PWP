#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::cin;
template<typename T1, typename T2>
class Pair
{
private:
	T1 a;
	T2 b;
public:
	//这两个方法存在的意义在于可以重新赋值
	T1& first();
	T2& second();
	//返回数控的值
	T1& first()const { return a; }
	T2& second() const { return b; }
	
	Pair(const T1& aval, const T2& bval) :a(aval), b(bval){}
	Pair(){}
};
template<typename T1, typename T2>
T1& Pair<T1, T2>::first()
{
	return a;
}

template<typename T1, typename T2>
T2& Pair<T1, T2>::second()
{
	return b;
}

int main(void) {
	Pair<std::string, int> rating[4] = {
		Pair<std::string,int>("asdfg",4),
		Pair<std::string,int>("Hello world",5),
		Pair<std::string,int>("nihao shijie",6),
		Pair<std::string,int>("zhuxiaom",1)
	};
	int jonins=sizeof(rating)/sizeof(Pair<std::string, int>);
	cout << "Raiting:\t Eatery\n";
	for (int i = 0; i < jonins; i++) {
		cout << rating[i].second()<<":\t"
			<< rating[i].first()<<endl;
	}
	cout << "修改数据后的参数:\n";
	rating[2].first() = "hklfdasi";
	rating[2].second() = 89;
	cout << rating[2].second() << ":\t"
		<< rating[2].first() << endl;
	return 0;
}

