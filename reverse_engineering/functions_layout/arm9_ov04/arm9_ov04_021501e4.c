
void FUN_021501e4(int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x20) = param_2;
    *(undefined2 *)(param_1 + 0x22) = param_3;
    uStack_18 = param_4;
    for (iVar2 = 0; iVar2 < *(char *)(param_1 + 0x18) * 2 + 1; iVar2 = iVar2 + 1) {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar2 * 4);
      psVar3 = *(short **)(*(int *)(iVar1 + 4) + 0x10);
      local_1c = ((int)psVar3[1] + (int)*(short *)(param_1 + 0x22)) * 0x1000;
      local_20 = ((int)*psVar3 + (int)*(short *)(param_1 + 0x20)) * 0x1000;
      FUN_0214e1b8(iVar1,&local_20,&local_1c);
    }
  }
  return;
}

