
undefined4
FUN_02064cb0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint param_6,
            int param_7,uint param_8)

{
  int iVar1;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [36];
  int local_38;
  int local_34;
  
  if (param_2 != 0) {
    param_5 = param_7;
    param_6 = param_8;
  }
  if (param_6 <= (uint)(param_3 * 0x20)) {
    return 0;
  }
  FUN_02064744(auStack_5c);
  iVar1 = FUN_020645a0(auStack_5c,param_4,param_5 + param_3 * 0x20,param_5 + param_6,0xffffffff);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_02064430(auStack_5c,param_1,0x20);
  if (iVar1 != 0x20) {
    FUN_020644ec(auStack_5c);
    return 0;
  }
  FUN_020644ec(auStack_5c);
  *(int *)(param_1 + 0x20) = param_2;
  FUN_02064d64(&local_64,param_1);
  iVar1 = FUN_02064550(auStack_5c,local_64,uStack_60,auStack_5c);
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x24) = local_38;
  *(int *)(param_1 + 0x28) = local_34 - local_38;
  FUN_020644ec(auStack_5c);
  return 1;
}

