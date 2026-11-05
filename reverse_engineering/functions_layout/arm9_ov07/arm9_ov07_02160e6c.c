
bool FUN_02160e6c(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 uint param_5)

{
  undefined2 uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(*(int *)(param_1[8] + 0xc) + 0x24);
  bVar3 = *(int *)(iVar2 + 0x10) == 1;
  if (bVar3) {
    *param_1 = param_2;
    param_1[2] = param_3 & 0xffff;
    param_1[1] = param_3 & 0xffff;
    uVar1 = FUN_02051098(param_2,param_3);
    *(undefined2 *)(param_1 + 3) = uVar1;
    param_1[4] = param_4;
    param_1[6] = param_5 & 0xffff;
    *(undefined4 *)(iVar2 + 0x10) = 2;
    *(undefined4 *)(iVar2 + 0x18) = 0;
  }
  return bVar3;
}

