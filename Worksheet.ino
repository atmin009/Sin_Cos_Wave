void setup() {
  Serial.begin(9600); 
}

void loop() {
  // ส่วนหลักของโปรแกรมที่ทำงานซ้ำๆ:
  for (float i = 0; i < 2 * PI; i += 0.1) {
    float sinValue = sin(i); // คำนวณค่า sine
    float cosValue = cos(i); // คำนวณค่า cosine

    // ส่งค่า sin ไปที่ Serial Plotter
    Serial.print(sinValue);
    Serial.print(",");

    // ส่งค่า cos ไปที่ Serial Plotter
    Serial.print(cosValue);
    Serial.print(",");

    // ส่งค่าเส้นตรงที่ 0 ไปที่ Serial Plotter
    Serial.println(0);

    delay(50);
  }
}
