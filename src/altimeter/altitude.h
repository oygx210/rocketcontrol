// #include "I2Cdev.h"
#include "SparkFunMPL3115A2.h"



class Altitude {
    private:
        MPL3115A2 myPressure;

    public:
        float altitude_offset=0;
        float current_altitude;
        float previous_altitude;
        bool is_apogee;
        float altitude_max;
        unsigned long start_descent_timer;

        int setupAlti();
        float processAltiData();
        Altitude();
};