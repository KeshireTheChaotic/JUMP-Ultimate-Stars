
void FUN_02152f74(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2[2] == 0) {
    return;
  }
  iVar1 = FUN_02078038(*(undefined4 *)(param_1 + 0x94),param_2[1]);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2[2] + 0x4c) = 100;
    *(undefined4 *)(param_2[2] + 0x50) = 100;
    FUN_0206d484(param_2[2],*param_2);
    return;
  }
  *(undefined4 *)(param_2[2] + 0x4c) = 0x32;
  *(undefined4 *)(param_2[2] + 0x50) = 0;
  FUN_0206d484(param_2[2],*param_2);
  return;
}

