
void FUN_021b6214(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x148))(param_1,1,0x148,*(code **)(*param_1 + 0x148),param_4);
    return;
  }
  if ((param_1[0x24] & 1U) == 1) {
    (**(code **)(*param_1 + 0x14c))();
  }
  return;
}

