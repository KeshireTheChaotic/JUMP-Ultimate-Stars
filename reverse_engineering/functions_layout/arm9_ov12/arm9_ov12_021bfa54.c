
undefined4 FUN_021bfa54(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  
  if (param_3 == 0) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = 0x200;
    param_2 = param_2 + 0x20;
  }
  if (param_1 == 0) {
    return 0;
  }
  FUN_02064744(auStack_58);
  iVar1 = FUN_0206451c(auStack_58,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar2 == local_30 - local_34) {
    FUN_02064430(auStack_58,param_2,iVar2);
    FUN_020644ec(auStack_58);
    return 1;
  }
  FUN_020644ec(auStack_58);
  return 0;
}

