#include "DeliveryOrder.h"
#include <iostream>

using namespace std;

int DeliveryOrder::orderCount;

DeliveryOrder::DeliveryOrder(string name, string date, string phone,
                             int miles) {
  this->name = name;
  this->date = date;
  this->phone = phone;
  this->miles = miles;
  DeliveryOrder::orderCount++;
}

void DeliveryOrder::receipt() const {
  cout << "Order Detail:"
       << "\n";
  cout << "\tName: " << name << "\n";
  cout << "\tDate: " << date << "\n";
  cout << "\tPhone: " << phone << "\n";
  cout << "\tOrder Balance: $" << orderBalance << endl;
}

int DeliveryOrder::getOrderCount() {
  return DeliveryOrder::orderCount;
}

float DeliveryOrder::getTotalBalance() const {
  return this->orderBalance * (1 + DeliveryOrder::taxRate) + this->miles +
         DeliveryOrder::deliveryRate;
}
