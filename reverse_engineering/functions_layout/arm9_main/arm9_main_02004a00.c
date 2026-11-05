
undefined4 FUN_02004a00(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char *local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    return 0xffffffff;
  }
  local_10 = 0;
  local_14 = param_1;
  uStack_c = param_4;
  uVar1 = FUN_02004168(&LAB_020049b8_1,&local_14,param_2,param_3,0);
  return uVar1;
}

