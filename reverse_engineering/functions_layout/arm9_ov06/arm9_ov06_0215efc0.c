
void FUN_0215efc0(int param_1,short param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 0x6c) & 0xc) == 0) {
    uVar1 = FUN_0215e91c(*(undefined4 *)(param_1 + 0x1a8));
  }
  else {
    uVar1 = (uint)((*(uint *)(param_1 + 0x6c) & 8) == 0);
  }
  if (uVar1 != 0) {
    param_2 = -param_2;
  }
  *(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2c) = param_2;
  if (param_3 == 0) {
    return;
  }
  uVar2 = FUN_0215e91c(*(undefined4 *)(param_1 + 0x1a8));
  if (uVar1 == uVar2) {
    return;
  }
  FUN_02083950(*(undefined4 *)(param_1 + 0x1a8),uVar1);
  *(code **)(param_1 + 0x1d4) = FUN_0215da84;
  return;
}

