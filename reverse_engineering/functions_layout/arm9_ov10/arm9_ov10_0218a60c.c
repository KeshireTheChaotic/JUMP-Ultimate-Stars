
undefined4 FUN_0218a60c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 0x60));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_020012d8(*(undefined4 *)(param_1 + 0x60),iVar3);
      if ((1000 < (uint)(param_2 - *(int *)(iVar2 + 0xc))) &&
         (iVar2 = FUN_0218aa78(param_1), iVar2 == 0)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 1;
}

