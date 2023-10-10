void setup() {
  // ที่นี่คือส่วนการเตรียมค่าเริ่มต้น ทำงานครั้งเดียว:
  Serial.begin(9600); // เริ่มการสื่อสารผ่าน Serial ที่ 9600 bps
}

void loop() {
  // ที่นี่คือส่วนหลักของโปรแกรมที่ทำงานซ้ำๆ:
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

    delay(50); // รอเพื่อสร้างกราฟบน Serial Plotter
  }
}
