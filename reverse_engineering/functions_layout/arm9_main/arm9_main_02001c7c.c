
undefined4 FUN_02001c7c(undefined4 param_1)

{
  int iVar1;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = 0;
  iVar1 = FUN_02001cbc(param_1,0,auStack_8,0);
  if (iVar1 == 1) {
    return auStack_8[0];
  }
  return 0;
}

