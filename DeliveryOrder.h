#ifndef DELIVERYORDER_H
#define DELIVERYORDER_H

#include <iostream>
#include <string>
using namespace std;

class DeliveryOrder {
private:
  string name;
  string date;
  string phone;
  float miles;
  float orderBalance;
  static int orderCount;
  static const float taxRate;
  static const float deliveryRate;

public:
  DeliveryOrder(string name, string date, string phone, int miles);
  void receipt() const;
  float getTotalBalance() const;
  static int getOrderCount();
  virtual float VIPDiscount() = 0;
  ~DeliveryOrder();
};

#endif
