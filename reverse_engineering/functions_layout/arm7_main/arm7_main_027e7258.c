
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_027e7258(ushort param_1,int param_2,ushort param_3,ushort param_4,undefined4 param_5,
            ushort param_6,undefined4 param_7,undefined4 param_8)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  int iVar7;
  
  iVar2 = DAT_027f97f0;
  iVar7 = DAT_027f97f0 + 0x2f8;
  puVar6 = (ushort *)(DAT_027f97f0 + 0x70c + param_2 * 4);
  if (param_6 == 0) {
    return 6;
  }
  if ((param_3 & 8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 2;
  }
  if ((uint)*(ushort *)(DAT_027f97f0 + 0x3c) < (uint)param_6 + iVar4) {
    return 6;
  }
  FUN_037fce24(DAT_027f97f0 + 0x71c);
  uVar1 = *(ushort *)(iVar2 + 0x6f8);
  uVar3 = (uint)uVar1;
  if (uVar3 == 0xffff) {
    FUN_037fcdb4(iVar2 + 0x71c);
    return 10;
  }
  puVar5 = (undefined2 *)(iVar7 + uVar3 * 0x20);
  *(undefined2 *)(iVar2 + 0x6f8) = *(undefined2 *)(iVar7 + uVar3 * 0x20);
  if (*(ushort *)(iVar2 + 0x6fa) == uVar3) {
    *(undefined2 *)(iVar2 + 0x6fa) = 0xffff;
  }
  puVar5[1] = param_3;
  puVar5[2] = param_4;
  puVar5[3] = param_4 & param_1;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined4 *)(puVar5 + 10) = param_5;
  puVar5[7] = param_6;
  *(undefined4 *)(puVar5 + 0xc) = param_7;
  *(undefined4 *)(puVar5 + 0xe) = param_8;
  *puVar5 = 0xffff;
  puVar5[8] = 0xffff;
  puVar5[9] = *(undefined2 *)(iVar2 + 0x98);
  if (puVar6[1] == 0xffff) {
    *puVar6 = uVar1;
  }
  else {
    *(ushort *)(iVar7 + (uint)puVar6[1] * 0x20) = uVar1;
  }
  puVar6[1] = uVar1;
  FUN_037fcdb4(iVar2 + 0x71c);
  return 2;
}

