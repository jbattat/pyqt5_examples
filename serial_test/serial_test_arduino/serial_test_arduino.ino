const int BUFFER_SIZE = 100;
char buf[BUFFER_SIZE];
int xx = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    int rlen = Serial.readBytesUntil('\n', buf, BUFFER_SIZE);
    //Serial.print('I received: ');
      //for (int ii=0; ii<rlen; ii++) {
      //  Serial.print(buf[ii]);
      //}
      
      // And send something back
      //Serial.print(xx);
      Serial.println(buf);
      //Serial.print(",james,");
      //Serial.println(xx*xx);
      //xx += 1;
  }

}
