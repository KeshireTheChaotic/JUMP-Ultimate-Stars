
void FUN_021c4840(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_2;
  iVar5 = param_2[1] >> 0xc;
  iVar2 = param_2[2];
  iVar3 = iVar5 + (param_2[3] >> 0xc);
  for (; iVar5 <= iVar3; iVar5 = iVar5 + 1) {
    for (iVar6 = iVar1 >> 0xc; iVar6 <= (iVar1 >> 0xc) + (iVar2 >> 0xc); iVar6 = iVar6 + 1) {
      piVar4 = *(int **)(*(int *)(param_1 + 4) + 100);
      (**(code **)(*piVar4 + 0x60))(piVar4,iVar6,iVar5,0x180,0xe,0,0);
    }
  }
  return;
}

