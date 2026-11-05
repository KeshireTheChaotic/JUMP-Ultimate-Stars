
void FUN_02156a24(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_02156944(param_2);
  if (iVar1 != 0) {
    FUN_021568dc(param_2[1],3);
  }
  if (param_2[4] == 2) {
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156a84;
    return;
  }
  if (param_2[4] == 0) {
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156984;
  }
  return;
}

