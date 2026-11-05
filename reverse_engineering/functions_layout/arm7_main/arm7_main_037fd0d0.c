
int FUN_037fd0d0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  
  iVar6 = 0;
  iVar5 = 0;
  iVar4 = -1;
  OS_DisableInterrupts();
  piVar8 = *(int **)(&DAT_03808434 + param_1 * 4);
  if (param_2 == -1) {
    param_2 = *piVar8;
  }
  iVar2 = piVar8[4];
  if (((iVar2 != 0) && (-1 < param_2)) && (param_2 < piVar8[1])) {
    iVar3 = iVar2 + param_2 * 0xc;
    iVar2 = *(int *)(iVar2 + param_2 * 0xc);
    if ((-1 < iVar2) && ((puVar1 = *(uint **)(iVar3 + 8), puVar1 == (uint *)0x0 || (*puVar1 == 0))))
    {
      while (puVar1 != (uint *)0x0) {
        if ((((puVar1 < (uint *)piVar8[2]) || ((uint)piVar8[3] <= puVar1)) ||
            ((((uint)puVar1 & 0x1f) != 0 ||
             ((((puVar9 = (uint *)puVar1[1], puVar9 != (uint *)0x0 && ((uint *)*puVar9 != puVar1))
               || (uVar7 = puVar1[2], uVar7 < 0x40)) ||
              (((uVar7 & 0x1f) != 0 || (iVar6 = iVar6 + uVar7, iVar6 < 1)))))))) || (iVar2 < iVar6))
        goto LAB_037fd26c;
        puVar1 = puVar9;
      }
      puVar1 = *(uint **)(iVar3 + 4);
      if ((puVar1 == (uint *)0x0) || (*puVar1 == 0)) {
        while (puVar1 != (uint *)0x0) {
          if (((((puVar1 < (uint *)piVar8[2]) || ((uint)piVar8[3] <= puVar1)) ||
               (((uint)puVar1 & 0x1f) != 0)) ||
              (((puVar9 = (uint *)puVar1[1], puVar9 != (uint *)0x0 && ((uint *)*puVar9 != puVar1))
               || ((uVar7 = puVar1[2], uVar7 < 0x40 || ((uVar7 & 0x1f) != 0)))))) ||
             ((puVar9 != (uint *)0x0 && (puVar9 <= (uint *)((int)puVar1 + uVar7)))))
          goto LAB_037fd26c;
          iVar6 = iVar6 + uVar7;
          iVar5 = iVar5 + (uVar7 - 0x20);
          if ((iVar6 < 1) || (iVar2 < iVar6)) goto LAB_037fd26c;
          puVar1 = puVar9;
        }
        if (iVar6 == iVar2) {
          iVar4 = iVar5;
        }
      }
    }
  }
LAB_037fd26c:
  OS_RestoreInterrupts();
  return iVar4;
}

