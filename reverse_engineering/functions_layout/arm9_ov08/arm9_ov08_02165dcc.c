
void FUN_02165dcc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  iVar1 = param_1 * 0x228;
  iVar2 = FUN_0216609c(*(undefined4 *)(DAT_0216e834 + iVar1 + 0x224));
  uVar3 = OS_DisableIrqMask(1);
  if (param_3 == 0) {
    iVar7 = DAT_0216e834 + param_1 * 0x228;
    piVar8 = (int *)(iVar7 + 0x210);
    if (piVar8 != (int *)(iVar7 + 0x200)) {
      piVar9 = piVar8;
      do {
        piVar8 = (int *)*piVar9;
        uVar4 = piVar9[2] + param_2 * -8;
        if (piVar8[2] + (uint)*(byte *)(piVar8 + 3) * 8 <= uVar4) {
          *(uint *)(iVar2 + 8) = uVar4;
          FUN_02167174(piVar9,iVar2);
          piVar8 = piVar9;
          break;
        }
        piVar9 = piVar8;
      } while (piVar8 != (int *)(DAT_0216e834 + iVar1 + 0x200));
    }
    if (piVar8 == (int *)(DAT_0216e834 + iVar1 + 0x200)) {
      FUN_02055684();
    }
  }
  else {
    iVar5 = DAT_0216e834 + param_1 * 0x228;
    iVar7 = iVar5 + 0x200;
    if (iVar7 != iVar5 + 0x210) {
      iVar5 = iVar7;
      do {
        iVar7 = *(int *)(iVar5 + 4);
        iVar6 = *(int *)(iVar5 + 8) + (uint)*(byte *)(iVar5 + 0xc) * 8;
        if ((uint)(iVar6 + param_2 * 8) <= *(uint *)(iVar7 + 8)) {
          *(int *)(iVar2 + 8) = iVar6;
          FUN_02167174(iVar7,iVar2);
          iVar7 = iVar5;
          break;
        }
        iVar5 = iVar7;
      } while (iVar7 != DAT_0216e834 + iVar1 + 0x210);
    }
    if (iVar7 == DAT_0216e834 + iVar1 + 0x210) {
      FUN_02055684();
    }
  }
  OS_EnableIrqMask(uVar3);
  *(char *)(iVar2 + 0xc) = (char)param_2;
  return;
}

