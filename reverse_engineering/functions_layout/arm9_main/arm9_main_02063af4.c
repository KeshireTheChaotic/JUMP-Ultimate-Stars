
int FUN_02063af4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x200;
  iVar1 = (**(code **)(iVar3 + 0x50))(iVar3,param_2,param_1[1],param_3);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffdff;
  }
  else if (iVar1 == 6) {
    uVar2 = OS_DisableInterrupts();
    if ((*(uint *)(iVar3 + 0x1c) & 0x200) != 0) {
      do {
        FUN_02053290(iVar3 + 0xc);
      } while ((*(uint *)(iVar3 + 0x1c) & 0x200) != 0);
    }
    OS_RestoreInterrupts(uVar2);
    iVar1 = *(int *)(*(int *)(iVar3 + 0x24) + 0x14);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar1;
}

