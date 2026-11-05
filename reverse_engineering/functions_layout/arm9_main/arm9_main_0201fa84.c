
bool FUN_0201fa84(int *param_1,int *param_2,ushort param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_4 == (int *)0x0) {
    param_4 = (int *)param_1[7];
  }
  (**(code **)(*param_1 + 0xd0))();
  iVar1 = FUN_0201e6d4();
  uVar3 = 0;
  do {
    if (*(byte *)(iVar1 + 6) <= uVar3) {
      return false;
    }
    iVar7 = *(int *)(param_1[0x17] + uVar3 * 4);
    for (iVar8 = 0; iVar8 < (int)(uint)*(ushort *)(iVar7 + 0x52); iVar8 = iVar8 + 1) {
      iVar6 = *(int *)(iVar7 + 0x4c);
      iVar2 = iVar6 + iVar8 * 0x10;
      piVar5 = *(int **)(iVar2 + 4);
      bVar9 = piVar5 == param_2;
      if (bVar9) {
        piVar5 = *(int **)(iVar6 + iVar8 * 0x10);
      }
      if (bVar9 && piVar5 == param_4) {
        puVar4 = *(ushort **)(iVar2 + 0xc);
        uVar3 = (**(code **)(*param_2 + 0x68))(param_2,param_4);
        iVar1 = (uVar3 >> 1) + 1;
        for (; param_3 < *puVar4; puVar4 = puVar4 + -iVar1) {
        }
        for (; puVar4[iVar1] <= param_3; puVar4 = puVar4 + iVar1) {
        }
        return *puVar4 == param_3;
      }
    }
    uVar3 = uVar3 + 1;
  } while( true );
}

