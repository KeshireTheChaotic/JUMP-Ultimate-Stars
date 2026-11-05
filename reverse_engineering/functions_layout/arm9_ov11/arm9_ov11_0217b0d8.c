
undefined4 FUN_0217b0d8(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*param_1 + param_2 * 4 + 0x9c);
  }
  return uVar1;
}

