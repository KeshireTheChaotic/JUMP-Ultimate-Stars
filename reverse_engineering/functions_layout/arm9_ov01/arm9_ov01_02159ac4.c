
void FUN_02159ac4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x24);
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      piVar1 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar1 + 0x88))(piVar1,iVar2,iVar3,0xb,param_4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x20);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  return;
}

