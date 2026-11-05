
void FUN_02163a80(int param_1)

{
  FUN_0216378c(param_1,0x2000,0x2100);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0xb4;
  DAT_02172524 = *(byte *)(*(int *)(param_1 + 4) + 0xd) + 0x401205;
  DAT_021724c4 = *(byte *)(*(int *)(param_1 + 4) + 0xd) + 0x401206;
  return;
}

