
undefined4 FUN_02184168(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((*(int *)(param_2 + 8) != 0) && (*(int *)(iVar1 + 0x104) == 0)) {
    FUN_02175814(*(undefined4 *)(*(int *)(param_2 + 8) + 8));
    *(undefined4 *)(*(int *)(param_2 + 8) + 8) = 0;
    FUN_02175814(*(undefined4 *)(*(int *)(param_2 + 8) + 0xc));
    *(undefined4 *)(*(int *)(param_2 + 8) + 0xc) = 0;
    FUN_02175814(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(param_2 + 8) = 0;
  }
  FUN_02175814(*(undefined4 *)(param_2 + 0x10));
  *(undefined4 *)(param_2 + 0x10) = 0;
  FUN_02175814(*(undefined4 *)(param_2 + 0x18));
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  if ((*(int *)(param_2 + 0xc) == 0) ||
     ((*(int *)(iVar1 + 0x104) == 1 && (*(int *)(param_2 + 8) == 0)))) {
    FUN_021875c0(param_1,param_2);
    return 0;
  }
  return 1;
}

