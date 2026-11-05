
undefined4 FUN_0206359c(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_108;
  uint local_104;
  uint local_100;
  undefined1 auStack_f4 [4];
  uint local_f0;
  int local_e8;
  int local_e4;
  undefined1 auStack_e0 [128];
  undefined1 auStack_60 [8];
  undefined4 local_58;
  ushort local_3c;
  uint local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  
  puVar2 = *(uint **)(param_1 + 8);
  FUN_02064744(auStack_60);
  local_58 = *(undefined4 *)(param_1 + 8);
  if ((*(uint *)(param_1 + 0xc) & 0x20) == 0) {
    uVar5 = *(uint *)(param_1 + 0x20);
    if (*(short *)(param_1 + 0x38) == 0) {
      local_104 = 0;
      local_100 = 0;
      uVar6 = 0x10000;
      do {
        FUN_02063ad4(auStack_60,local_104);
        if (local_104 == 0) {
          local_100 = local_34;
        }
        local_30 = auStack_f4;
        local_2c = 1;
        iVar3 = FUN_020633d8(auStack_60,3);
        while (iVar3 == 0) {
          if ((local_e8 == 0) && (local_f0 == uVar5)) {
            uVar6 = (uint)local_3c;
            break;
          }
          iVar3 = FUN_020633d8(auStack_60,3);
        }
      } while ((uVar6 == 0x10000) && (local_104 = local_104 + 1, local_104 < local_100));
    }
    else {
      uVar6 = (uint)*(ushort *)(param_1 + 0x3a);
    }
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 0x24);
    uVar5 = 0x10000;
  }
  if (uVar6 == 0x10000) {
    *(undefined2 *)(param_1 + 0x38) = 0;
    return 1;
  }
  if (*(short *)(param_1 + 0x38) == 0) {
    if (*puVar2 < 0x100) {
      local_108 = 1;
    }
    else if (*puVar2 < 0xff01) {
      local_108 = 2;
    }
    else {
      local_108 = 3;
    }
    local_108 = local_108 + 2;
    if (uVar5 != 0x10000) {
      local_108 = local_108 + local_e4;
    }
    if (uVar6 != 0) {
      FUN_02063ad4(auStack_60,uVar6);
      uVar7 = uVar6;
      do {
        FUN_02063ad4(auStack_60,local_34);
        local_30 = auStack_f4;
        local_2c = 1;
        iVar3 = FUN_020633d8(auStack_60,3);
        while (iVar3 == 0) {
          if ((local_e8 != 0) && ((local_f0 & 0xffff) == uVar7)) {
            local_108 = local_108 + local_e4 + 1;
            break;
          }
          iVar3 = FUN_020633d8(auStack_60,3);
        }
        uVar7 = (uint)local_3c;
      } while (uVar7 != 0);
    }
    *(short *)(param_1 + 0x38) = (short)local_108 + 1;
    *(short *)(param_1 + 0x3a) = (short)uVar6;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    return 0;
  }
  uVar7 = (uint)*(ushort *)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x34) < uVar7) {
    return 1;
  }
  if (*puVar2 < 0x100) {
    iVar8 = 1;
  }
  else if (*puVar2 < 0xff01) {
    iVar8 = 2;
  }
  else {
    iVar8 = 3;
  }
  FUN_02051890(puVar2,iVar3,iVar8);
  FUN_02051890(&DAT_0209dd2c,iVar3 + iVar8,2);
  FUN_02063ad4(auStack_60,uVar6);
  if (uVar5 == 0x10000) {
    *(undefined1 *)(iVar3 + uVar7 + -1) = 0;
    iVar8 = uVar7 - 1;
  }
  else {
    local_30 = auStack_f4;
    local_2c = 0;
    iVar8 = FUN_020633d8(auStack_60,3);
    if (iVar8 == 0) {
      do {
        if ((local_e8 == 0) && (local_f0 == uVar5)) break;
        iVar8 = FUN_020633d8(auStack_60,3);
      } while (iVar8 == 0);
    }
    iVar8 = local_e4 + 1;
    FUN_02051890(auStack_e0,(iVar3 + uVar7) - iVar8,iVar8);
    iVar8 = uVar7 - iVar8;
  }
  if (uVar6 != 0) {
    do {
      FUN_02063ad4(auStack_60,local_34);
      local_30 = auStack_f4;
      local_2c = 0;
      *(undefined1 *)(iVar3 + iVar8 + -1) = 0x2f;
      iVar8 = iVar8 + -1;
      iVar4 = FUN_020633d8(auStack_60,3);
      iVar1 = local_e4;
      while (local_e4 = iVar1, iVar4 == 0) {
        if ((local_e8 != 0) && ((local_f0 & 0xffff) == uVar6)) {
          FUN_02051890(auStack_e0,(iVar3 + iVar8) - iVar1,iVar1);
          iVar8 = iVar8 - iVar1;
          break;
        }
        iVar4 = FUN_020633d8(auStack_60,3);
        iVar1 = local_e4;
      }
      uVar6 = (uint)local_3c;
    } while (uVar6 != 0);
  }
  return 0;
}

