
bool FUN_0216f9d0(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  *(undefined2 *)(iVar2 + 0x24) = 0;
  *(undefined2 *)(iVar2 + 0x26) = 0;
  sVar1 = *(short *)(param_1 + 0x54);
  *(short *)(param_1 + 0x54) = sVar1 + 1;
  if ((*(short *)(param_1 + 0x56) < sVar1) &&
     (*(code **)(param_1 + 0x50) = FUN_0216f398, *(int *)(*(int *)(param_1 + 8) + 0x18) != 0)) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_0207a878(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x14));
    }
    FUN_02023894(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0xc) + 4),
                 *(undefined4 *)(*(int *)(param_1 + 8) + 0x18),0);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0xc) + 4) + 0x68) + 0x6c))
              ();
  }
  if ((*(uint *)(*(int *)(param_1 + 0x2c) + 0x2c) & 8) == 0) {
    return (*(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x78) & 0x400) == 0;
  }
  return false;
}

