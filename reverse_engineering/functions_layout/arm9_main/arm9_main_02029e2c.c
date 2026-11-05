
undefined1 FUN_02029e2c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    for (uVar2 = 0; uVar2 < *(ushort *)(param_1 + 8); uVar2 = uVar2 + 1) {
      uVar1 = (int)(uint)*(ushort *)(*(int *)(param_1 + 0x10) + uVar2 * 2) >> 0xf;
      if ((8 < uVar1) && (uVar1 < 0xf7)) {
        *(undefined1 *)(param_1 + 0xe) = 1;
        break;
      }
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  return *(undefined1 *)(param_1 + 0xe);
}

