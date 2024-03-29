# cub3D Projesi

## İçindekiler

I. [Önsöz](https://chat.openai.com/c/29e225f6-4f09-474a-bf35-4ca90493cd4e#%C3%B6ns%C3%B6z)  
II. [Hedefler](https://chat.openai.com/c/29e225f6-4f09-474a-bf35-4ca90493cd4e#hedefler)  
III. [Genel Talimatlar](https://chat.openai.com/c/29e225f6-4f09-474a-bf35-4ca90493cd4e#genel-talimatlar)  
IV. [Zorunlu Kısım - cub3D](https://chat.openai.com/c/29e225f6-4f09-474a-bf35-4ca90493cd4e#zorunlu-k%C4%B1s%C4%B1m---cub3d)  
V. [Bonus Kısım](https://chat.openai.com/c/29e225f6-4f09-474a-bf35-4ca90493cd4e#bonus-k%C4%B1s%C4%B1m)  
VI. [Örnekler](https://chat.openai.com/c/29e225f6-4f09-474a-bf35-4ca90493cd4e#%C3%B6rnekler)

---

## Önsöz

Bu proje, dünyaca ünlü Wolfenstein 3D oyunundan esinlenilerek oluşturulmuştur. İlk FPS oyunu olarak tarihe geçen Wolfenstein 3D, birçok oyun geliştiricisi için ilham kaynağı olmuştur. Bu projede, Ray-Casting (Işın Takibi) yöntemini kullanarak birinci şahıs bakış açısına sahip bir labirent oyunu geliştireceksiniz.

## Hedefler

Bu projenin hedefleri şunlardır:

- C programlama dili ve temel algoritmaları kullanarak gelişim sağlamak.
- Grafik tasarım alanında miniLibX kütüphanesini kullanarak ilerleme kaydetmek.
- Matematiği ve algoritmaları eğlenceli bir oyun geliştirme sürecinde pratiğe dönüştürmek.

## Genel Talimatlar

- Projeleriniz C programlama dilinde yazılmalıdır.
- Yazdığınız kodlar Norm'a uygun olmalıdır.
- Tanımlanmamış davranışlar dışında programlarınız beklenmedik şekilde sonlanmamalıdır.
- Hafıza yönetimi konusunda dikkatli olunmalı ve bellek sızıntıları önlenmelidir.
- Makefile dosyanızı oluştururken gerekli flag'leri kullanmalısınız.
- Test programları yazmanız önerilir ancak zorunlu değildir.
- Çalışmalarınızı atanmış olan git repolarına yüklemelisiniz.

## Zorunlu Kısım - cub3D

- Program adı: cub3D
- Teslim edilecek dosyalar: Tüm kaynak dosyaları, Makefile
- Argümanlar: *.cub formatında bir harita dosyası
- Harici fonksiyonlar: open, close, read, write, printf, malloc, free, perror, strerror, exit ve Math kütüphanesi fonksiyonları
- Libft kullanımı: Evet
- Açıklama: Birinci şahıs bakış açısıyla bir labirentin içinde "gerçekçi" bir 3D grafik gösterimi oluşturulmalıdır.

## Bonus Kısım

- Bonuslar, zorunlu bölümün mükemmel olması durumunda değerlendirilecektir.
- Bonuslar arasında duvar çarpmaları, mini harita sistemi, açılıp kapanabilen kapılar, animasyonlu spritelar, ve mouse yardımıyla bakış açısını değiştirme gibi özellikler bulunmaktadır.

## Örnekler

- Proje geliştirme sürecinde ilham alabileceğiniz örnekler sunulmuştur. Bunlar arasında orijinal Wolfenstein 3D oyunu, zorunlu bölümün bir örneği ve bonus özelliklerin yer aldığı örnekler bulunmaktadır.