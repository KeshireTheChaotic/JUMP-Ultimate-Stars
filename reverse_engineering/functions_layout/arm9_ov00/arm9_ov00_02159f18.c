
void FUN_02159f18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  piVar1 = *(int **)(*(int *)(iVar3 + 0xc) + 4);
  pcVar2 = *(code **)(*piVar1 + 0x198);
  (*pcVar2)(piVar1,iVar4,pcVar2,param_4,param_4);
  if (iVar4 == *(int *)(iVar3 + 0x18)) {
    FUN_02159de4(iVar3,(int)*(char *)(iVar3 + 0x1e),0x26);
    return;
  }
  iVar4 = (int)*(char *)(iVar3 + iVar4 + 0x20);
  if (iVar4 == -1) {
    FUN_02159de4(iVar3,(int)*(char *)(iVar3 + 0x1e),0x25);
    return;
  }
  FUN_02159de4(iVar3,iVar4,0x24);
  return;
}

