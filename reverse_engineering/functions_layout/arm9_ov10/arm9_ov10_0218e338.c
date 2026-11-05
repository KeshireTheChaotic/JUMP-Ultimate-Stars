
undefined4 FUN_0218e338(uint *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  FUN_0218f378();
  FUN_0218f3e0();
  if (param_2 == 1) {
    FUN_0218f398(0x44,0x43,DAT_021a8508);
  }
  else {
    FUN_0218f398(0x44,0x43,0xffffffff);
  }
  iVar4 = 0;
  do {
    uVar1 = FUN_0218e6a0(param_2);
    iVar2 = FUN_0218e438(uVar1,iVar4);
    if (iVar2 != 0) break;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_0218f360();
  if (iVar2 == 2) {
    *param_1 = DAT_021a8534 >> 1;
    DAT_021a8520 = DAT_021a8534 * 3 >> 3;
    return 1;
  }
  uVar3 = DAT_021a8520 >> 1;
  DAT_021a8520 = uVar3;
  *param_1 = uVar3;
  if (param_2 == 1) {
    if (uVar3 < 0x3c) {
      *param_1 = 1;
      DAT_021a8520 = DAT_021a8534 >> 3;
    }
  }
  else if ((param_2 == 2) && (uVar3 < 0x3c)) {
    *param_1 = 1;
  }
  return 0;
}

