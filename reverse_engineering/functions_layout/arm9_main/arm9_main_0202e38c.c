
void FUN_0202e38c(int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_424 [16];
  undefined1 auStack_414 [1024];
  undefined4 uStack_14;
  
                    /* JUS-TAG strings=["%%.%df"] */
  uVar1 = *param_3;
  uStack_14 = param_4;
  FUN_02003ce0(auStack_424,s_____df_0209d9ac,8);
  FUN_02003ce0(auStack_414,auStack_424,uVar1);
  (**(code **)(*param_1 + 0x24))(param_1,param_2,auStack_414,*(code **)(*param_1 + 0x24),uVar1);
  return;
}

