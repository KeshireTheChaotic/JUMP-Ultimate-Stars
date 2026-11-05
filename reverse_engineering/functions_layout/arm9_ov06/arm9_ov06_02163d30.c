
void FUN_02163d30(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x10);
  *(short *)(param_1 + 0x10) = sVar1 + -1;
  if (sVar1 == 0) {
    FUN_0215b3e0(**(undefined4 **)(param_1 + 0xc));
    FUN_0216ab58(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc),&DAT_02172438);
    *(undefined2 *)(param_1 + 0x10) = 0x78;
  }
  return;
}

