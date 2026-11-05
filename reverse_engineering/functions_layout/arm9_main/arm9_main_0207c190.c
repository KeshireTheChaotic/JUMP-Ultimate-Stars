
void FUN_0207c190(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  puVar6 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207c3a8(puVar6);
  for (puVar7 = (undefined4 *)puVar6[4]; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)*puVar7
      ) {
    iVar5 = FUN_0207c3f8(puVar7[4]);
    if ((iVar5 == 0) || (iVar5 = FUN_0207c3f8(puVar7[5]), iVar5 == 0)) {
      FUN_0207c070(puVar7);
    }
    else {
      sVar3 = *(short *)(puVar7[4] + 0x3e);
      sVar4 = *(short *)((int)puVar7 + 0x1a);
      iVar11 = *(int *)(*(int *)(puVar7[2] + 0x5c) + 0x10);
      sVar2 = *(short *)(puVar7[5] + 0x3e);
      iVar5 = *(int *)(puVar7[3] + 0x5c);
      *(int *)(iVar5 + 0xc) =
           *(int *)(*(int *)(puVar7[2] + 0x5c) + 0xc) +
           ((int)*(short *)(puVar7[4] + 0x3c) + (int)*(short *)(puVar7 + 6)) * 0x100 +
           *(short *)(puVar7[5] + 0x3c) * -0x100;
      *(int *)(iVar5 + 0x10) = iVar11 + ((int)sVar3 + (int)sVar4) * 0x100 + sVar2 * -0x100;
    }
  }
  puVar7 = (undefined4 *)*puVar6;
  while (puVar7 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)*puVar7;
    if ((*(byte *)((int)puVar7 + 0x1d) & 1) == 0) {
      iVar11 = *(int *)(puVar7[2] + 0x5c);
      iVar5 = *(int *)(puVar7[3] + 0x5c);
      iVar10 = *(int *)(iVar11 + 0x10);
      iVar9 = *(int *)(iVar11 + 0x18);
      *(int *)(iVar5 + 0xc) =
           *(int *)(iVar5 + 0xc) + (*(int *)(iVar11 + 0xc) - *(int *)(iVar11 + 0x14));
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + (iVar10 - iVar9);
      *(byte *)((int)puVar7 + 0x1d) = *(byte *)((int)puVar7 + 0x1d) | 1;
    }
    else {
      FUN_02037c24(puVar6,puVar7);
      FUN_02037b98(puVar6 + 8,puVar7);
    }
    puVar7 = puVar8;
  }
  for (puVar6 = (undefined4 *)puVar6[2]; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)*puVar6
      ) {
    iVar5 = FUN_0207c3f8(puVar6[4]);
    if ((iVar5 == 0) || (iVar5 = FUN_0207c3f8(puVar6[5]), iVar5 == 0)) {
      FUN_0207c070(puVar6);
    }
    else if (((*(uint *)(puVar6[2] + 0x40) & 0x100) == 0) &&
            (iVar5 = puVar6[3], (*(uint *)(iVar5 + 0x40) & 0x100) == 0)) {
      *(uint *)(iVar5 + 0x78) = *(uint *)(iVar5 + 0x78) | 0x20000;
      sVar3 = *(short *)(puVar6[4] + 0x3e);
      bVar1 = *(byte *)(*(int *)(*(int *)(*(int *)(puVar6[3] + 0x30) + 4) + 100) + 0x49);
      sVar4 = *(short *)((int)puVar6 + 0x1a);
      iVar11 = *(int *)(*(int *)(puVar6[2] + 0x5c) + 0x10);
      iVar5 = *(int *)(puVar6[3] + 0x5c);
      *(int *)(iVar5 + 0xc) =
           *(int *)(*(int *)(puVar6[2] + 0x5c) + 0xc) +
           ((int)*(short *)(puVar6[4] + 0x3c) + (int)*(short *)(puVar6 + 6)) * 0x100;
      *(uint *)(iVar5 + 0x10) = iVar11 + ((int)sVar4 * ((uint)bVar1 * -2 + 1) + (int)sVar3) * 0x100;
      iVar5 = *(int *)(puVar6[3] + 0x5c);
      *(undefined2 *)(iVar5 + 0x24) = 0;
      *(undefined2 *)(iVar5 + 0x26) = 0;
    }
  }
  return;
}

