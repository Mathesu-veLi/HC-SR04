#ifndef VELI_ULTRASONIC
#define VELI_ULTRASONIC

class veli_ultrasonic {
  private: 
    int pinTrigger;
    int pinEcho;

  public:
    veli_ultrasonic(int pinTrigger, int pinEcho);

    double cm_distance();
    double m_distance();
};

#endif