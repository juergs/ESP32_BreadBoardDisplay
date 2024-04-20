class Orientation {
 public:
  int getAzimuth();
  void init(int degrees, int minutes);
  void read();
  void calibrate();
  void test_connection();

 private:
  float _magneticDeclinationDegrees = 0;
};