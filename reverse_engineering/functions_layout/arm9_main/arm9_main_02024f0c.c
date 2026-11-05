
void FUN_02024f0c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == (int *)0x0) {
    FUN_020196c4(param_1 + 0x14,0);
  }
  else {
    uVar1 = (**(code **)(*param_2 + 0x5c))
                      (param_2,*(undefined4 *)(param_1 + 0x34),*(code **)(*param_2 + 0x5c),param_4,
                       param_4);
    FUN_020196c4(param_1 + 0x14,uVar1,param_3);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

