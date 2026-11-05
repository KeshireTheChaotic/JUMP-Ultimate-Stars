
undefined4 FUN_02152ea8(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [32];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(uint *)(param_1 + 0x110) < *(uint *)(param_1 + 0x114)) {
    return 0;
  }
  *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
  *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
  puVar6 = auStack_40;
  *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  puVar3 = (undefined1 *)(param_1 + 0x8c);
  *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  iVar5 = 0x10;
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  if (*(int *)(param_1 + 0x118) == *(int *)(param_1 + 0xcc)) {
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  if (*(int *)(param_1 + 0x11c) == *(int *)(param_1 + 0xcc)) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(int *)(param_1 + 0x120) == *(int *)(param_1 + 0xcc)) {
    *(undefined4 *)(param_1 + 0x120) = 0;
  }
  if (*(int *)(param_1 + 0x124) == *(int *)(param_1 + 0xcc)) {
    *(undefined4 *)(param_1 + 0x124) = 0;
  }
  uStack_98 = *(undefined4 *)(param_1 + 0x34);
  uStack_94 = *(undefined4 *)(param_1 + 0x38);
  uStack_90 = *(undefined4 *)(param_1 + 0x3c);
  uStack_8c = *(undefined4 *)(param_1 + 0x40);
  uStack_88 = *(undefined4 *)(param_1 + 0x44);
  uStack_84 = *(undefined4 *)(param_1 + 0x48);
  uStack_80 = *(undefined4 *)(param_1 + 0x4c);
  uStack_7c = *(undefined4 *)(param_1 + 0x50);
  uStack_78 = *(undefined4 *)(param_1 + 0x54);
  uStack_74 = *(undefined4 *)(param_1 + 0x58);
  uStack_70 = *(undefined4 *)(param_1 + 0x5c);
  uStack_6c = *(undefined4 *)(param_1 + 0x60);
  uStack_68 = *(undefined4 *)(param_1 + 100);
  uStack_64 = *(undefined4 *)(param_1 + 0x68);
  uStack_60 = *(undefined4 *)(param_1 + 0x6c);
  uStack_5c = *(undefined4 *)(param_1 + 0x70);
  uStack_58 = *(undefined4 *)(param_1 + 0x74);
  uStack_54 = *(undefined4 *)(param_1 + 0x78);
  uStack_50 = *(undefined4 *)(param_1 + 0x7c);
  uStack_4c = *(undefined4 *)(param_1 + 0x80);
  uStack_48 = *(undefined4 *)(param_1 + 0x84);
  uStack_44 = *(undefined4 *)(param_1 + 0x88);
  do {
    puVar4 = puVar3 + 1;
    uVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    uVar2 = *puVar4;
    iVar5 = iVar5 + -1;
    puVar4 = puVar6 + 1;
    *puVar6 = uVar1;
    puVar6 = puVar6 + 2;
    *puVar4 = uVar2;
  } while (iVar5 != 0);
  uStack_20 = *(undefined4 *)(param_1 + 0xac);
  uStack_1c = *(undefined4 *)(param_1 + 0xb0);
  iVar5 = FUN_01ff92a0(&uStack_98);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar5;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  return 1;
}

