#include "Overload.h"

Overload::Overload(const std::string& name) : _name(name) {}  
Overload::Overload() :_name("NoName") {}

std::string& Overload::getName() {    
    return _name;
}

void Overload::setName(std::string name) {
    _name = name;
}

const Overload& Overload::operator+(Overload& other) {
    std::string str;
    str = this->_name + other.getName();
    return str;
}

size_t Overload::operator-(size_t num) {
    size_t res;
    res = this->_name.size() - num;
    return res;
}

size_t Overload::operator*(size_t num) {
    size_t res;
    res = this->_name.size() * num;
    return res;
}

size_t Overload::operator/(size_t num) {
    size_t res = this->_name.size() / num;
    return res;
}

bool Overload::operator==(Overload& other) {
    return this->_name == other.getName();
}

bool Overload::operator!=(Overload& other) {
    return!(this->_name == other.getName());
}

std::string Overload::operator+=(Overload& other) { 
    std::string str;
    str = this->_name += other.getName();
    return str;
}

std::ostream& operator<<(std::ostream& out, const Overload& point)
{
    out << point._name;
    return out;
}
