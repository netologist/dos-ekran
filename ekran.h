/* -------------------------------------------------------------------------
						  OzganSYS Software World (c)
					 Ekran Fonksiyonlar� K�t�phanesi v.1.00
								 21 Kas�m 2000
   ------------------------------------------------------------------------- */
#ifndef _EKRAN_H_
#define _EKRAN_H_
/* --------------------------------------------------------------------------
								Fonksiyon Prototipleri
   -------------------------------------------------------------------------- */
void rengarenk(int satir, int kolon, char *string, int uzunluk, int renk);
void cift(int satir, int kolon, char *string, int renk);
void cikis(void);
char formyarat(int satir, int kolon, int boy, int en, char *dosya_adi);
char formyukle(int satir, int kolon, char *dosya_adi);
int msj_kutu(char *string, char *ref_hata, int HataTuru);
char *dosya_adi_ayir(char *yazi);
char formgolge(int satir, int kolon, char *dosya_adi);
void dikey_cubuk(int satir, int kolon, int boy, int renk1, int renk2);
void yatay_cubuk(int satir, int kolon, int boy, int alan);
void ice_pen(int satir, int kolon, int boy, int en);
void disa_pen(int satir, int kolon, int boy, int en);
char *basamakla(const char *adres);
void harf(int satir, int kolon, char karakter, int renk);
void harfler(int satir, int kolon, char *str, int renk);
void doldur(int satir, int kolon, char karakter, int kac_tane, int renk);
void golgele(int satir, int kolon, int boyu, int en, int renk);
void golge(int satir, int kolon, int kac_tane, int renk);
void git_xy(int satir, int kolon);
void ince_cerceve(int satir, int kolon, int menu_boyu, int menu_eni, int renk);
void kalin_cerceve(int satir, int kolon, int menu_boyu, int menu_eni, int renk);
void iletisim_kutusu(const char *str, int durum);
void kursor_uzunlugu(int minimum, int maksimum);
void cift_renk(int satir, int kolon, char *yazi, int renk1, int renk2);
int dosya_kontrol(char *dosya_adi);
char *dosya_vy(void);
void tarih(void);
char *ekran_al(int kol, int sat, int uz, int en, char *str);
void ekran_ver(int kol, int sat, int uz, int en, char *yazi);
/* -------------------------------------------------------------------------
								  Global De�i�kenler
   ------------------------------------------------------------------------- */
extern int ekran_x;
extern int ekran_y;
extern int renkli; /* Rengarenk fonksiyonunda men� i�indir */
extern char far *vp; /* vp de�i�keni ekran�n adresini tutar */

typedef struct ek_PENCERE {
	int derecesi;
	int turu;
} PENCERE;
/* -------------------------------------------------------------------------
								 Sabit Tan�mlamalar�
   ------------------------------------------------------------------------- */
/* HATA TURLERINE AIT BILDIRIM */
#define HATA	0
#define UYARI	1
#define SORU	2

#define HAYIR	0
#define EVET	1
/* HATA MESAJLARINA AIT HATA - UYARI - SORU STRINGLERI */
#define UYARI_HAREKET_KAYDI_SILINEMEZ	"Hareket g�ren kay�t silinemez"
#define UYARI_ARANILAN_BULUNAMADI    	"Aran�lan Kay�t Bulunamad�"
#define UYARI_MESAJ_VAR	 				"Mesaj�n�z var"
#define UYARI_KAYIT_MEVCUT			    "Bu kay�t mevcut"
#define UYARI_LISTE_BOS					"Listelenecek bir kay�t yok"

#define HATA_DOSYA_BULUNAMADI		    "             dosyas� bulunamad�"
#define HATA_BELLEK_YETERSIZ		    "Bellek Yetersiz !!!"
#define HATA_DISKE_YAZILAMIYOR		    "Diske yazam�yorum"
#define HATA_DISK_OKUNAMIYOR		    "Diski okuyam�yorum"
#define	HATA_BAGLANTI		 		    "Ana makine ile ba�lant� kurulam�yor"
#define HATA_KULLANICI_BULUNAMADI 	    "B�yle bir kullan�c� yok"
#define HATA_GIRIS_YANLIS				"Girilen bilgi hatal�"

#define SORU_KAYDI_SILMEK  			    "Kay�d� Silmek, son karar�n�z m�?"
#define SORU_BASLATMAK				    "��lemi ba�latmak istiyor musunuz?"
#define SORU_DOSYA_YARATMAK 			"             dosya yarat�ls�n m�?"
#define SORU_CIKMAK						"Programdan ��kmak istiyor musunuz?"
#define SORU_GERI_DONUS					"Bu i�lemin geri d�n��� yok, emin misiniz?"
/* FORMUN DATA GIRIS ICIN OLUP OLMADI�INI BEL�RTMEK ���N */
#define ACIK_DATA	0
#define KAPALI_DATA	1

/* Karakter Renkleri */
#define SIYAH		0
#define MAVI 		0x01
#define YESIL 		0x02
#define CYAN 		0x03
#define KIRMIZI 	0x04
#define MAGENTA 	0x05
#define KAHVE 		0x06
#define BEYAZ 		0x07
#define GRI 		0x08
#define A_MAVI 		0x09
#define A_YESIL 	0x0a
#define A_CYAN 		0x0b
#define A_KIRMIZI 	0x0c
#define A_MAGENTA	0x0d
#define SARI 		0x0e
#define A_BEYAZ 	0x0f
/* Zemin Renkleri */
#define SIYAH_ 		0x00
#define MAVI_ 		0x10
#define YESIL_ 		0x20
#define CYAN_ 		0x30
#define KIRMIZI_ 	0x40
#define MAGENTA_ 	0x50
#define KAHVE_ 		0x60
#define BEYAZ_ 		0x70
#define BLINK_ 		0x80
/* --------------------------------------------------------------------
						  Ba�l�k Dosyas� Sonu
   -------------------------------------------------------------------- */
#endif