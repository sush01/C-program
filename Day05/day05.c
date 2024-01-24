#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

struct Equipment
{
  char nimi[20];
 // char *nimi;
  struct Room *huone;
};

struct Room
{
  char nimi[20];
  int koko;
  struct House *talo;
  struct Equipment (*varustelista)[2];
};

struct House
{
  char omistaja[20];
  //char *omistaja;
  struct Room (*huonelista)[5];
};






int main()
{
  // Luo talo
  struct House myhouse;
  strcpy(myhouse.omistaja, "Janne");

  // Luo huone
  struct Room wc, keittio, olohuone, makuuhuone, lastenhuone;
  strcpy(wc.nimi, "WC");
  strcpy(keittio.nimi, "keittio");
  strcpy(makuuhuone.nimi, "Makuuhuone");
  strcpy(olohuone.nimi, "Olohuone");
  strcpy(lastenhuone.nimi, "Lastenhuone");

  // wc.talo = NULL;
  // keittio.talo = NULL;
  // makuuhuone.talo = NULL;
  // olohuone.talo = NULL;
  // lastenhuone.talo = NULL;

  wc.koko = 6;
  keittio.koko = 12;
  olohuone.koko = 20;
  makuuhuone.koko = 12;
  lastenhuone.koko = 12;

  // Luo kalusto
  struct Equipment valtaistuin;
  strcpy(valtaistuin.nimi, "valtaistuin");
  valtaistuin.huone = &wc;

  struct Equipment suihku;
  strcpy(suihku.nimi, "suihku");
  suihku.huone = &wc;

  struct Equipment wcarray[2] = {valtaistuin, suihku};
  wc.varustelista = &wcarray;

  struct Equipment leisi;
  strcpy(leisi.nimi, "leisi");
  leisi.huone = &keittio;

  struct Equipment pesukone;
  strcpy(pesukone.nimi, "pesukone");
  pesukone.huone = &keittio;

  struct Equipment keittioarray[2] = {leisi, pesukone};
  keittio.varustelista = &keittioarray;

  struct Equipment sohva;
  strcpy(sohva.nimi, "sohva");
  sohva.huone = &olohuone;

  struct Equipment televisio;
  strcpy(televisio.nimi, "televisio");
  televisio.huone = &olohuone;

  struct Equipment olohuonearray[2] = {sohva, televisio};
  olohuone.varustelista = &olohuonearray;

  struct Equipment sanky1;
  strcpy(sanky1.nimi, "sanky1");
  sanky1.huone = &makuuhuone;

  struct Equipment kelloradio;
  strcpy(kelloradio.nimi, "kelloradio");
  kelloradio.huone = &makuuhuone;

  struct Equipment makuuhuonearray[2] = {sanky1, kelloradio};
  makuuhuone.varustelista = &makuuhuonearray;

  struct Equipment sanky2;
  strcpy(sanky2.nimi, "sanky2");
  sanky2.huone = &lastenhuone;

  struct Equipment lelukori;
  strcpy(lelukori.nimi, "lelukori");
  lelukori.huone = &lastenhuone;

  struct Equipment lastenhuonearray[2] = {sanky2, lelukori};
  lastenhuone.varustelista = &lastenhuonearray;

  // Liitä kalusto huoneeseen
  /* struct Equipment wcarray[] = {valtaistuin, suihku};
   wc.varustelista = &wcarray;

   struct Equipment keittioarray[] = {leisi, pesukone};
   keittio.varustelista = &keittioarray;

   struct Equipment olohuonearray[] = {sohva, televisio};
   olohuone.varustelista = &olohuonearray;

   struct Equipment makuuhuonearray[] = {sanky1, kelloradio};
   makuuhuone.varustelista = &makuuhuonearray;

   struct Equipment lastenhuonearray[] = {sanky2, lelukori};
   lastenhuone.varustelista = &lastenhuonearray;
 */

  // Liitä huone taloon
  wc.talo = &myhouse;
  keittio.talo = &myhouse;
  olohuone.talo = &myhouse;
  makuuhuone.talo = &myhouse;
  lastenhuone.talo = &myhouse;

  // liitä taloon huone
  struct Room roomarray[] = {wc, keittio, makuuhuone, olohuone, lastenhuone};
  myhouse.huonelista = &roomarray;

  // Luokaa uusia huoneita:
  // Makuuhuone: sänky ja kelloradio
  // Keittiö: Liesi ja Pesukone
  // Olohuone: Sohva ja Televisio
  // Lastenhuone: sänky ja lelukori

  /*
    // Tulosta mitä huoneita talosta löytyy?
    // Kerro myös jokaisen huoneen varusteet
    for (int iter = 0; iter < 5; iter++)
    {
      printf("\n%x", (myhouse.huonelista)[iter]);
      printf("\n%s", (*(myhouse.huonelista))[iter].nimi);
      printf("\n%d", (*(myhouse.huonelista))[iter].koko);
      printf("\n-----------------");
      for (int iter2 = 0; iter < 2; iter2++)
      {
      printf("\n %s",((*(myhouse.huonelista))[iter].varustelista[iter2]->nimi);
      }
      printf("\n-----------------");
    }
    // Hae tieto, missä kelloradio on?
    printf("\nKelloradio on huoneessa %s.", kelloradio.huone->nimi);
    printf("\nKelloradio on huoneessa %s.", (*(kelloradio.huone)).nimi);

    // kuka omistaa talon, jossa on kelloradio?
    printf("\nTalon omistaa %s.", kelloradio.huone->talo->omistaja);
    printf("\nTalon omistaa %s.", (*((*(kelloradio.huone)).talo)).omistaja);

    // Kuka omistaa talon, jossa on keittio?
    printf("\nTalon omistaa %s.", keittio.talo->omistaja);

  */

  // Tulosta mitä huoneita talosta löytyy?
  // Kerro myös jokaisen huoneen varusteet
  for (int iter = 0; iter < 5; iter++)
  {
    printf("\n%p", (myhouse.huonelista)[iter]);
    printf("\n%s", (*(myhouse.huonelista))[iter].nimi);
    printf("\n%d", (*(myhouse.huonelista))[iter].koko);
    printf("\n--------------");
    for (int iter2 = 0; iter2 < 2; iter2++)
    {
      printf("\n%s", ((*(myhouse.huonelista))[iter].varustelista[iter2])->nimi);
    }
    printf("\n==============");
  }

  // Hae tieto, missä kelloradio on?
  printf("\nKelloradio on huoneessa %s.", kelloradio.huone->nimi);
  printf("\nKelloradio on huoneessa %s.", (*(kelloradio.huone)).nimi);

  // kuka omistaa talon, jossa on kelloradio?
  printf("\nTalon omistaa %s.", kelloradio.huone->talo->omistaja);
  printf("\nTalon omistaa %s.", (*((*(kelloradio.huone)).talo)).omistaja);

  // Kuka omistaa talon, jossa on keittio?
  printf("\nTalon omistaa %s.", keittio.talo->omistaja);

  return 0;
}