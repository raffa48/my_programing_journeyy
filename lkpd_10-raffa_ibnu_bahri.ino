//================MONSTERCHIP INDONESIA==================

// Mendefinisikan pin untuk tombol
const int buttonPin = 26; // pin Push button ada di pin 26

void setup() {
  // Mengatur pin tombol sebagai input
  pinMode(buttonPin, INPUT);

  // Memulai komunikasi serial
  Serial.begin(9600);
}

void loop() {
  // Membaca status tombol
  int buttonState = digitalRead(buttonPin);

  // Menampilkan status tombol di Serial Monitor
  Serial.print("Tombol ditekan: ");
  if (buttonState == HIGH) {
    Serial.println("YA"); // Jika tombol di tekan, pada serial monitor  akan menampilkan kata "Tombol dotekan: YA"
  } else {
    Serial.println("TIDAK"); // Jika tombol Tidak di tekan, pada serial monitor  akan menampilkan kata "Tombol dotekan: TIDAK"
  }

  // Menunda selama 0,1 detik sebelum membaca ulang tombol
  delay(100);
}
