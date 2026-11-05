
void FUN_021c4cc8(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *param_2 >> 0xc;
  iVar1 = param_2[2];
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,param_4,param_3,0xe,0,0);
  iVar1 = iVar3 + (iVar1 >> 0xc);
  while (iVar3 = iVar3 + 1, iVar3 < iVar1) {
    piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
    (**(code **)(*piVar2 + 0x60))(piVar2,iVar3,param_4,param_3 + 1,0xe,0,0);
  }
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar2 + 0x60))(piVar2,iVar1,param_4,param_3 + 2,0xe,0,0);
  return;
}

