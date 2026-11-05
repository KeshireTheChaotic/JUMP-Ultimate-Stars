
void FUN_021b7454(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x11c) <= uVar1) {
      local_28 = param_2;
      local_24 = param_3;
      FUN_021b730c(param_1 + 0x118,&local_28);
      return;
    }
    local_20 = *(int *)(param_1 + 0x118);
    if (param_2 == *(int *)(local_20 + uVar1 * 8)) break;
    uVar1 = uVar1 + 1;
  }
  if (param_3 == -1) {
    FUN_021b72b8(&local_1c,&local_20);
    FUN_021b72c4(auStack_18,param_1 + 0x118,local_1c);
    return;
  }
  *(int *)(local_20 + uVar1 * 8 + 4) = param_3;
  return;
}

