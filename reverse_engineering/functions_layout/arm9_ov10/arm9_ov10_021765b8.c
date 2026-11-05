
undefined4 FUN_021765b8(void)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*DAT_021a7410 != 0) {
    return 0;
  }
  sVar2 = FUN_02175ba8(0x4000);
  piVar1 = DAT_021a7410;
  uVar3 = FUN_0218c40c(0,sVar2 + -0x4000,0);
  uVar3 = FUN_0218aa50(DAT_021a7410,uVar3,piVar1[5],piVar1[6],0x2175d81);
  iVar4 = FUN_021762ac();
  if (iVar4 == 0) {
    thunk_FUN_0218c0e0(*DAT_021a7410,0x217d3e5);
    FUN_0218a854(*DAT_021a7410,0x217d5b1);
    return uVar3;
  }
  return uVar3;
}

