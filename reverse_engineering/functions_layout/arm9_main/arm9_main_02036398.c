
undefined * FUN_02036398(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  if ((*(int **)(param_1 + 0x1c))[1] == 0) {
    if ((DAT_020a0f50 & 1) == 0) {
      FUN_02019ba0(&DAT_020a10cc,0,0,0,0,param_4);
      DAT_020a0f50 = DAT_020a0f50 | 1;
    }
    DAT_020a10d0 = *(undefined2 *)(param_1 + 0x2c);
    puVar1 = &DAT_020a10cc;
    DAT_020a10d2 = *(undefined2 *)(param_1 + 0x2e);
  }
  else {
    puVar1 = (undefined *)(**(code **)(**(int **)(param_1 + 0x1c) + 8))();
  }
  return puVar1;
}

