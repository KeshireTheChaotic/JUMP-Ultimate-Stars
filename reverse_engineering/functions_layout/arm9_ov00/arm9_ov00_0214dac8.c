
void FUN_0214dac8(int param_1)

{
  uint uVar1;
  
  FUN_02028930(*(undefined4 *)(param_1 + 8));
  (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 0x124))();
  FUN_0214e4e4(param_1);
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar1 = FUN_0214db5c(*(undefined4 *)(param_1 + 8));
    if (((uVar1 & 0x8010) != 0) && ((DAT_020b0b90 & 1) != 0)) {
      FUN_0214dd90(param_1);
      return;
    }
  }
  if ((*(byte *)(param_1 + 0x56) & 2) != 0) {
    FUN_0214e55c(param_1);
  }
  (**(code **)(param_1 + 0x48))(param_1);
  return;
}

