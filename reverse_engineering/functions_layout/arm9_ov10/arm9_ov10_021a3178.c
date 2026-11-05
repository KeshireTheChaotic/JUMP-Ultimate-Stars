
undefined4
FUN_021a3178(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_021abd8c == (undefined4 *)0x0) {
    FUN_020517fc(param_1,0,0x14,param_4,param_4);
    DAT_021abd8c = param_1;
    *(undefined1 *)(param_1 + 4) = 0;
    iVar1 = FUN_02026f94();
    (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
    FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_021a3390);
    *param_1 = 0;
    param_1[1] = iVar1;
  }
  return 1;
}

