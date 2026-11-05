
void FUN_0215f234(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  sVar1 = *(short *)(iVar4 + 0x6c);
  *(short *)(iVar4 + 0x6c) = sVar1 + -1;
  if (sVar1 != 0) {
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),ALControllerImp::Create);
  *(undefined2 *)(iVar4 + 0x6c) = 0xb4;
  iVar2 = FUN_0215f4e4(iVar4,iVar4 + 0x24);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar4 + 0x68) = 1;
  }
  iVar2 = FUN_0215f4e4(iVar4,iVar4 + 0x40);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar4 + 0x68) = 1;
  }
  piVar3 = *(int **)(*(int *)(iVar4 + 0x20) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  return;
}

