
void FUN_0214f1bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar2 = *(int *)(param_1 + 0x60);
  uStack_1c = param_4;
  for (iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x15c) + 8) +
                       0x24) * 3; iVar4 < 0x20; iVar4 = iVar4 + 1) {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
      (**(code **)(*piVar1 + 0x88))(piVar1,iVar3,iVar4,8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  local_20 = 0x30000;
  FUN_0214f244(iVar2,&local_20);
  return;
}

