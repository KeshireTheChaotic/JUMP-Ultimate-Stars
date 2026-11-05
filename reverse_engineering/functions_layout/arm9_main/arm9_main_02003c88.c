
void FUN_02003c88(int param_1,uint param_2)

{
  uint uVar1;
  int local_18;
  uint local_14;
  undefined4 local_10;
  
  local_10 = 0;
  local_18 = param_1;
  local_14 = param_2;
  uVar1 = FUN_020035b4(0x2003bb1,&local_18);
  if (param_1 != 0) {
    if (uVar1 < param_2) {
      *(undefined1 *)(param_1 + uVar1) = 0;
      return;
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_1 + param_2 + -1) = 0;
    }
  }
  return;
}

