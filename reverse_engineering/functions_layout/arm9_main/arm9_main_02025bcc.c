
undefined4 FUN_02025bcc(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    if (DAT_020a1180 <= uVar2) {
      return 0;
    }
    if ((param_1 & 0xffff) == (*(uint *)(DAT_020a117c + uVar2 * 8) & 0xffff)) break;
    uVar2 = uVar2 + 1;
  }
  uVar1 = (**(code **)(DAT_020a117c + uVar2 * 8 + 4))();
  return uVar1;
}

