
undefined4 FUN_0200d8b4(undefined4 param_1,int param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_3;
  uVar2 = 0;
  if (uVar3 != 0) {
    do {
      cVar1 = FUN_0200d890();
      *(char *)(param_2 + uVar2) = cVar1;
      if (cVar1 == '\r' || cVar1 == '\n') {
        *param_3 = uVar2 + 1;
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

