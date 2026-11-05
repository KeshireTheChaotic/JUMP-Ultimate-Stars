
undefined4 FUN_020592d0(int param_1)

{
  if (0x70 < *(ushort *)(param_1 + 4)) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 0x18) < 10) || (1000 < *(ushort *)(param_1 + 0x18))) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 0x32) == 0) || (0xe < *(ushort *)(param_1 + 0x32))) {
    return 0;
  }
  return 1;
}

