# Agactaki-kok-degeri-alt-dugumlerin-toplami-mi-
![ikili_agac_resmi](http://sercancetin.com/wp-content/uploads/2017/01/ikili-a%C4%9Fa%C3%A7-yap%C4%B1s%C4%B1.png)
## Kodun Amacı:
`Bu kod, bir ikili ağaç oluşturur ve ağacın sol alt ve sağ alt düğümlerinin toplamı, kök düğümüne eşit mi değil mi kontrol eder.`
## Kod Nasıl Çalışır:
`Öncelikle ikili ağaçın çıktıda bilgi vermek amacı ile kök,sol alt düğüm,sağ alt düğümü yazdırdık.`

`Ardından  "dugum" adında bir struct tanımladık, bu struct'ın içinde "veri", "sol" ve "sag" adında üç değişken bulunuyor. 
"veri" değişkeni ile düğümün değerini, "sol" değişkeni ile sol alt düğümü ve "sag" değişkeni ile sağ alt düğümü tanımladık`

`Sonra, "veri" olarak verilen değerle yeni bir ikili ağaç düğümü oluşturduk ve bu oluşturulan düğümün bellekteki yeri için bir işaretçi döndürecek.
Fonksiyon öncelikle bir "struct dugum" veri tipinde bir bellek bloğu için yer ayıracak ve bu bloğun adresini "struct dugum* " türünde bir işaretçi olan "dugum" değişkenine atar.
Daha sonra, bu bloğun "veri" alanını "veri" değeriyle, "sol" ve "sag" işaretçilerini ise "NULL" değeri ile başlatır.
Son olarak, "dugum" işaretçisini döndürerek oluşturulan yeni düğümün bellek adresini kullanıcıya verir.`

` Ardından "dugumtoplami" adında bir fonksiyon daha tanımladık. Bu fonksiyon, verilen düğümün alt düğümlerinin toplamını bulur. Eğer düğüm NULL ise 0 döndürür.`

`Daha sonra, "dugumtoplami" fonksiyonu kullanılarak, sol ve sağ alt ağaçların toplam değerleri hesapladık ve toplam değişkenine atadık.
 Ardından, if koşulu kullanarak, dugum yapısındaki kökün değeri, sol ve sağ alt ağaçların toplamının toplam değerine eşitse, 
 "Agacin alt dugumleri koke esittir" yazısı ekrana yazdırılacaktır. 
 Aksi takdirde ise, "Agacin alt dugumleri koke esit degildir" yazısı ekrana yazdırılacaktır.`
 
 `Son olarak, önce struct dugum türünden bir kok düğümü oluşturduk ve kok değişkenine atadık.
 kok düğümünün veri alanına 10 değeri atadık. Daha sonra, kok düğümünün sol alt düğümüne yenidugum(4) çağrısı sonucu oluşan yeni bir düğüm atadık
 ve sağ alt düğümüne de yenidugum(5) çağrısı sonucu oluşan yeni bir düğüm atadık.
 En son olarak, "toplamkarsilastir" fonksiyonu kok düğümünü kullanarak, kok düğümünün alt düğümleri arasındaki toplam değerlerini hesaplıyor
 ve bu toplam değerleri karşılaştırarak bir mesaj yazdırıyor. Eğer kok düğümünün veri alanı, sol alt düğümünün veri alanı ile sağ alt düğümünün veri alanının toplamına eşitse,
 "Agacin alt dugumleri koke esittir" mesajı yazdırılıyor, aksi takdirde "Agacin alt dugumleri koke esit degildir" mesajı yazdırılıyor`.
