
undefined4 FUN_02030094(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
  if (param_2 < uVar1) {
    param_3 = (**(code **)(**(int **)(param_1 + 0xc) + 0x34))
                        (*(int **)(param_1 + 0xc),param_2,param_3);
  }
  return param_3;
}

