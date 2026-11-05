
undefined4 FUN_020782ac(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = *(int *)(param_1 + 0x5c8) + param_2;
  while( true ) {
    if (-1 < param_2) {
      return 1;
    }
    iVar1 = FUN_020782f4(param_1,1);
    if (iVar1 == 0) break;
    param_2 = param_2 + 0x6400;
  }
  return 0;
}

