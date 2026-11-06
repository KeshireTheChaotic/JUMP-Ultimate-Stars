
int FUN_02167388(int param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  iVar1 = param_1 * 0x1a0;
  iVar2 = FUN_0216609c(*(undefined4 *)(DAT_0216e874 + iVar1 + 0x19c));
  iVar6 = param_2 + 3 >> 2;
  *(short *)(iVar2 + 10) = (short)iVar6;
  uVar3 = OS_DisableIrqMask(1);
  if (param_3 == 0) {
    iVar7 = DAT_0216e874 + param_1 * 0x1a0;
    piVar8 = (int *)(iVar7 + 0x18c);
    if (piVar8 != (int *)(iVar7 + 0x180)) {
      piVar9 = piVar8;
      do {
        piVar8 = (int *)*piVar9;
        if ((int)((uint)*(ushort *)(piVar8 + 2) + (uint)*(ushort *)((int)piVar8 + 10)) <=
            (int)((uint)*(ushort *)(piVar9 + 2) - iVar6)) {
          *(short *)(iVar2 + 8) = (short)((uint)*(ushort *)(piVar9 + 2) - iVar6);
          FUN_02167174(piVar9,iVar2);
          piVar8 = piVar9;
          break;
        }
        piVar9 = piVar8;
      } while (piVar8 != (int *)(DAT_0216e874 + iVar1 + 0x180));
    }
    if (piVar8 == (int *)(DAT_0216e874 + iVar1 + 0x180)) {
      FUN_02055684();
    }
  }
  else {
    iVar4 = DAT_0216e874 + param_1 * 0x1a0;
    iVar7 = iVar4 + 0x180;
    if (iVar7 != iVar4 + 0x18c) {
      iVar4 = iVar7;
      do {
        iVar7 = *(int *)(iVar4 + 4);
        iVar5 = (uint)*(ushort *)(iVar4 + 8) + (uint)*(ushort *)(iVar4 + 10);
        if (iVar5 + iVar6 <= (int)(uint)*(ushort *)(iVar7 + 8)) {
          *(short *)(iVar2 + 8) = (short)iVar5;
          FUN_02167174(iVar7,iVar2);
          iVar7 = iVar4;
          break;
        }
        iVar4 = iVar7;
      } while (iVar7 != DAT_0216e874 + iVar1 + 0x18c);
    }
    if (iVar7 == DAT_0216e874 + iVar1 + 0x18c) {
      FUN_02055684();
    }
  }
  *param_4 = (uint)*(ushort *)(iVar2 + 8);
  OS_EnableIrqMask(uVar3);
  return iVar2;
}

