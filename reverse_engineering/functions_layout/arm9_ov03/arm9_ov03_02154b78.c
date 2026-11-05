
void FUN_02154b78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(iVar5 + 0x10);
  uStack_1c = param_4;
  switch(*(undefined1 *)(iVar6 + 0x58b)) {
  case 0:
    break;
  case 1:
    if (*(int *)(iVar5 + 0x124) == 0) {
      iVar3 = -0x9f;
      *(short *)(iVar6 + 0x588) = *(short *)(iVar6 + 0x588) + 1;
      iVar5 = FUN_0203b3f4();
      uVar2 = 0;
      iVar7 = *(int *)(iVar6 + 0x56c) + -0xa0;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      uVar4 = *(undefined4 *)(iVar5 + 0x88);
      if (iVar7 < 0xa1) {
        iVar5 = 0;
        *(undefined4 *)(iVar6 + 0x57c) = 0;
        while ((iVar5 < 8 && (iVar5 * 0x20 < iVar7))) {
          iVar5 = iVar5 + 1;
          *(uint *)(iVar6 + 0x57c) = *(uint *)(iVar6 + 0x57c) | 1 << (8U - iVar5 & 0xff);
        }
      }
      else {
        *(undefined4 *)(iVar6 + 0x57c) = 0xff;
        iVar7 = 0xa0;
      }
    }
    else {
      iVar3 = 0x21;
      *(int *)(iVar6 + 0x56c) = *(int *)(iVar6 + 0x56c) + 6;
      iVar5 = FUN_0203b3e4();
      uVar4 = *(undefined4 *)(iVar5 + 0x88);
      iVar7 = *(int *)(iVar6 + 0x56c) + 0x20;
      uVar2 = 0x20;
      if (0xc0 < iVar7) {
        iVar7 = 0xc0;
      }
    }
    FUN_0214ee3c(auStack_24,0xd,uVar2,0xf3,iVar7);
    FUN_02152e64(uVar4,0,auStack_24);
    iVar5 = (iVar3 + *(int *)(iVar6 + 0x56c)) * 0x1000;
    local_28 = iVar5;
    FUN_021550c4(param_1,&local_28);
    if (*(int *)(iVar6 + *(int *)(*(int *)(param_1 + 4) + 0x124) * 4 + 0x18c) != 0) {
      local_2c = iVar5;
      FUN_021550c4(*(undefined4 *)(iVar6 + *(int *)(*(int *)(param_1 + 4) + 0x124) * 4 + 0x18c),
                   &local_2c);
    }
    if ((*(int *)(*(int *)(param_1 + 4) + 0x124) == 0) && (*(int *)(iVar6 + 0x194) != 0)) {
      local_30 = iVar5;
      FUN_021550c4(*(undefined4 *)(iVar6 + 0x194),&local_30);
    }
    if (0x50 < *(ushort *)(iVar6 + 0x588)) {
      *(undefined2 *)(iVar6 + 0x588) = 0;
      *(char *)(iVar6 + 0x58b) = *(char *)(iVar6 + 0x58b) + '\x01';
    }
    break;
  case 2:
    uVar1 = *(ushort *)(iVar6 + 0x588);
    iVar3 = 2;
    uVar2 = FUN_0200d12c(uVar1,0x14);
    switch(uVar2) {
    case 0:
      iVar3 = 4;
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      goto LAB_02154d78;
    case 4:
LAB_02154d78:
      iVar3 = 1;
      break;
    case 5:
      if ((uVar1 & 1) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
    }
    if (*(int *)(iVar5 + 0x124) == 0) {
      iVar5 = -0x9f;
      *(short *)(iVar6 + 0x588) = *(short *)(iVar6 + 0x588) + 1;
    }
    else {
      iVar5 = 0x21;
      *(int *)(iVar6 + 0x56c) = *(int *)(iVar6 + 0x56c) + iVar3;
    }
    iVar5 = (iVar5 + *(int *)(iVar6 + 0x56c)) * 0x1000;
    local_34 = iVar5;
    FUN_021550c4(param_1,&local_34);
    if (*(int *)(iVar6 + *(int *)(*(int *)(param_1 + 4) + 0x124) * 4 + 0x18c) != 0) {
      local_38 = iVar5;
      FUN_021550c4(*(undefined4 *)(iVar6 + *(int *)(*(int *)(param_1 + 4) + 0x124) * 4 + 0x18c),
                   &local_38);
    }
    if ((*(int *)(*(int *)(param_1 + 4) + 0x124) == 0) && (*(int *)(iVar6 + 0x194) != 0)) {
      local_3c = iVar5;
      FUN_021550c4(*(undefined4 *)(iVar6 + 0x194),&local_3c);
    }
    if ((0x50 < *(ushort *)(iVar6 + 0x588)) || (0x27f < *(uint *)(iVar6 + 0x56c))) {
      *(undefined2 *)(iVar6 + 0x588) = 0;
      if (*(uint *)(iVar6 + 0x56c) < 0x280) {
        *(char *)(iVar6 + 0x58b) = *(char *)(iVar6 + 0x58b) + '\x01';
      }
      else {
        *(undefined1 *)(iVar6 + 0x58b) = 4;
      }
    }
    break;
  case 3:
    if (*(int *)(iVar5 + 0x124) == 0) {
      iVar5 = -0x9f;
      *(short *)(iVar6 + 0x588) = *(short *)(iVar6 + 0x588) + 1;
    }
    else {
      iVar5 = 0x21;
      if ((*(ushort *)(iVar6 + 0x588) & 1) == 0) {
        *(int *)(iVar6 + 0x56c) = *(int *)(iVar6 + 0x56c) + 1;
      }
    }
    iVar5 = (iVar5 + *(int *)(iVar6 + 0x56c)) * 0x1000;
    local_40 = iVar5;
    FUN_021550c4(param_1,&local_40);
    if (*(int *)(iVar6 + *(int *)(*(int *)(param_1 + 4) + 0x124) * 4 + 0x18c) != 0) {
      local_44 = iVar5;
      FUN_021550c4(*(undefined4 *)(iVar6 + *(int *)(*(int *)(param_1 + 4) + 0x124) * 4 + 0x18c),
                   &local_44);
    }
    if ((*(int *)(*(int *)(param_1 + 4) + 0x124) == 0) && (*(int *)(iVar6 + 0x194) != 0)) {
      local_48 = iVar5;
      FUN_021550c4(*(undefined4 *)(iVar6 + 0x194),&local_48);
    }
    if (0x27f < *(uint *)(iVar6 + 0x56c)) {
      *(undefined2 *)(iVar6 + 0x588) = 0;
      *(char *)(iVar6 + 0x58b) = *(char *)(iVar6 + 0x58b) + '\x01';
    }
    break;
  case 4:
    if (*(int *)(iVar5 + 0x124) != 0) {
      *(short *)(iVar6 + 0x588) = *(short *)(iVar6 + 0x588) + 1;
    }
    if (0x27 < *(ushort *)(iVar6 + 0x588)) {
      *(undefined2 *)(iVar6 + 0x588) = 0;
      *(char *)(iVar6 + 0x58b) = *(char *)(iVar6 + 0x58b) + '\x01';
    }
    break;
  case 5:
    if ((*(int *)(iVar6 + 0x580) < 0) || (7 < *(int *)(iVar6 + 0x580))) {
      if (*(short *)(iVar6 + 0x588) == 0) {
        *(undefined4 *)(iVar6 + 0x570) = *(undefined4 *)(iVar6 + 0x56c);
      }
      if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 0) {
        iVar5 = -0x9f;
        *(short *)(iVar6 + 0x588) = *(short *)(iVar6 + 0x588) + 1;
        if (0x5a < *(ushort *)(iVar6 + 0x588)) {
          *(char *)(iVar6 + 0x58b) = *(char *)(iVar6 + 0x58b) + '\x01';
        }
      }
      else {
        iVar5 = 0x21;
        iVar3 = *(int *)(iVar6 + 0x580) + -5;
        if (10 < iVar3) {
          iVar3 = 10;
        }
        iVar3 = FUN_0200d12c((uint)*(ushort *)(iVar6 + 0x588) * iVar3 * 0x20,0x5a);
        *(int *)(iVar6 + 0x56c) = *(int *)(iVar6 + 0x570) - iVar3;
      }
      iVar5 = (iVar5 + *(int *)(iVar6 + 0x56c)) * 0x1000;
      local_4c = iVar5;
      FUN_021550c4(param_1,&local_4c);
      if (*(int *)(iVar6 + *(int *)(*(int *)(param_1 + 4) + 0x124) * 4 + 0x18c) != 0) {
        local_50 = iVar5;
        FUN_021550c4(*(undefined4 *)(iVar6 + *(int *)(*(int *)(param_1 + 4) + 0x124) * 4 + 0x18c),
                     &local_50);
      }
      if ((*(int *)(*(int *)(param_1 + 4) + 0x124) == 0) && (*(int *)(iVar6 + 0x194) != 0)) {
        local_54 = iVar5;
        FUN_021550c4(*(undefined4 *)(iVar6 + 0x194),&local_54);
      }
    }
    else {
      *(undefined1 *)(iVar6 + 0x58b) = 6;
    }
    break;
  case 6:
  }
  return;
}

