
undefined4 FUN_021649fc(void)

{
  int iVar1;
  
  if (*(int *)(DAT_0216e828 + 0x40) - 4U < 3) {
    return 1;
  }
  FUN_02164cb8(4);
  iVar1 = FUN_02059864(0x2164925,DAT_0216e828 + 0x1060,*(uint *)(DAT_0216e828 + 0x12a4) & 0xffff,
                       DAT_0216e828 + 0xf80,*(uint *)(DAT_0216e828 + 0x12a0) & 0xffff,1);
  if (iVar1 == 2) {
    return 1;
  }
  FUN_02164ca4();
  return 0;
}

