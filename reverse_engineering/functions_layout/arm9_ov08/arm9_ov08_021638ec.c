
int FUN_021638ec(uint param_1)

{
  if (((uint)*(ushort *)(DAT_0216e808 + 2) & 1 << (param_1 & 0xff)) == 0) {
    return 0;
  }
  return DAT_0216e808 + 0xe + (param_1 - 1) * 0x1e;
}

