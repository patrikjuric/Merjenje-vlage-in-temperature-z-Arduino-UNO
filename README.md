# Merjenje-vlage-in-temperature-z-Arduino-UNO
Merjenje temperature in vlage s senzorjem DHT11 (4-pin) in dodatne meritve temperature z NTC uporom za večjo natančnost meritev.
Cilj projekta, ki sem ga izdelal je merjenje temperature in vlage v zraku.Podatke o vlagi zajemamo s senzorjem DHT11(izvedba s štirimi priključki), prav tako s tem senzorjem zajemamo tudi podatke o temperaturi, a ker želimo dobiti čimbolj natančne rezultate temperaturo merimo še z NTC uporom in tako dobimo kar se da realne oziroma natančne meritve temperature. Vse tri meritve se izpisujejo na LCD zaslonu v zgornji vrstici, je prva vrednost na levi vrednost temperature, ki je merjena z NTC uporom, druga vrednost v zgornji vrstici pa temperatura merjena s senzorjem DHT11. Obe meritvi sta podani v stopinjah celzija.V spodnji vrstici pa se izpisuje procent vlage v zraku merjen z DHT11.

Seznam vseh uporabljenih materialov in komponent.

-1x Arduino UNO\
-1x Napajalni kabel za Arduino\
-1x Senzor DHT11\
-1x NTC upor\
-1x LCD zaslon\
-1x Protoboard\
-24x žice\
-1x Potenciometer(10kΩ)\
-1x Upor (330Ω)\
-1x Upor (560Ω)\
-1x Upor (10kΩ)



Ocena delovanja in natančnosti:

Naprava je pri meritvah dokaj natančna in sicer pri meritvah temperature se je izkazal NTC upor, kot bolj natančni merilec temperature od senzorja DHT11.
Glede na meritve izmerjene z drugimi merlinimi napravami se je izkazalo da je odstopanje termperaure merjene z NTC uporom približno +/− 0,5°C, z DHT11 senzorjem pa +/− 1°C.
Odstopanje meritve vlažnosti zraka pa je +/−3%. Vsa odstopanja so v mejah normale, glede na kvaliteto uporablenega materiala. Načeloma pa naprava deluje tekoče, brez kakršnih koli hib ali napak.

Postopek kalibracije NTC upora:

Najprej sem uporu zmeril upornost pri štirih različnih temperaturah in sicer pri 0°C, 25°C, 35°C ter 100°C. Z meritvijo dobljene vrednosti sem nato vpisal v Thermistor Calculator in dobil izračunane Steinhart-Hart koeficiente, ki so optrebni za pravilno delovanje NTC upora kot senzorja za temperaturo. Tabela vrednosti in izračuni so v datoteki\ (Izračuni za NTC upor.pdf)

Predlagane izboljšave:

Uporaba kvalitetnejšega materiala, predvsem senzorja, naprava bi bila veliko bolj natančna če bi za zajemanje meritv uporabljala kakšen drug senzor naprimer DHT22, ali špe kakšen kvalitetnejši senzor za vlago in temperaturo.
