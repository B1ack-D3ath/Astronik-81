# Astronik 81 Yazılım

Bu proje, **TEKNOFEST Sanayide Dijital Teknolojiler Yarışması** için geliştirilen *Otonom Güdümlü Araç* yazılımlarını içerir. Yazılım, aracın otonom kontrolü, güdümü, navigasyonu ve veri görselleştirme işlemlerini gerçekleştirmek üzere tasarlanmıştır.

## Özellikler

- **Otonom Kontrol**: Araç, çevresel verileri işleyerek bağımsız hareket edebilir.
- **Engelden Kaçınma Algoritması**: LiDAR ve ultrasonik sensörlerden gelen verilerle engellerden kaçma.
- **Şerit Takip ve QR Kod İşleme**: Kamera görüntülerinden şeritleri takip ederek parkur navigasyonu sağlar.
- **Veri Görselleştirme**: UDP/IP protokolü ile kontrol arayüzüne veri aktarımı.
- **Algoritmalar**:
  - Engel Tespiti ve Kaçınma
  - Hareketlilik
  - Navigasyon
- **Veri Tabanı**: Microsoft SQL Server kullanılarak veri kaydı ve işleme.

## Teknolojiler ve Diller

- **Raspberry Pi 4**: Veri işleme ve sensör entegrasyonu için.
- **Deneyap Kart**: Sensörlerden veri alımı ve motor kontrolü.
- **LiDAR ve Ultrasonik Sensörler**: Çevresel tarama ve engel algılama.
- **Görüntü İşleme**: OpenCV ile çizgi ve QR kod takibi.
- **Veritabanı**: Microsoft SQL Server.
- **Programlama Dilleri**:
  - C++: Raspberry Pi yazılımı.
  - C: Deneyap Kartı için sensör ve motor kontrolü.
  - C# (.Net Core): Veri görselleştirme ve kontrol arayüzü.

## Gereksinimler

- **Yazılım Ortamı**:
  - Python 3.x (Raspberry Pi için)
  - Visual Studio (C# geliştirme için)
  - GCC veya ARM Toolchain (Deneyap Kart programlama için)
- **Kütüphaneler**:
  - OpenCV
  - SimpleCV
  - CanBus (Raspberry Pi ve Deneyap Kart arasında iletişim)
- **Donanımlar**:
  - Raspberry Pi 4
  - Deneyap Kart
  - LiDAR, Ultrasonik Sensörler, Kamera
  - Hub Motorlar ve Sürücüleri

## Kurulum

1. **Depoyu Klonlayın**:
    ```bash
    git clone https://github.com/B1ack-D3ath/Astronik-81.git
    cd Astronik-81
    ```

2. **Yazılım Kurulumları**:
    - **Raspberry Pi**:
        - Python kütüphanelerini yükleyin:
          ```bash
          pip install opencv-python simplecv
          ```
    - **Deneyap Kart**:
        - Geliştirme ortamını kurun (ARM GCC Toolchain).
        - Kart üzerindeki kodu derleyip yükleyin.
    - **Kontrol Arayüzü**:
        - Visual Studio kullanarak `ControlPanel.sln` dosyasını açın.
        - Derleme işlemini tamamlayın.

## Kullanım

1. Raspberry Pi'ı çalıştırın ve sensörlerin düzgün şekilde bağlandığından emin olun.
2. Deneyap Kart ve diğer bileşenlerin enerjisini sağlayın.
3. Kontrol arayüzünü başlatın ve araç ile aynı ağa bağlanın.
4. Aracı "Manuel Kontrol" modunda test edin.
5. "Otonom Mod" seçeneğini kullanarak aracı bağımsız çalıştırın.

## Ek Görseller

README dosyasında şu görsellerin bulunmasını öneriyorum:
- **Engelden Kaçınma Algoritması Akış Şeması**
- **Hareketlilik ve Navigasyon Algoritması Şeması**
- **Kontrol Paneli Görselleştirme Arayüzü**

Lütfen bu görselleri sağlarsanız, README’ye uygun şekilde ekleyebilirim.

---
