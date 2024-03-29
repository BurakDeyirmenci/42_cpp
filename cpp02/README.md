# C++ Modül 01 Projesi

Bu proje, C++ Modül 02 kapsamındaki egzersizleri içerir.  Bu modülde ad-hoc polimorfizm, operatör aşırı yükleme ve Orthodox Canonical sınıf formuna dalmaktayız.

## İçindekiler

1. [Kurulum](#kurulum)
2. [Kullanım](#kullanım)
3. [Yeni Kural](#Yeni-Kural)
4. [Egzersizler](#egzersizler)
	1. [Egzersiz 00: My First Class in Orthodox Canonical Form](#egzersiz00)
	2. [Egzersiz 01: Towards a more useful fixed-point number class](#egzersiz02)
	3. [Egzersiz 02: Now we’re talking](#egzersiz03)
	4. [Egzersiz 04: BSP](#egzersiz-04-bsp)
## Kurulum

 Projeyi yerel makinenize klonlayın:  
 `bash git clone <proje-url>`
## Kullanım

Her egzersiz kendi klasörüne sahiptir. Her klasörün içinde `Makefile` ve ilgili C++ dosyaları bulunmaktadır.
### Yeni Kural

Orthodox Canonical Form Kullanımı zorumlu.
1. Default constructor
2. Copy constructor
3. Copy assignment operator
4. Destructor

## Egzersizler
### Egzersiz 00: My First Class in Orthodox Canonical Form

Egzersiz 00, birinci sınıfın Orthodox Canonical Form'da oluşturulmasını içerir. Sınıf, sabit bir virgül noktası değerini temsil eder.

- Özel üyeler:
    - Sabit bir tamsayı, sabit virgül noktası değerini saklamak için.
    - Kesirli bit sayısını saklamak için sabit bir tam sayı. Değeri her zaman tam sayı harfî değeri 8 olacaktır.
- Genel üyeler:
    - Sabit virgül noktası değerini 0 olarak başlatan varsayılan yapılandırıcı.
    - Kopya yapılandırıcı.
    - Kopya atama operatörü aşırı yükleme.
    - Yıkıcı.
    - `int getRawBits() const;` adında bir üye işlev, sabit virgül noktası değerinin ham değerini döndürür.
    - `void setRawBits(int const raw);` adında bir üye işlev, sabit virgül noktası değerinin ham değerini ayarlar.

### Egzersiz 01:Towards a more useful fixed-point number class

Egzersiz 01, sabit noktalı sayı sınıfına ekleyeceğiniz daha fazla üye işlevi içerir. Bu, sabit noktalı değeri bir ondalık değere dönüştürme ve ondalık değeri bir tamsayı değerine dönüştürme yeteneği ekler.

### Egzersiz 02: Now we’re talking

Egzersiz 02, sınıfa aşağıdaki operatörleri aşırı yükleyen genel üye işlevler eklemenizi gerektirir:

- Karşılaştırma operatörleri: >, <, >=, <=, == ve !=
- Aritmetik operatörler: +, -,\*, ve /
- Artırma/azaltma operatörleri (ön artırma ve son artırma, ön azaltma ve son azaltma)

### Egzersiz 03: BSP

Egzersiz 03, artık işlevsel bir Sabit sınıfa sahip olduğunuzda, bu sınıfı kullanmanın bir yolunu uygulamanızı istiyor. Bir noktanın bir üçgenin içinde olup olmadığını belirten bir işlevi uygulamanız bekleniyor.