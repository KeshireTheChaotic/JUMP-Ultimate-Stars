
void FUN_0205bc6c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x24) << 0x1e < 0) {
    FUN_020568e4(*(undefined4 *)(param_1 + 0x44),0,1 << (*(uint *)(param_1 + 0x40) & 0xff),0);
    FUN_0206148c(param_1 + 8);
    FUN_0206147c(param_1 + 0x14);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffd;
    uVar1 = FUN_02056da4();
    FUN_02056e74(1);
    FUN_02056de4(uVar1);
  }
  FUN_0205bc3c(param_1);
  return;
}

