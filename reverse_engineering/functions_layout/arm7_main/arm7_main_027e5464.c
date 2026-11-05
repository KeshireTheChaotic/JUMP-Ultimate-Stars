
void FUN_027e5464(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  iVar3 = DAT_027f97f0;
  uVar1 = *(ushort *)(DAT_027f97f0 + 0x182);
  uVar12 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(uint *)(param_1 + 8);
  uVar11 = *(uint *)(param_1 + 0xc);
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar10 = *(undefined4 *)(param_1 + 0x18);
  uVar13 = *(undefined4 *)(param_1 + 0x1c);
  if (*(short *)(DAT_027f97f0 + 0x188) != 0) {
    uVar11 = 1;
  }
  if (*(int *)(DAT_027f97f0 + 0xc) == 0) {
    iVar9 = 3;
  }
  else if ((uVar11 & uVar1) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = FUN_027e7258((uint)uVar1,*(uint *)(param_1 + 0x14) & 0xffff,uVar7 & 0xffff,uVar11,uVar12
                         ,uVar6 & 0xffff,uVar10,uVar13);
  }
  if (iVar9 != 2) {
    puVar4 = (undefined2 *)FUN_03808074();
    *puVar4 = 0x81;
    puVar4[1] = (short)iVar9;
    puVar4[4] = 0x14;
    puVar4[5] = (short)uVar7;
    puVar4[6] = (ushort)uVar11;
    if (iVar9 == 10) {
      puVar4[7] = (ushort)uVar11 & uVar1;
    }
    else {
      puVar4[7] = 0;
    }
    puVar4[8] = 0;
    puVar4[0xc] = (short)uVar6;
    *(undefined4 *)(puVar4 + 10) = uVar12;
    *(undefined4 *)(puVar4 + 0xe) = uVar10;
    *(undefined4 *)(puVar4 + 0x10) = uVar13;
    puVar4[0xd] = 0xffff;
    uVar2 = *(undefined2 *)(iVar3 + 0x30);
    uVar8 = *(undefined2 *)(iVar3 + 0x32);
    if (*(short *)(iVar3 + 0x188) == 0) {
      uVar5 = uVar2;
    }
    else {
      uVar5 = uVar8;
    }
    puVar4[0x12] = uVar5;
    if (*(short *)(iVar3 + 0x188) != 0) {
      uVar8 = uVar2;
    }
    puVar4[0x13] = uVar8;
    FUN_038080d0();
  }
  return;
}

