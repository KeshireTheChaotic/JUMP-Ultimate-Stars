
undefined4 FUN_0216d44c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0216ed30(*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 != 0) {
    FUN_0216ec18(*(undefined4 *)(param_1 + 0x2c),param_1,0);
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x80;
  }
  if ((*(ushort *)(param_1 + 0x26) & 1) != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x30) == 0) || ((*(uint *)(*(int *)(param_1 + 0x30) + 0x2c) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 1;
  }
  (**(code **)(param_1 + 0x54))(param_1);
  return 1;
}

