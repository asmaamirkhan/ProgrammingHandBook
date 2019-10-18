# Değişkenlerin tanımlanması
harf_sayi = 0; rakam_sayi = 0
# Metnin girilmesi
metin = list(str(input()))
# Metnin uzunluğu kadar dönen döngünün oluşturulması
for karakter in metin:
    # Karakterlerin kontrol edilmesi.   
    if karakter >= 'a' and karakter <= 'z': 
        karakter = chr(ord(karakter) - ord('a') + ord('A'))
        harf_sayi += 1
    elif karakter >= 'A' and karakter <= 'Z':
        harf_sayi += 1
    elif karakter >= '0' and karakter <= '9': 
        karakter = chr(ord('9') - ord(karakter) + ord('0'))
        rakam_sayi += 1
# Sonuçların yazdırılması
print("Harf sayisi= ", harf_sayi) 
print("Rakam sayisi= ", rakam_sayi)
sonuc = ''.join(metin)
print(sonuc[::-1])
