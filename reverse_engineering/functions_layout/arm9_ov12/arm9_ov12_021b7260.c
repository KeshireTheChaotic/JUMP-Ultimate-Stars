
void FUN_021b7260(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uVar1 = 0;
  while( true ) {
    uStack_14 = param_4;
    if (DAT_021d5184 <= uVar1) {
      local_28 = param_1;
      local_24 = param_2;
      FUN_021b730c(&DAT_021d5180,&local_28);
      return;
    }
    if (param_1 == *(int *)(DAT_021d5180 + uVar1 * 8)) break;
    uVar1 = uVar1 + 1;
  }
  if (param_2 + 2U < 2) {
    local_20 = DAT_021d5180;
    FUN_021b72b8(&local_1c,&local_20);
    FUN_021b72c4(auStack_18,&DAT_021d5180,local_1c);
    return;
  }
  *(int *)(DAT_021d5180 + uVar1 * 8 + 4) = param_2;
  return;
}

