
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021bf19c(undefined1 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_88;
  uint local_80;
  int local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 local_6c;
  int local_68;
  int local_64;
  uint local_60;
  undefined1 auStack_5c [36];
  int local_38;
  int local_30;
  
  local_88 = 0;
  if (0x163 < param_3) {
    bVar2 = false;
    local_78 = (undefined4 *)0x0;
    local_74 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)(param_2 + 0x160);
    local_80 = param_3 - 0x160;
    if (param_1 == (undefined1 *)0x0) {
      iVar3 = _DAT_027ffe80;
      if (_DAT_027ffe80 == 0) {
        iVar3 = 0x1000000;
      }
      bVar2 = true;
      FUN_02064744(auStack_5c);
      uVar4 = FUN_02063f94(&DAT_021d436c,3);
      FUN_020645a0(auStack_5c,uVar4,0,iVar3 + 0x88,0xffffffff);
      param_1 = auStack_5c;
      local_7c = local_30 - local_38;
      FUN_02051890(0x27ffe00,param_2,0x160);
      *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) | 0x406000;
    }
    else {
      local_7c = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24);
      iVar3 = FUN_02064430(param_1,param_2,0x160);
      if (iVar3 < 0x160) {
        local_80 = 0;
      }
      iVar3 = *(int *)(param_2 + 0x80);
      if (iVar3 == 0) {
        iVar3 = 0x1000000;
      }
    }
    if (local_80 < 0x88) {
      local_80 = 0;
    }
    else {
      FUN_020643f4(param_1,local_7c + iVar3,0);
      FUN_02064430(param_1,puVar6,0x88);
      puVar6 = (undefined4 *)(param_2 + 0x1e8);
      local_80 = local_80 - 0x88;
    }
    if (local_80 < 0x70) {
      local_80 = 0;
      puVar7 = puVar6;
    }
    else {
      FUN_021c1154(puVar6);
      local_80 = local_80 - 0x70;
      FUN_021c110c(puVar6,0,0x160,param_2,3);
      for (iVar3 = 0; (iVar3 < 3 && (*(char *)(*(int *)(param_1 + 8) + iVar3) != '\0'));
          iVar3 = iVar3 + 1) {
      }
      FUN_02051890(*(int *)(param_1 + 8),puVar6 + 4,iVar3);
      puVar6[5] = iVar3;
      puVar7 = puVar6 + 0x1c;
      local_78 = puVar6;
    }
    if (local_80 < 0x10) {
      local_80 = 0;
      puVar6 = puVar7;
    }
    else {
      *puVar7 = 0;
      puVar7[1] = *(int *)(param_2 + 0x20) + local_7c + *(int *)(param_1 + 0x24);
      puVar7[2] = *(int *)(param_2 + 0x30) + local_7c + *(int *)(param_1 + 0x24);
      local_80 = local_80 - 0x10;
      puVar6 = puVar7 + 4;
      local_74 = puVar7;
    }
    if (local_80 < (uint)(*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x3c))) {
      if (0xcbff < local_80) {
        iVar3 = *(int *)(param_1 + 0x24);
        iVar8 = local_74[1];
        FUN_020643f4(param_1,iVar8 - iVar3,0);
        FUN_02064430(param_1,puVar6,0x4400);
        FUN_021c110c(local_78,iVar8,0x4400,puVar6,3);
        FUN_020643f4(param_1,(iVar8 + 0x4400) - iVar3,0);
        FUN_02064430(param_1,puVar6 + 0x1100);
        FUN_021c110c(local_78,iVar8 + 0x4400,0x4400,puVar6 + 0x1100,2);
        FUN_020643f4(param_1,(iVar8 + 0x8800) - iVar3,0);
        FUN_02064430(param_1,puVar6 + 0x2200,0x4400);
        FUN_021c110c(local_78,iVar8 + 0x8800,0x4400,puVar6 + 0x2200,2);
        local_88 = 1;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x24);
      FUN_020643f4(param_1,local_74[1] - iVar3,0);
      FUN_02064430(param_1,puVar6,*(undefined4 *)(param_2 + 0x2c));
      FUN_021c110c(local_78,local_74[1],*(undefined4 *)(param_2 + 0x2c),puVar6,3);
      iVar8 = (int)puVar6 + *(int *)(param_2 + 0x2c);
      FUN_020643f4(param_1,local_74[2] - iVar3,0);
      FUN_02064430(param_1,iVar8,*(undefined4 *)(param_2 + 0x3c));
      FUN_021c110c(local_78,local_74[2],*(undefined4 *)(param_2 + 0x3c),iVar8,3);
      local_88 = 1;
    }
    FUN_020643f4(param_1,local_7c,0);
    if ((bVar2) && (FUN_020644ec(auStack_5c), piVar5 = DAT_021d4368, local_88 != 0)) {
      local_6c = *(undefined4 *)(param_2 + 0x20);
      local_68 = *(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x20);
      local_64 = local_78[0x12] - *(int *)(param_2 + 0x20);
      local_60 = param_3;
      FUN_021bf138(&local_6c,0x4000,0x8000,1);
      if (piVar5[1] != 0) {
        do {
          FUN_021bf138(&local_6c,*piVar5,*piVar5 + piVar5[1],0);
          piVar1 = piVar5 + 3;
          piVar5 = piVar5 + 2;
        } while (*piVar1 != 0);
      }
      *(undefined4 *)(local_78[0x12] + (0x2000a68 - *(int *)(param_2 + 0x28))) = 0xe12fff1e;
    }
    if (local_88 != 0) {
      DC_FlushRange(param_2,param_3);
    }
  }
  return local_88;
}

