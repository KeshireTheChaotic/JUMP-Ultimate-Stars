
undefined4 FUN_021764b4(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < param_2) {
    do {
      if (param_1 == *(int *)(DAT_021a7410 + uVar2 * 4 + 0x448)) break;
      uVar2 = uVar2 + 1 & 0xff;
    } while ((int)uVar2 < param_2);
  }
  if ((int)uVar2 < param_2) {
    FUN_02176578(*(undefined1 *)(DAT_021a7410 + uVar2 + 0x61c));
    FUN_02176558();
    uVar1 = FUN_02176508();
    return uVar1;
  }
  return 0;
}

