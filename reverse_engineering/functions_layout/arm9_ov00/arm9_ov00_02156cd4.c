
void FUN_02156cd4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_02156944(param_2);
  if (iVar1 != 0) {
    FUN_021568dc(param_2[1],6);
  }
  param_2[7] = param_2[7] + param_2[9];
  param_2[9] = param_2[9] + 5;
  if ((int)param_2[7] < 0x881) {
    return;
  }
  param_2[9] = 0;
  *(undefined1 *)(param_2 + 0x11) = 1;
  *(undefined1 *)((int)param_2 + 0x31) = 1;
  *param_2 = &DAT_02156d44;
  return;
}

