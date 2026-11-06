
void FUN_027e5d20(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_210 [516];
  
  iVar3 = DAT_027f97f0;
  uVar1 = *(uint *)(param_1 + 0x10) & 0xffff;
  iVar4 = FUN_027e2470(auStack_210,*(uint *)(param_1 + 4) & 0xffff,*(uint *)(param_1 + 8) & 0xffff,
                       *(uint *)(param_1 + 0xc) & 0xffff);
  if (*(short *)(iVar4 + 4) == 0) {
    if (uVar1 == 0xffff) {
      *(undefined4 *)(iVar3 + 0x7b8) = 0;
      *(undefined4 *)(iVar3 + 0x7bc) = 0;
    }
    else {
      if (uVar1 == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (ulonglong)(uVar1 * 100) * 0x82ea >> 6;
      }
      *(ulonglong *)(iVar3 + 0x7b8) = uVar2;
    }
    uVar7 = OS_GetTick();
    iVar4 = 0;
    do {
      iVar5 = iVar3 + iVar4 * 8;
      *(uint *)(iVar5 + 0x738) = (uint)uVar7 | 1;
      *(int *)(iVar5 + 0x73c) = (int)((ulonglong)uVar7 >> 0x20);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x10);
    puVar6 = (undefined2 *)FUN_03808074();
    *puVar6 = 0x1d;
    puVar6[1] = 0;
    FUN_038080d0();
  }
  else {
    FUN_027e5ce4(0x211);
  }
  return;
}

