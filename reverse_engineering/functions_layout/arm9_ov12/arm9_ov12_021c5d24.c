
int FUN_021c5d24(int param_1,uint param_2,uint *param_3,int param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_84;
  uint local_68 [21];
  
  if (param_5 != '\0') {
    iVar3 = param_2 * 4;
    iVar1 = param_1 + 0xc30;
    if ((*(uint *)(iVar1 + iVar3) & 0x8000000) != 0) {
      return 0;
    }
    *(uint *)(iVar1 + iVar3) = *(uint *)(iVar1 + iVar3) | 0x8000000;
    uVar4 = 0;
    iVar7 = 0;
    do {
      if (((uVar4 != param_2) && ((1 << (uVar4 & 0xff) & *(uint *)(param_1 + iVar3 + 0xc30)) == 0))
         && ((*(uint *)(param_1 + uVar4 * 4 + 0xc30) & 0x8000000) == 0)) {
        iVar7 = iVar7 + 1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x14);
    if (iVar7 == 0) {
      *(uint *)(iVar1 + iVar3) = *(uint *)(iVar1 + iVar3) & 0xfff00000;
    }
  }
  iVar3 = param_2 * 4;
  uVar4 = 0;
  iVar7 = param_1 + iVar3;
  iVar1 = 0;
  do {
    local_84 = iVar1;
    if ((((uVar4 != param_2) && ((*(uint *)(iVar7 + 0xc30) & 1 << (uVar4 & 0xff)) == 0)) &&
        (((*(uint *)(param_1 + uVar4 * 4 + 0xc30) & 0x8000000) == 0 &&
         ((uVar4 != *param_3 && (uVar4 != param_3[1])))))) && (uVar4 != param_3[2])) {
      local_84 = iVar1 + 1;
      local_68[iVar1 + 1] = uVar4;
    }
    uVar4 = uVar4 + 1;
    iVar1 = local_84;
  } while ((int)uVar4 < 0x14);
  for (iVar1 = 0; iVar1 < local_84; iVar1 = iVar1 + 1) {
    uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar2,local_84 - iVar1);
    local_68[0] = local_68[extraout_r1 + 1];
    local_68[extraout_r1 + 1] = local_68[local_84 - iVar1];
    local_68[local_84 - iVar1] = local_68[0];
  }
  if (local_84 < param_4) {
    iVar1 = 0;
    *(uint *)(param_1 + 0xc30 + iVar3) = *(uint *)(param_1 + 0xc30 + iVar3) & 0xfff00000;
  }
  else {
    iVar1 = 3 - param_4;
    local_84 = param_4;
  }
  for (iVar3 = 0; iVar3 < local_84; iVar3 = iVar3 + 1) {
    *(uint *)(iVar7 + 0xc30) = 1 << (local_68[iVar3 + 1] & 0xff) | *(uint *)(iVar7 + 0xc30);
    iVar5 = param_1 + local_68[iVar3 + 1] * 4;
    *(uint *)(iVar5 + 0xc30) = 1 << (param_2 & 0xff) | *(uint *)(iVar5 + 0xc30);
    for (iVar5 = 0; iVar5 < local_84; iVar5 = iVar5 + 1) {
      if (iVar3 != iVar5) {
        iVar6 = param_1 + local_68[iVar3 + 1] * 4;
        *(uint *)(iVar6 + 0xc30) = *(uint *)(iVar6 + 0xc30) | 1 << (local_68[iVar5 + 1] & 0xff);
      }
    }
    iVar5 = param_1 + local_68[iVar3 + 1] * 4;
    *(uint *)(iVar5 + 0xc30) = *(uint *)(iVar5 + 0xc30) | 0x8000000;
    param_3[iVar1 + iVar3] = local_68[iVar3 + 1];
  }
  return local_84;
}

