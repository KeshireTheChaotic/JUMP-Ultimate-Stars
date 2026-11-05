
undefined4
FUN_02161928(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1[8] + 0xc) + 0x24);
  if (*(char *)(iVar2 + 1) == '\x05') {
    *(undefined1 *)(iVar2 + 1) = 1;
    *param_1 = param_2;
    param_1[1] = param_3 & 0xffff;
    uVar1 = FUN_02051098(param_2,param_3);
    *(undefined2 *)(param_1 + 3) = uVar1;
    param_1[4] = param_4;
    param_1[6] = param_5 & 0xffff;
    MIi_CpuClear32(0,iVar2 + 0x10,0x158);
    return 1;
  }
  return 0;
}

