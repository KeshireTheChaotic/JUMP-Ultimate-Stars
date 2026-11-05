
void FUN_02078a70(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x5d0) = 0;
  iVar1 = *(int *)(param_1 + 0x56c);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xffffffcf;
  }
  if (*(int *)(param_1 + 0x574) != 0) {
    *(undefined4 *)(param_1 + 0x574) = 0;
  }
  return;
}

