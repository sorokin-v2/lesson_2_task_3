#include <iostream>
struct Address
{
    std::string country;
    std::string city;
    std::string street;
    int house_num;
    int apart_num;
    int index;
};

void print_address(const Address& addr)
{
    std::cout << "Город: " << addr.city << "\nУлица: " << addr.street <<
        "\nНомер дома: " << addr.house_num << "\nНомер квартиры: " << addr.apart_num <<
        "\nИндекс: " << addr.index << std::endl;
        
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Address addr1 = {"Россия", "Москва", "Арбат", 12, 8, 123456 };
    Address addr2 = {"Россия", "Ижевск", "Пушкина", 59, 143, 953769 };
    print_address(addr1);
    std::cout << std::endl;
    print_address(addr2);

    return 0;
}
