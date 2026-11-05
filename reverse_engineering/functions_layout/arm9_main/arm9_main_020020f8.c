
undefined4 FUN_020020f8(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_24;
  uint local_18;
  
  iVar2 = FUN_02005f20(param_4,0);
  if (iVar2 == 0) {
    FUN_02005f20(param_4,0xffffffff);
  }
  uVar5 = param_2 * param_3;
  if (((uVar5 == 0) || (*(char *)(param_4 + 0xd) != '\0')) ||
     (uVar4 = *(uint *)(param_4 + 4), (uVar4 & 0x3ff) >> 7 == 0)) {
    return 0;
  }
  bVar1 = true;
  if ((((int)(uVar4 << 0x13) < 0) && (uVar4 = (uVar4 & 0x7f) >> 5, uVar4 != 2)) && (uVar4 != 1)) {
    bVar1 = false;
  }
  if (((*(uint *)(param_4 + 8) & 7) == 0) && (((*(uint *)(param_4 + 4) & 0x1f) >> 2 & 2) != 0)) {
    *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) & 0xfffffff8 | 1;
    FUN_02002090(param_4);
  }
  if ((*(uint *)(param_4 + 8) & 7) != 1) {
    *(undefined1 *)(param_4 + 0xd) = 1;
    *(undefined4 *)(param_4 + 0x28) = 0;
    return 0;
  }
  local_24 = 0;
  if (uVar5 != 0) {
    if ((*(int *)(param_4 + 0x24) != *(int *)(param_4 + 0x1c)) || (bVar1)) {
      *(int *)(param_4 + 0x28) =
           *(int *)(param_4 + 0x20) - (*(int *)(param_4 + 0x24) - *(int *)(param_4 + 0x1c));
      while( true ) {
        iVar2 = 0;
        local_18 = *(uint *)(param_4 + 0x28);
        if (uVar5 < *(uint *)(param_4 + 0x28)) {
          local_18 = uVar5;
        }
        if ((((*(uint *)(param_4 + 4) & 0x7f) >> 5 == 1) && (local_18 != 0)) &&
           (iVar2 = FUN_020024b0(param_1,10), iVar2 != 0)) {
          local_18 = (iVar2 + 1) - param_1;
        }
        if (local_18 != 0) {
          FUN_02002434(*(undefined4 *)(param_4 + 0x24),param_1);
          param_1 = param_1 + local_18;
          uVar5 = uVar5 - local_18;
          *(int *)(param_4 + 0x24) = *(int *)(param_4 + 0x24) + local_18;
          *(int *)(param_4 + 0x28) = *(int *)(param_4 + 0x28) - local_18;
        }
        if ((((*(int *)(param_4 + 0x28) == 0) || (iVar2 != 0)) ||
            ((*(uint *)(param_4 + 4) & 0x7f) >> 5 == 0)) &&
           (iVar2 = FUN_020020a8(param_4,0), iVar2 != 0)) break;
        local_24 = local_24 + local_18;
        if ((uVar5 == 0) || (!bVar1)) goto LAB_02002248;
      }
      *(undefined1 *)(param_4 + 0xd) = 1;
      uVar5 = 0;
      *(undefined4 *)(param_4 + 0x28) = 0;
    }
  }
LAB_02002248:
  if ((uVar5 != 0) && (!bVar1)) {
    uVar3 = *(undefined4 *)(param_4 + 0x1c);
    uVar6 = *(undefined4 *)(param_4 + 0x20);
    *(int *)(param_4 + 0x1c) = param_1;
    *(uint *)(param_4 + 0x20) = uVar5;
    *(uint *)(param_4 + 0x24) = param_1 + uVar5;
    iVar2 = FUN_020020a8(param_4,&local_18);
    if (iVar2 == 0) {
      local_24 = local_24 + local_18;
    }
    else {
      *(undefined1 *)(param_4 + 0xd) = 1;
      *(undefined4 *)(param_4 + 0x28) = 0;
    }
    *(undefined4 *)(param_4 + 0x1c) = uVar3;
    *(undefined4 *)(param_4 + 0x20) = uVar6;
    FUN_02002090(param_4);
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  if ((*(uint *)(param_4 + 4) & 0x7f) >> 5 != 2) {
    *(undefined4 *)(param_4 + 0x28) = 0;
  }
  uVar3 = FUN_0200d338(local_24,param_2);
  return uVar3;
}

