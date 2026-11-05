
undefined4 FUN_02187518(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  iVar1 = FUN_02001450(*(undefined4 *)(*param_1 + 0x428),0x2187549,&local_10);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

