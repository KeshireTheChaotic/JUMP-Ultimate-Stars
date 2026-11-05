
uint FUN_0201731c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x20);
  uVar3 = 0;
  uVar6 = 0;
  uVar4 = 0x7fffffff;
  while( true ) {
    if (*(ushort *)(iVar5 + 8) <= uVar6) {
      for (uVar6 = 0; uVar6 < *(ushort *)(iVar5 + 8); uVar6 = uVar6 + 1) {
        iVar1 = iVar5 + uVar6 * 4;
        iVar8 = ((int)param_2 >> 8 & 0xffU) - (uint)*(byte *)(iVar1 + 1);
        iVar7 = (param_2 & 0xff) - (uint)*(byte *)(iVar5 + uVar6 * 4);
        uVar2 = -(uint)*(byte *)(iVar1 + 3) * -(uint)*(byte *)(iVar1 + 3) +
                -(uint)*(byte *)(iVar1 + 2) * -(uint)*(byte *)(iVar1 + 2) +
                iVar7 * iVar7 + iVar8 * iVar8;
        if (uVar2 < uVar4) {
          uVar4 = uVar2;
          uVar3 = uVar6;
        }
      }
      return uVar3;
    }
    if (param_2 == *(ushort *)(*(int *)(*(int *)(param_1 + 0x20) + 0x10) + uVar6 * 2)) break;
    uVar6 = uVar6 + 1;
  }
  return uVar6;
}

