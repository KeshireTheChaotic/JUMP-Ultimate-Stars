
void FUN_02169a14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(iVar2 + 0x54) + -1;
  *(int *)(iVar2 + 0x54) = iVar1;
  if (iVar1 < 1) {
    *(undefined1 *)(iVar2 + 0x5c) = 1;
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2169a39,(undefined1 *)(iVar2 + 0x5c),param_4,param_4
                );
  }
  return;
}

