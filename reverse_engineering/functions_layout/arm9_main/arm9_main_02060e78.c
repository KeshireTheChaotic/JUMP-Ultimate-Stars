
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02060e78(undefined2 *param_1)

{
  int iVar1;
  
  if ((((_DAT_027ffcd8 != 0) || (_DAT_027ffcde != 0)) || (_DAT_027ffcda != 0)) ||
     (_DAT_027ffce0 != 0)) {
    iVar1 = FUN_02060acc(param_1,_DAT_027ffcd8,_DAT_027ffcda,DAT_027ffcdc,DAT_027ffcdd,_DAT_027ffcde
                         ,_DAT_027ffce0,DAT_027ffce2,DAT_027ffce3);
    if (iVar1 == 0) {
      return 1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return 1;
}

