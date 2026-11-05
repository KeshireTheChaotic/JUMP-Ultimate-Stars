
void FUN_027e1380(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  
  iVar3 = DAT_027f97f0;
  uVar4 = (int)(uint)*(byte *)(param_1 + 0x1f) >> 2;
  if ((*(byte *)(param_1 + 0x1f) & 2) == 0) {
    uVar4 = uVar4 + 0x19;
  }
  if (uVar4 < *(ushort *)(DAT_027f97f0 + 0xbe)) {
    *(short *)(DAT_027f97f0 + 0xbe) = (short)uVar4;
  }
  if (*(int *)(iVar3 + 0xc) != 0) {
    if (*(short *)(iVar3 + 0x60) == 1) {
      *(undefined2 *)(iVar3 + 0x60) = 0;
    }
    sVar1 = *(short *)(iVar3 + 0x8e);
    *(ushort *)(iVar3 + 0x70) = *(ushort *)(iVar3 + 0x70) ^ 1;
    iVar8 = *(int *)(iVar3 + (uint)*(ushort *)(iVar3 + 0x70) * 4 + 0x74);
    uVar4 = *(ushort *)(param_1 + 0x16) + 0x30;
    if (*(ushort *)(iVar3 + 0x72) < uVar4) {
      uVar4 = (uint)*(ushort *)(iVar3 + 0x72);
    }
    FUN_037fe788(param_1 + 0x10,iVar8,uVar4);
    uVar5 = OS_DisableInterrupts();
    bVar9 = *(short *)(iVar3 + 0x84) == 1;
    if (bVar9) {
      FUN_037fd998(&DAT_0380bc10);
    }
    *(undefined2 *)(iVar3 + 0x84) = 1;
    *(undefined2 *)(iVar3 + 0x82) = *(undefined2 *)(iVar8 + 10);
    uVar2 = *(ushort *)(param_1 + 0x18);
    bVar10 = (uVar2 & 0x2000) != 0;
    *(ushort *)(iVar3 + 0x90) = (ushort)bVar10;
    FUN_037fdaa4(&DAT_0380bc10,
                 (uint)((ulonglong)
                        ((((uint)*(ushort *)(iVar8 + 10) - (uint)*(ushort *)(iVar8 + 0xc) & 0xffff)
                         + 0x80) * 0x10) * 0x82ea >> 6) >> 10,0,FUN_027e12e0,0);
    bVar11 = (uVar2 & 0x6000) == 0x6000;
    if (bVar11) {
      *(undefined2 *)(iVar3 + 0x8a) = 0;
    }
    *(ushort *)(iVar3 + 0x8e) = (ushort)((uVar2 & 0x2800) == 0x2800);
    *(ushort *)(iVar3 + 0x8c) = (ushort)bVar11;
    if (bVar10) {
      iVar6 = FUN_038078c0(*(ushort *)(iVar8 + 0x2c) - 0x66,4);
      uVar4 = iVar6 - 0x20;
      if (-1 < (int)uVar4) {
        if ((int)(uint)*(ushort *)(iVar3 + 0x36) < (int)uVar4) {
          uVar4 = (uint)*(ushort *)(iVar3 + 0x36);
        }
        if (uVar4 != *(ushort *)(iVar3 + 0x32)) {
          FUN_027e0000(uVar4 & 0xffff);
        }
      }
    }
    OS_RestoreInterrupts(uVar5);
    if (bVar9) {
      if (sVar1 == 1) {
        FUN_027e6f14(1,0);
      }
      puVar7 = (undefined2 *)FUN_03808074();
      *puVar7 = 0xe;
      puVar7[1] = 9;
      puVar7[2] = 0xd;
      *(undefined4 *)(puVar7 + 4) = 0;
      FUN_038080d0();
    }
    if (bVar10) {
      FUN_037fe788(param_1 + 0x28,iVar8 + 0x18,6);
      FUN_037fe788(param_1 + 0x2e,iVar8 + 0x1e,6);
      if (*(ushort *)(iVar8 + 6) < 2) {
        *(undefined2 *)(iVar8 + 6) = 0;
        *(undefined2 *)(iVar3 + 0x5e) = 0;
        puVar7 = (undefined2 *)FUN_03808074();
        *puVar7 = 0xe;
        puVar7[1] = 0xe;
        puVar7[2] = 0xc;
        *(int *)(puVar7 + 4) = iVar8;
        FUN_038080d0();
      }
      else {
        *(ushort *)(iVar8 + 6) = *(ushort *)(iVar8 + 6) - 2;
        *(ushort *)(iVar3 + 0x5e) = (ushort)((*(ushort *)(iVar8 + 0x30) & 0x8000) != 0);
        puVar7 = (undefined2 *)FUN_03808074();
        *puVar7 = 0xe;
        puVar7[1] = 0;
        puVar7[2] = 0xc;
        *(int *)(puVar7 + 4) = iVar8;
        FUN_038080d0();
        if (*(short *)(iVar8 + 6) != 0) {
          FUN_027e6a68(0,*(undefined2 *)(iVar8 + 0x30),iVar8 + 0x32,*(short *)(iVar8 + 6),iVar8);
        }
      }
      if (*(int *)(iVar3 + 0x7bc) != 0 || *(int *)(iVar3 + 0x7b8) != 0) {
        uVar12 = FUN_037fd6ac();
        *(uint *)(iVar3 + 0x738) = (uint)uVar12 | 1;
        *(int *)(iVar3 + 0x73c) = (int)((ulonglong)uVar12 >> 0x20);
      }
    }
    else if (1 < *(ushort *)(iVar8 + 6)) {
      *(ushort *)(iVar3 + 0x5e) = (ushort)((*(ushort *)(iVar8 + 0x30) & 0x8000) != 0);
    }
  }
  return;
}

