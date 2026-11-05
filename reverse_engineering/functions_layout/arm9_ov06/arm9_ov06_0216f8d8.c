
void FUN_0216f8d8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x158) & 0xf;
  FUN_0216f0f0();
  iVar2 = 0;
  do {
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(int *)(param_1 + 0x2c) + 8) != 0) {
        FUN_02155c9c();
      }
      FUN_0216ab58(*(undefined4 *)(param_1 + 0x2c),
                   *(int *)(*(int *)(param_1 + 0xc) + 0x10) +
                   *(short *)(*(int *)(param_1 + 8) + 0x1e) * 0x20);
    }
    iVar2 = (iVar2 + 1) * 0x1000000 >> 0x18;
    uVar1 = uVar1 >> 1;
  } while (iVar2 < 4);
  FUN_0216f398(param_1);
  return;
}

