
void FUN_027e62cc(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  iVar2 = DAT_027f97f0;
  if (*(int *)(DAT_027f97f0 + 0xc) == 1) {
    FUN_027e6680(200,FUN_027e6414,1);
    if (*(int *)(iVar2 + 0x7bc) != 0 || *(int *)(iVar2 + 0x7b8) != 0) {
      uVar8 = FUN_037fd6ac();
      uVar5 = (uint)uVar8 | 1;
      uVar4 = *(uint *)(iVar2 + 0x738);
      if (*(int *)(iVar2 + 0x73c) != 0 || uVar4 != 0) {
        uVar6 = uVar5 - uVar4;
        uVar5 = (int)((ulonglong)uVar8 >> 0x20) - (*(int *)(iVar2 + 0x73c) + (uint)(uVar5 < uVar4));
        uVar4 = *(uint *)(iVar2 + 0x7bc);
        bVar7 = uVar4 <= uVar5;
        if (uVar5 == uVar4) {
          bVar7 = *(uint *)(iVar2 + 0x7b8) <= uVar6;
        }
        if (bVar7 && (uVar5 != uVar4 || uVar6 != *(uint *)(iVar2 + 0x7b8))) {
          *(undefined4 *)(iVar2 + 0x738) = 0;
          *(undefined4 *)(iVar2 + 0x73c) = 0;
          puVar1 = (undefined4 *)FUN_027e0134();
          if (puVar1 == (undefined4 *)0x0) {
            iVar2 = 0;
          }
          else {
            *puVar1 = 0x25;
            puVar1[1] = 0;
            puVar1[2] = 0x8001;
            iVar2 = FUN_037fcc6c(&DAT_027f8328);
          }
          if (iVar2 == 0) {
            puVar3 = (undefined2 *)FUN_03808074();
            *puVar3 = 0x80;
            puVar3[1] = 8;
            puVar3[2] = 0x16;
            puVar3[3] = 0x25;
            FUN_038080d0();
            return;
          }
          return;
        }
      }
    }
    FUN_027e6164();
  }
  return;
}

