
void FUN_020821c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int extraout_r1;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_18;
  
  local_18 = param_4;
  for (puVar7 = *(undefined4 **)(param_1 + 0x88); puVar7 != (undefined4 *)0x0;
      puVar7 = (undefined4 *)*puVar7) {
    iVar4 = puVar7[2];
    iVar8 = 0;
    piVar3 = (int *)(iVar4 + 0xa4);
    piVar5 = (int *)(iVar4 + 0xec);
    do {
      iVar8 = iVar8 + 1;
      *(int *)(iVar4 + 0x134) = *(int *)(iVar4 + 0x134) + *piVar3;
      *(int *)(iVar4 + 0x138) = *(int *)(iVar4 + 0x138) + *piVar5;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar8 < 0x11);
    if (*(int *)(iVar4 + 0x134) != 0) {
      *(short *)(iVar4 + 0x180) = (short)((uint)*(int *)(iVar4 + 0x134) >> 8);
    }
    iVar8 = (int)*(char *)(iVar4 + 0x173);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 == 0x17) {
      uVar9 = 0;
      uVar6 = 0;
      uVar1 = (uint)*(byte *)(iVar4 + 0x182) | (int)(uint)*(byte *)(iVar4 + 0x182) >> 4;
      *(char *)(iVar4 + 0x182) = (char)uVar1;
      do {
        if ((uVar1 & 1 << uVar6) != 0) {
          *(char *)((int)&local_18 + uVar9) = (char)uVar6;
          uVar9 = uVar9 + 1 & 0xff;
        }
        uVar6 = uVar6 + 1 & 0xff;
      } while (uVar6 < 4);
      if (uVar9 < 2) {
        *(undefined1 *)(iVar4 + 0x182) = (undefined1)local_18;
      }
      else {
        uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
        FUN_0200d338(uVar2,uVar9);
        *(undefined1 *)(iVar4 + 0x182) = *(undefined1 *)((int)&local_18 + extraout_r1);
      }
    }
    else {
      *(undefined1 *)(iVar4 + 0x182) = 0;
    }
  }
  piVar3 = (int *)(param_1 + 0x154);
  iVar4 = 0;
  do {
    piVar3[5] = piVar3[4] + piVar3[3] + piVar3[2] + *piVar3 + piVar3[1];
    iVar4 = iVar4 + 1;
    piVar3[0xb] = piVar3[10] + piVar3[9] + piVar3[8] + piVar3[6] + piVar3[7];
    piVar3 = piVar3 + 0xc;
  } while (iVar4 < 0x10);
  return;
}

