
uint FUN_021a0a1c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = FUN_021766fc();
  iVar2 = FUN_021a1b98(*(undefined4 *)(param_1 + 0x3c),param_2);
  if (iVar2 == 0) {
    uVar4 = 1 << (uVar1 & 0xff);
  }
  uVar1 = 0;
  do {
    uVar3 = FUN_021766fc();
    if ((uVar1 != uVar3) && (iVar2 = FUN_02176654(uVar1 & 0xff), iVar2 != 0)) {
      iVar2 = FUN_02199e24(uVar1 & 0xff);
      iVar2 = FUN_021a1b98(iVar2 * 0x20c + param_1 + 0x40,param_2);
      if (iVar2 == 0) {
        uVar4 = uVar4 | 1 << (uVar1 & 0xff);
      }
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 4);
  return uVar4;
}

