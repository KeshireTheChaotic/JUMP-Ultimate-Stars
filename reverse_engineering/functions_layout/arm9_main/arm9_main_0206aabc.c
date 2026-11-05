
undefined4 FUN_0206aabc(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN_0206a4f8(auStack_20);
  *param_1 = param_1[2];
  param_1[1] = param_1[3];
  param_1[2] = local_18;
  param_1[3] = uStack_14;
  iVar1 = FUN_0206a45c(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}

