
undefined4 FUN_0201a9ec(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    if (DAT_020a0e50 <= uVar3) {
      return 0;
    }
    FUN_0201a548((&DAT_020a1680)[uVar3]);
    uVar1 = (&DAT_020a1680)[uVar3];
    if (((uVar1 != 0) && (uVar1 < param_1)) && (param_1 < *(uint *)(uVar1 + 0x4a4))) break;
    FUN_0201a57c();
    uVar3 = uVar3 + 1;
  }
  uVar1 = *(uint *)(uVar1 + 0x4a8);
  if (param_1 < uVar1) {
    FUN_0201a57c();
    return 0;
  }
  iVar2 = FUN_0200d338(param_1 - uVar1,0x820);
  FUN_0201b120(*(undefined4 *)(iVar2 * 0x820 + uVar1 + 8),param_1);
  FUN_0201a57c((&DAT_020a1680)[uVar3]);
  return 1;
}

