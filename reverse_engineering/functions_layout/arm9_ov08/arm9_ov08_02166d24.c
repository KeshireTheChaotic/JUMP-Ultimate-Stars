
undefined4 FUN_02166d24(ushort *param_1)

{
  if ((*(byte *)(DAT_0216e854 + 0x38) & 7) >> 2 == 0) {
    return 0;
  }
  if (*(ushort *)(DAT_0216e854 + 0x28) < *param_1) {
    return 0;
  }
  if (param_1[2] < *(ushort *)(DAT_0216e854 + 0x28)) {
    return 0;
  }
  if (*(ushort *)(DAT_0216e854 + 0x2a) < param_1[1]) {
    return 0;
  }
  if (param_1[3] < *(ushort *)(DAT_0216e854 + 0x2a)) {
    return 0;
  }
  return 1;
}

