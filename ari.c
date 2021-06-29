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
if( r== 3){
b = "Third Grade";
}
if(r == 11){
b = "Eleventh Grade";
}
if(r == 14){
b = "Professor";
}

return  b;

}
