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

