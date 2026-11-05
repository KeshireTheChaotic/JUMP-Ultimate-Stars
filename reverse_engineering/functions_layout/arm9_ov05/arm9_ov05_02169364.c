
void FUN_02169364(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    (**(code **)(param_1 + 0x10))(param_1,*(undefined4 *)(param_1 + 0x14),3,0x56,param_4);
    return;
  }
  if (iVar1 == 1 || iVar1 == 2) {
    (**(code **)(param_1 + 0x10))
              (param_1,*(undefined4 *)(param_1 + 0x14),4,*(undefined4 *)(param_1 + 100));
    return;
  }
  return;
}

