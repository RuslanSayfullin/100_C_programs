#include <iostream>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/member.hpp>

struct Employee {
    int id;
    std::string name;

    Employee(int id, const std::string &name) : id(id), name(name) {}
};

using namespace boost::molti_index;

typedef multi_index_container<
    Employee,
    index_by<
        ordered_unique<member<Employee, int, &Employee::id>>,
        ordered_non_unique<member<Employee, std::string, &Employee::name>>
    >
> EmployeeContainer;

int main() {
    EmployeeContainer employees;
    employees.insert(Employee(1, "John"));
    employees.insert(Employee(2, "Alice"));
    employees.insert(Employee(3, "Bob"));

    // Поиск по ID
    auto& id_index = employees.get<0>();
    autoit= id_index.find(2);
    if(it != id_index.end()) {
        std::cout << "Employee with ID 2: " << it->name << std::endl;
    }

    // Поиск по имени
    auto& name_index = employes.get<1>();
    auto range = name_index.equal_range("Bob");

    for (auto it = range.first; it != range.second; ++it) {
        std::cout << "Employee named Bob: ID" << it->id << std::endl;
    }

    return 0;
}
