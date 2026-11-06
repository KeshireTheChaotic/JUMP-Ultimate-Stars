
void FUN_027e0bb4(int param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  iVar3 = DAT_027f97f0;
  uVar1 = *(ushort *)(param_1 + 0x16);
  uVar7 = (uint)uVar1;
  if ((uVar7 != 0) && (uVar7 < 0x10)) {
    if (*(short *)(DAT_027f97f0 + 0xf6) == 0) {
      puVar2 = (undefined4 *)FUN_027e0134();
      if (puVar2 == (undefined4 *)0x0) {
        iVar3 = 0;
      }
      else {
        *puVar2 = 0x22;
        FUN_037fe788(param_1 + 0x10,puVar2 + 1,6);
        iVar3 = FUN_037fcc6c(&DAT_027f8328,puVar2,0);
      }
      if (iVar3 == 0) {
        puVar4 = (undefined2 *)FUN_03808074();
        *puVar4 = 0x80;
        puVar4[1] = 8;
        puVar4[2] = 0x16;
        puVar4[3] = 0x22;
        FUN_038080d0();
      }
    }
    else {
      uVar5 = OS_DisableInterrupts();
      *(ushort *)(iVar3 + 0x182) = *(ushort *)(iVar3 + 0x182) | (ushort)(1 << (uVar7 & 0xff));
      *(ushort *)(iVar3 + 0x86) = *(ushort *)(iVar3 + 0x86) & ~(ushort)(1 << (uVar7 & 0xff));
      uVar8 = OS_GetTick();
      iVar6 = iVar3 + uVar7 * 8;
      *(uint *)(iVar6 + 0x738) = (uint)uVar8 | 1;
      *(int *)(iVar6 + 0x73c) = (int)((ulonglong)uVar8 >> 0x20);
      FUN_037fe788(param_1 + 0x10,(uVar7 - 1) * 6 + iVar3 + 0x128);
      OS_RestoreInterrupts(uVar5);
      MIi_CpuClear16(1,iVar3 + 0x1f8 + uVar7 * 0x10,0x10);
      puVar4 = (undefined2 *)FUN_03808074();
      *puVar4 = 8;
      puVar4[1] = 0;
      puVar4[4] = 7;
      FUN_037fe788(param_1 + 0x10,puVar4 + 5,6);
      puVar4[8] = uVar1;
      MIi_CpuCopy16(param_1 + 0x22,puVar4 + 10,0x18);
      puVar4[0x16] = *(undefined2 *)(iVar3 + 0x30);
      puVar4[0x17] = *(undefined2 *)(iVar3 + 0x32);
      FUN_038080d0(puVar4);
    }
  }
  return;
}

