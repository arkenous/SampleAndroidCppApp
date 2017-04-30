#ifndef SAMPLEANDROIDCPPAPP_CALCULATE_HPP
#define SAMPLEANDROIDCPPAPP_CALCULATE_HPP

class Calculate {
public:
  Calculate();
  int calc(int initial_value);

private:
  static const int LOOP = 1000000;
};

#endif //SAMPLEANDROIDCPPAPP_CALCULATE_HPP
