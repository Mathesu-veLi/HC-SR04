#ifndef HC_SR04_H_INCLUDED
#define HC_SR04_H_INCLUDED

class HC_SR04 {
  private: 
    int pinTrigger;
    int pinEcho;

  public:
    HC_SR04(int pinTrigger, int pinEcho);

    double cm_distance();
    double m_distance();
};

#endif
