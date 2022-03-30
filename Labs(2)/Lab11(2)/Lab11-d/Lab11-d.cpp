#include <iostream>

class Dog {
private:
	char* _nickName;
	float _weight;
	int _age;
public:
	Dog() : _nickName{ (char*)"no Nick" }, _weight(0), _age(0) {};
	Dog(const char* nickName, float weight, int age) :_nickName{(char*) nickName }, _weight{ weight }, _age{ age } {}
	Dog(const Dog& other) {
		this->_age = other._age;
		this->_nickName = other._nickName;
		this->_weight = other._weight;
	}
	void set(const char* nickName,float weight,int age) {
		_nickName = (char*)nickName;
		_weight = weight;
		_age = age;
	}
	void get_InfoDog() {
		std::cout << "Dog: " << _nickName << "  age:" << _age << " weight:" << _weight << std::endl;
	}
};

class Master {
private:
	char* _name;
	const int _id = 127;
	Dog _dog;
	static int _count;
public:
	
	Master() :_name{ (char*)"no name" }, _dog()
	{
		_count++;
	}
	Master(const char* name, Dog dog) :_name{ (char*)name }, _dog{ dog }{
		_count++;
	}
	Master(const Master& other){
		this->_name = other._name;
		this->_dog = other._dog;
		_count++;
	}
	void set(const char* name, Dog dog) {
		_name = (char*)name;
		_dog = dog;
	}
	void get_InfoMaster() {
		std::cout << "ID club: " << _id << "  Master name: " << _name << std::endl;
	}
	static int Get_Count();
};
int Master::_count = 0;
int Master::Get_Count(){ 
	return _count;
}
int main()
{
	Dog dog1{ "Ben",4.5,2 };
	Dog* dog2[2];
	dog2[0] = new Dog("Marta", 8.5, 5);
	dog2[1] = new Dog();
	dog2[1]->set("Alex", 5, 3);
	Master master1("Dan", dog1);
	Master master2;
	master2.set("Alisa", *dog2[0]);
	master1.get_InfoMaster();
	dog1.get_InfoDog();
	std::cout<<std::endl;
	master2.get_InfoMaster();
	dog2[0]->get_InfoDog();
	dog2[1]->get_InfoDog();
	std::cout << std::endl;

	std::cout << "All members: " << Master::Get_Count() << std::endl;
}