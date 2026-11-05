
undefined4 FUN_02158bc4(int param_1,int param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  iVar1 = param_3 * 0x4dc;
  iVar3 = param_2 + 0x20 + iVar1;
  *(undefined2 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 2 + 0x418) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 2 + 0x434) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 2 + 0x450) = *(undefined2 *)(param_1 + 10);
  *(bool *)(iVar3 + 0x4db) = (*(byte *)(param_1 + 5) & 1) != 0;
  if ((*(byte *)(param_1 + 5) & 2) != 0) {
    *(code **)(iVar3 + 0x1bc) = FUN_02158d38;
    uVar2 = FUN_02158d38();
    return uVar2;
  }
  iVar7 = (short)(ushort)*(byte *)(param_1 + 4) * 0xc;
  iVar5 = (short)(ushort)*(byte *)(param_1 + 4) * 0x1c;
  *(undefined4 *)(iVar3 + 0xc + iVar5) = *(undefined4 *)(iVar3 + 0x370 + iVar7);
  iVar7 = iVar3 + 0x370 + iVar7;
  iVar5 = iVar3 + 0xc + iVar5;
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar7 + 4);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar7 + 8);
  *(undefined2 *)((uint)*(byte *)(param_1 + 4) * 0x1c + iVar3 + 0x18) =
       *(undefined2 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 2 + 0x418);
  *(undefined2 *)((uint)*(byte *)(param_1 + 4) * 0x1c + iVar3 + 0x1a) =
       *(undefined2 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 2 + 0x434);
  bVar4 = *(byte *)(param_1 + 4);
  uVar6 = (uint)bVar4;
  if (uVar6 < 4) {
    param_2 = *(int *)(param_2 + iVar1 + uVar6 * 4 + 0x1e0);
  }
  iVar7 = uVar6 * 0x1c + iVar3;
  if (uVar6 < 4) {
    *(int *)(iVar7 + 4) = param_2;
  }
  else {
    *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(param_2 + iVar1 + (uVar6 - 4) * 4 + 0x1f0);
  }
  *(undefined2 *)((uint)*(byte *)(param_1 + 4) * 0x1c + iVar3 + 0x1c) =
       *(undefined2 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 2 + 0x450);
  *(byte *)((uint)*(byte *)(param_1 + 4) * 0x1c + iVar3 + 0x1e) = *(byte *)(param_1 + 4);
  bVar8 = (*(byte *)(param_1 + 5) & 1) != 0;
  if (bVar8) {
    bVar4 = 1;
  }
  if (!bVar8) {
    bVar4 = 0;
  }
  *(byte *)((uint)*(byte *)(param_1 + 4) * 0x1c + iVar3 + 0x1f) = bVar4;
  return 0;
}

