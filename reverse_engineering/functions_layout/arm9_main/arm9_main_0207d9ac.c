
void FUN_0207d9ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  short *psVar8;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined4 uStack_14;
  
  puVar6 = *(undefined4 **)(param_1 + 0x28);
  uStack_14 = param_4;
  do {
    if (puVar6 == (undefined4 *)0x0) {
      return;
    }
    iVar7 = puVar6[2];
    iVar4 = *(int *)(iVar7 + 0x5c);
    FUN_02051890(iVar4 + 0xc,&local_48,8);
    iVar1 = *(int *)(iVar7 + 0x70);
    if (iVar1 == 0) {
      FUN_020517fc(&local_24,0,0x10);
    }
    else {
      local_24 = *(int *)(iVar4 + 0x10) +
                 ((int)*(short *)(iVar1 + 2) - (int)*(short *)(iVar1 + 6)) * 0x100;
      local_20 = *(int *)(iVar4 + 0x10) +
                 ((int)*(short *)(*(int *)(iVar7 + 0x70) + 2) +
                 (int)*(short *)(*(int *)(iVar7 + 0x70) + 6)) * 0x100;
      local_1c = *(int *)(iVar4 + 0xc) - 0x400;
      local_18 = *(int *)(iVar4 + 0xc) + 0x400;
    }
    iVar1 = *(int *)(iVar7 + 0x74);
    if (iVar1 == 0) {
      FUN_020517fc(&local_34,0,0x10);
    }
    else {
      local_34 = *(int *)(iVar4 + 0x18) +
                 ((int)*(short *)(iVar1 + 2) - (int)*(short *)(iVar1 + 6)) * 0x100;
      local_30 = *(int *)(iVar4 + 0x18) +
                 ((int)*(short *)(*(int *)(iVar7 + 0x74) + 2) +
                 (int)*(short *)(*(int *)(iVar7 + 0x74) + 6)) * 0x100;
      local_2c = *(int *)(iVar4 + 0x14) - 0x400;
      local_28 = *(int *)(iVar4 + 0x14) + 0x400;
    }
    if ((local_20 & 0xffffff00) <= (local_24 & 0xffffff00)) {
      local_20 = *(uint *)(iVar4 + 0x10);
      local_24 = local_20 - 0x800;
    }
    if ((local_30 & 0xffffff00) <= (local_34 & 0xffffff00)) {
      local_30 = *(uint *)(iVar4 + 0x18);
      local_34 = local_30 - 0x800;
    }
    if ((local_18 & 0xffffff00) <= (local_1c & 0xffffff00)) {
      local_1c = *(int *)(iVar4 + 0xc) - 0x400;
      local_18 = *(int *)(iVar4 + 0xc) + 0x400;
    }
    if ((local_28 & 0xffffff00) <= (local_2c & 0xffffff00)) {
      local_2c = *(int *)(iVar4 + 0x14) - 0x400;
      local_28 = *(int *)(iVar4 + 0x14) + 0x400;
    }
    if ((int)local_24 < 0) {
      local_44 = *(int *)(iVar4 + 0x10) - local_24;
      *(uint *)(iVar7 + 0x78) = *(uint *)(iVar7 + 0x78) | 1;
      if (*(short *)(*(int *)(iVar7 + 0x5c) + 0x26) < 0) {
        *(undefined2 *)(*(int *)(iVar7 + 0x5c) + 0x26) = 0;
      }
    }
    if (0x20000 < (int)local_20) {
      local_44 = *(int *)(iVar4 + 0x10) - (local_20 - 0x20000);
      psVar8 = (short *)(iVar7 + 0x90);
      *(uint *)(iVar7 + 0x78) = *(uint *)(iVar7 + 0x78) | 2;
      puVar3 = (undefined2 *)(iVar7 + 0x98);
      puVar2 = (undefined1 *)(iVar7 + 0x9c);
      if (0 < *(short *)(*(int *)(iVar7 + 0x5c) + 0x26)) {
        *(undefined2 *)(*(int *)(iVar7 + 0x5c) + 0x26) = 0;
      }
      iVar1 = 0;
      while( true ) {
        if ((1 < iVar1) || (*psVar8 == 0)) goto LAB_0207dc20;
        if (*psVar8 < 0) break;
        iVar1 = iVar1 + 1;
        psVar8 = psVar8 + 1;
        puVar3 = puVar3 + 1;
        puVar2 = puVar2 + 1;
      }
      *psVar8 = 0;
      *puVar3 = 0xffff;
      *puVar2 = 1;
    }
LAB_0207dc20:
    if ((int)local_1c < 0x4000) {
      local_48 = *(int *)(iVar4 + 0xc) - (local_1c - 0x4000);
      *(uint *)(iVar7 + 0x78) = *(uint *)(iVar7 + 0x78) | 4;
      if (*(short *)(*(int *)(iVar7 + 0x5c) + 0x24) < 0) {
        *(undefined2 *)(*(int *)(iVar7 + 0x5c) + 0x24) = 0;
      }
    }
    if (0x3c000 < (int)local_18) {
      local_48 = *(int *)(iVar4 + 0xc) - (local_18 - 0x3c000);
      *(uint *)(iVar7 + 0x78) = *(uint *)(iVar7 + 0x78) | 8;
      if (0 < *(short *)(*(int *)(iVar7 + 0x5c) + 0x24)) {
        *(undefined2 *)(*(int *)(iVar7 + 0x5c) + 0x24) = 0;
      }
    }
    iVar1 = *(int *)(iVar7 + 0x5c);
    *(int *)(iVar1 + 0xc) = local_48;
    *(int *)(iVar1 + 0x10) = local_44;
    iVar1 = *(int *)(iVar7 + 0x5c);
    FUN_0201899c(&local_40);
    local_40 = *(int *)(iVar1 + 0xc) << 4;
    local_3c = *(int *)(iVar1 + 0x10) << 4;
    local_38 = 0;
    if (*(int *)(iVar1 + 8) != 0) {
      piVar5 = *(int **)(*(int *)(*(int *)(iVar1 + 8) + 4) + 0x50);
      piVar5[3] = local_40;
      piVar5[4] = local_3c;
      piVar5[5] = 0;
      if (*(byte *)(piVar5 + 9) != (*(byte *)(piVar5 + 9) | 1)) {
        (**(code **)(*piVar5 + 0x18))();
      }
      *(byte *)(piVar5 + 9) = *(byte *)(piVar5 + 9) | 0x31;
    }
    puVar6 = (undefined4 *)*puVar6;
  } while( true );
}

