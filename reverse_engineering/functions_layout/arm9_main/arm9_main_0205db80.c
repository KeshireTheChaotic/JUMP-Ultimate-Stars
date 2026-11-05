
undefined4 FUN_0205db80(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0205c6dc();
  iVar3 = 0;
  do {
    pbVar1 = (byte *)FUN_0205c4e8(iVar3);
    if (pbVar1 != (byte *)0x0) {
      FUN_0205ba9c(iVar3,*pbVar1);
      FUN_0205ba84(iVar3,*(undefined2 *)(pbVar1 + 2));
      if (((*(int *)(pbVar1 + 4) != 0) && (param_1 != 0)) && (iVar4 = 0, *pbVar1 != 0)) {
        do {
          iVar2 = FUN_0205b9f0(iVar3,param_1,*(undefined4 *)(pbVar1 + 4));
          if (iVar2 == 0) {
            return 0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*pbVar1);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return 1;
}

