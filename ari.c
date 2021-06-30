#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include<math.h>
#include<ctype.h>
string ari(string);


void test1() {
  string s1="The town was large enough to support three inns, and all their common rooms were rife with rumors. Arianne sent her men into each of them, to hear what they might hear. In the Broken Shield, Daemon Sand was told that the great septry on the Holf of Men had been burned and looted by raiders from the sea, and a hundred young novices from the motherhouse on Maiden Isle carried off into slavery.";
  assert(strcmp(ari(s1), "Eleventh Grade") == 0);
}

void test2() { 
 string s2="A mouse took a stroll through the deep dark wood. A fox saw the mouse, and the mouse looked good. Where are you going to, little brown mouse? Come and have lunch in my underground house.";
  assert(strcmp(ari(s2), "Third Grade") == 0);
}

void test3() {
  string s3="Exhaled respiratory particles can build-up within enclosed spaces with inadequate ventilation. The risk of COVID-19 infection increases especially in spaces where people engage in physical exertion or raise their voice (e.g., exercising, shouting, singing) as this increases exhalation of respiratory droplets. Prolonged exposure to these conditions, typically more than 15 minutes, leads to higher risk of infection.";
  assert(strcmp(ari(s3), "Professor") == 0);
 }

int main(void) {
  test1();
  test2();
  test3();
 
}

string ari(string a){
int num_char= 0 ;
int num_words = 0;
int num_sentence = 0;
for(int i = 0 ; i < strlen(a) ; i++){

if(isalnum(a[i])){
num_char++;
}
if(a[i]=='.' || a[i] =='?' || a[i] == '!'){
num_sentence++;
}
if(a[i] == ' '){
num_words++;
}
}
int c = num_char;
int w = num_words;
int s = num_sentence;
float f = (4.71*(float)c/(float)w) + (0.5*(float)w/(float)s) - 21.43;
int r = floor(f) + 1;


string b;
if( r== 1){
b = "Kindergarten";
}
if( r== 2){
b = "First/Second Grade";
}if( r== 3){
b = "Third Grade";
}if( r== 4){
b = "Fourth Grade";
}if( r== 5){
b = "Fifth Grade";
}if( r== 6){
b = "Sixth Grade";
}if( r== 7){
b = "Seventh Grade";
}if( r== 8){
b = "Eighth Grade";
}if( r== 9){
b = "Ninth Grade";
}if( r== 10){
b = "Tenth Grade";
}
if(r == 11){
b = "Eleventh Grade";
}if( r== 12){
b = "Twelfth Grade";
}if( r==13){
b = "College Student";
}
if(r >= 14){
b = "Professor";
}
return  b;
}

