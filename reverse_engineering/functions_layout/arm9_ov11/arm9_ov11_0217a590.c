
undefined4 FUN_0217a590(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*param_1 + 100);
  }
  return uVar1;
}

