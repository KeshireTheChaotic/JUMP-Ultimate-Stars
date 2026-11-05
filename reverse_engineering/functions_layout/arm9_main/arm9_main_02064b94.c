
undefined4 FUN_02064b94(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [76];
  
  FUN_02064744(auStack_58);
  FUN_02064d64(&local_60,param_1);
  iVar1 = FUN_02064550(auStack_58,local_60,uStack_5c,auStack_58);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_02064da8(param_1);
  FUN_02064d7c(param_1);
  iVar2 = FUN_02064430(auStack_58,*(undefined4 *)(param_1 + 4),iVar1);
  if (iVar1 == iVar2) {
    FUN_020644ec(auStack_58);
    return 1;
  }
  FUN_020644ec(auStack_58);
  return 0;
}

