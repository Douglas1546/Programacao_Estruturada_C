int main()
{
int cont[256], cont2[256], i, flag = 0;
char p1[30], p2[30];
printf("Digite a primeira palavra: ");
scanf("%s", p1);
printf("Digite a segunda palavra: ");
scanf("%s", p2);
for (i = 0; i < 256; i++)
	cont[i] = 0;
for (i = 0; i < 256; i++)
	cont2[i] = 0;
for (i = 0; p1[i] != '\0'; i++) {
	cont[p1[i]]++;					   
}
for (i = 0; p2[i] != '\0'; i++) {
		    cont2[p2[i]]++;
    }
for (i = 0; i < 256; i++) {
	if (cont[i] != cont2[i])
		flag = 1;
}
if (flag == 0)
	printf("As palavras %s e %s sao anagramas\n", p1, p2);
else
	printf("As palavras %s e %s nao sao anagramas\n", p1, p2);

return 0;
}