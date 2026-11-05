
undefined4 FUN_0218bdd0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((*(int *)(iVar2 + 0xc) != 7) && (iVar1 = FUN_0218a558(iVar2,*param_2), iVar1 == 0)) {
    return 0;
  }
  if ((*(int *)(iVar2 + 0xc) == 7) &&
     ((*(int *)(iVar2 + 0x14) == 0 && (*(int *)(iVar2 + 0x24) == 0)))) {
    FUN_0218bf18(iVar2);
  }
  return 1;
}

