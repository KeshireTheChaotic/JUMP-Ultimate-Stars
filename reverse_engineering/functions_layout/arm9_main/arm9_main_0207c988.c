
int FUN_0207c988(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,byte param_6)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  FUN_0201899c(&local_28);
  iVar7 = *(int *)(param_1 + 8);
  FUN_02037c24(param_1 + 8,iVar7);
  FUN_02037b98(param_1,iVar7);
  *(int *)(iVar7 + 0x30) = param_2;
  iVar11 = *(int *)(*(int *)(param_2 + 4) + 0x50);
  local_28 = *(int *)(iVar11 + 0xc);
  local_30 = local_28 >> 4;
  local_24 = *(int *)(iVar11 + 0x10);
  local_20 = *(undefined4 *)(iVar11 + 0x14);
  local_2c = local_24 >> 4;
  uVar3 = FUN_02082c34(*(undefined4 *)(param_1 + 0xf0),param_2,&local_30);
  *(undefined4 *)(iVar7 + 0x5c) = uVar3;
  iVar11 = BattleCol::Battle_ColObjCreate(*(undefined4 *)(param_1 + 0xec),param_2);
  *(int *)(iVar7 + 0x60) = iVar11;
  *(code **)(iVar11 + 0x1c) = FUN_0207d440;
  *(code **)(*(int *)(iVar7 + 0x60) + 0x20) = FUN_0207d858;
  uVar8 = param_5 | 0x20c000;
  *(code **)(*(int *)(iVar7 + 0x60) + 0x24) = FUN_0207d94c;
  *(int *)(*(int *)(iVar7 + 0x60) + 0x28) = iVar7;
  if ((param_3 & 0xfcffff) != 0) {
    uVar8 = param_5 | 0x23c000;
  }
  uVar4 = param_3 & 0xf;
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar4 << 4 | 0x400000;
  }
  *(uint *)(iVar7 + 0x34) = param_3;
  if (uVar4 != 0) {
    uVar8 = uVar8 | uVar5;
  }
  *(undefined4 *)(iVar7 + 0x38) = param_4;
  *(uint *)(iVar7 + 0x3c) = uVar8;
  FUN_020517fc(iVar7 + 0xa4,0,0xd0);
  iVar11 = 0;
  *(undefined1 *)(iVar7 + 0x182) = 0;
  *(undefined1 *)(iVar7 + 0x174) = 0;
  *(undefined2 *)(iVar7 + 0x186) = 0x100;
  *(undefined2 *)(iVar7 + 0x184) = 0x100;
  bVar1 = *(byte *)(iVar7 + 0x175);
  *(byte *)(iVar7 + 0x175) = bVar1 & 0xcf | 0x30;
  *(byte *)(iVar7 + 0x175) = bVar1 & 0xc0 | 0x3c | param_6 & 3;
  puVar6 = (undefined2 *)(iVar7 + 0x90);
  puVar9 = (undefined2 *)(iVar7 + 0x94);
  puVar10 = (undefined2 *)(iVar7 + 0x98);
  do {
    *puVar10 = 0xffff;
    uVar2 = *puVar10;
    iVar11 = iVar11 + 1;
    *puVar9 = uVar2;
    *puVar6 = uVar2;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar11 < 2);
  *(uint *)(iVar7 + 0x40) = *(uint *)(iVar7 + 0x40) & 0xfffffdff;
  *(code **)(iVar7 + 0x50) = FUN_0207d9a0;
  return iVar7;
}

