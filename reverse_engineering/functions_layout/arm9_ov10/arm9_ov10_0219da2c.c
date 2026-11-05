
undefined4 FUN_0219da2c(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = piRam0219da8c;
  uVar4 = 0;
  while( true ) {
    if (3 < uVar4) {
      return 1;
    }
    uVar2 = FUN_021766fc();
    if (((uVar4 != uVar2) && (iVar3 = FUN_02176654(uVar4), iVar3 != 0)) &&
       (*(short *)(*piVar1 + uVar4 * 2 + 0x1c30) < 0)) break;
    uVar4 = uVar4 + 1 & 0xff;
  }
  return 0;
}

