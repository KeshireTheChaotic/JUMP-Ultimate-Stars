
void FUN_0207a098(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int unaff_r9;
  undefined8 uVar9;
  
  puVar7 = (undefined4 *)0x0;
  iVar5 = ((int)*(char *)(param_2 + 0xe) << 0x1a) >> 0x1a;
  if ((iVar5 == -1) ||
     (iVar5 = iVar5 * 0xc, *(short *)(param_2 + 0xc) != *(short *)(param_1 + iVar5 + 0x74))) {
    uVar8 = 0xffffffff;
    uVar6 = 0xffffffff;
    piVar2 = (int *)(param_1 + 0x70);
    for (uVar3 = 0; uVar3 < 8; uVar3 = uVar3 + 1) {
      if (uVar8 == 0xffffffff) {
        unaff_r9 = *piVar2;
      }
      if (uVar8 == 0xffffffff && unaff_r9 == 0) {
        uVar8 = uVar3;
      }
      unaff_r9 = (int)*(short *)(param_2 + 0xc);
      if (*(short *)((int)piVar2 + 6) < 0) {
        uVar6 = uVar3;
      }
      if ((short)piVar2[1] == unaff_r9) {
        *(byte *)(param_2 + 0xe) = *(byte *)(param_2 + 0xe) & 0xc0 | (byte)uVar3 & 0x3f;
        puVar7 = (undefined4 *)
                 ((((int)*(char *)(param_2 + 0xe) << 0x1a) >> 0x1a) * 0xc + param_1 + 0x70);
        break;
      }
      piVar2 = piVar2 + 3;
    }
    if (puVar7 == (undefined4 *)0x0) {
      if (uVar8 == 0xffffffff) {
        FUN_0207b1c0(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(uVar6 * 0xc + param_1 + 0x70));
        uVar8 = uVar6;
      }
      puVar7 = (undefined4 *)(param_1 + 0x70 + uVar8 * 0xc);
      uVar9 = BattleCol::Battle_ColObjAddColWork
                        (*(undefined4 *)(param_1 + 0xd0),*(undefined2 *)(param_2 + 0xc));
      puVar4 = (undefined1 *)((ulonglong)uVar9 >> 0x20);
      iVar5 = (int)uVar9;
      if (iVar5 != 0) {
        puVar4 = &LAB_0207a068;
      }
      *(int *)(param_1 + 0x70 + uVar8 * 0xc) = iVar5;
      if (iVar5 != 0) {
        *(undefined1 **)(iVar5 + 0x28) = puVar4;
        *(undefined4 **)(iVar5 + 0x24) = puVar7;
        puVar7[2] = param_1;
      }
      *(undefined2 *)(puVar7 + 1) = *(undefined2 *)(param_2 + 0xc);
      *(ushort *)((int)puVar7 + 6) = *(ushort *)((int)puVar7 + 6) & 0x8000;
      *(byte *)(param_2 + 0xe) = *(byte *)(param_2 + 0xe) & 0xc0 | (byte)uVar8 & 0x3f;
    }
  }
  else {
    puVar7 = (undefined4 *)(param_1 + 0x70 + iVar5);
  }
  uVar1 = *(ushort *)((int)puVar7 + 6);
  *(ushort *)((int)puVar7 + 6) = uVar1 & 0x8000 | (uVar1 & 0x7fff) + 1 & 0x7fff;
  *(byte *)(param_2 + 0xf) = *(byte *)(param_2 + 0xf) & 0xc0 | (byte)uVar1 & 0x3f;
  FUN_0207b25c(*puVar7,*(ushort *)((int)puVar7 + 6) & 0x7fff);
  FUN_02079e40(param_1,param_2,param_3);
  if ((*(ushort *)((int)puVar7 + 6) & 0x7fff) == 1) {
    FUN_0207b2d0(*puVar7,1);
    return;
  }
  return;
}

