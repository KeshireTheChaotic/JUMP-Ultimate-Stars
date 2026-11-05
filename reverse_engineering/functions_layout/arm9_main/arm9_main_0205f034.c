
uint FUN_0205f034(ushort *param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  
  uVar1 = param_1[2];
  uVar3 = 0xffff;
  if (uVar1 == 0) {
    uVar3 = (uint)param_1[6] + (param_2 - *param_1) & 0xffff;
  }
  else if (uVar1 == 1) {
    uVar3 = (uint)param_1[(param_2 - *param_1) + 6];
  }
  else if (uVar1 == 2) {
    puVar2 = param_1 + 7;
    puVar5 = puVar2 + (param_1[6] - 1) * 2;
    if (puVar2 <= puVar5) {
      do {
        iVar4 = ((int)puVar5 - (int)puVar2) + ((uint)((int)puVar5 - (int)puVar2 >> 1) >> 0x1e);
        iVar4 = (iVar4 >> 2) - (iVar4 >> 0x1f) >> 1;
        if (puVar2[iVar4 * 2] < param_2) {
          puVar2 = puVar2 + iVar4 * 2 + 2;
        }
        else {
          if (puVar2[iVar4 * 2] <= param_2) {
            return (uint)puVar2[iVar4 * 2 + 1];
          }
          puVar5 = puVar2 + iVar4 * 2 + -2;
        }
      } while (puVar2 <= puVar5);
    }
  }
  return uVar3;
}

