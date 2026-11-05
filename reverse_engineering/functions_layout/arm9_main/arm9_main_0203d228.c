
void FUN_0203d228(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x970) != 0) {
    *(undefined **)(param_1 + 0x9f0) = &DAT_0203c0d8;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x8e4);
  if (iVar1 == 2) {
    *(code **)(param_1 + 0x9f0) = FUN_0203bc4c;
    return;
  }
  if (iVar1 == 3) {
    *(code **)(param_1 + 0x9f0) = FUN_0203be54;
    return;
  }
  if (iVar1 == 1) {
    *(code **)(param_1 + 0x9f0) = FUN_0203bf80;
  }
  else {
    *(undefined **)(param_1 + 0x9f0) = &DAT_0203c0d8;
  }
  return;
}

