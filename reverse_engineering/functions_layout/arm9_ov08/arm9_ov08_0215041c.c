
int FUN_0215041c(undefined1 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar4 = 0;
  puVar5 = param_1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    iVar2 = FUN_02150458(puVar5,(int)cVar1);
    puVar3 = puVar5 + iVar2;
    puVar5 = puVar3;
    if (iVar4 < 5) {
      puVar5 = puVar3 + 1;
      *puVar3 = 0x3a;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  *puVar5 = 0;
  return (int)puVar5 - (int)param_1;
}

