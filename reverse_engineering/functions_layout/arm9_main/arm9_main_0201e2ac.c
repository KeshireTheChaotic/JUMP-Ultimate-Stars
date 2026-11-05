
bool FUN_0201e2ac(int param_1,int *param_2,ushort param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  bool bVar6;
  
  if (param_4 == (int *)0x0) {
    param_4 = *(int **)(param_1 + 0x1c);
  }
  iVar5 = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(param_1 + 0x52) <= iVar5) {
      return false;
    }
    iVar3 = *(int *)(param_1 + 0x4c) + iVar5 * 0x10;
    piVar2 = *(int **)(iVar3 + 4);
    bVar6 = piVar2 == param_2;
    if (bVar6) {
      piVar2 = *(int **)(*(int *)(param_1 + 0x4c) + iVar5 * 0x10);
    }
    if (bVar6 && piVar2 == param_4) break;
    iVar5 = iVar5 + 1;
  }
  puVar4 = *(ushort **)(iVar3 + 0xc);
  uVar1 = (**(code **)(*param_2 + 0x68))(param_2,param_4);
  iVar5 = (uVar1 >> 1) + 1;
  for (; param_3 < *puVar4; puVar4 = puVar4 + -iVar5) {
  }
  for (; puVar4[iVar5] <= param_3; puVar4 = puVar4 + iVar5) {
  }
  return *puVar4 == param_3;
}

