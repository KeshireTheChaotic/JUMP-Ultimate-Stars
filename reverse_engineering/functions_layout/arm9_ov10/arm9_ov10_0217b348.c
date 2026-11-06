
undefined4 FUN_0217b348(uint param_1,int param_2,int param_3,uint param_4,int *param_5,int param_6)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  int local_134;
  uint local_130;
  int iStack_124;
  undefined1 auStack_120 [2];
  ushort uStack_11e;
  int iStack_11c;
  uint local_118 [65];
  
  iVar8 = 0;
  iVar2 = FUN_02178448();
  if ((iVar2 == 0) || (iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x198) == 0)) {
    return 1;
  }
  iVar2 = FUN_02176640();
  if (((iVar2 == 5) && (iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x198) == 1)) &&
     (iVar2 = FUN_02178448(), param_2 == *(int *)(iVar2 + 0xf4))) {
    FUN_021794b4();
  }
  if (0x40 < (int)param_1) {
    FUN_0217be9e(param_1);
override_jmp_0217b3b8_case_1:
    iVar2 = FUN_02178448();
    local_134 = param_3;
    local_130 = param_4;
    if (*(char *)(iVar2 + 0x15) != '\0') {
      local_134 = param_5[1];
      local_130 = param_5[2] & 0xffff;
    }
    iVar2 = FUN_0217b128(param_2,local_134,local_130,*param_5,param_1 == 0xb);
    if (iVar2 == 2) {
      iVar8 = FUN_02178448();
      *(undefined4 *)(iVar8 + 0x1d4) = 0;
      FUN_0217afd0(param_2,local_134,local_130);
      iVar8 = FUN_0217af70();
      if (iVar8 != 0) {
        return 0;
      }
      iVar8 = FUN_02178448();
      if ((*(char *)(iVar8 + 0x15) == '\x02') &&
         (iVar8 = FUN_02178448(), *(int *)(iVar8 + 0x464) != 0)) {
        iVar8 = FUN_02178448();
        uVar4 = FUN_02177f3c(param_2);
        iVar5 = FUN_02178448();
        (**(code **)(iVar8 + 0x464))(uVar4,*(undefined4 *)(iVar5 + 0x468));
      }
      iVar8 = FUN_02178448();
      local_118[0] = (uint)*(byte *)(iVar8 + 0x14);
      iVar5 = 1;
      iVar8 = FUN_02178448();
      if (*(char *)(iVar8 + 0x14) != '\0') {
        iVar8 = 4;
        puVar7 = local_118;
        do {
          puVar7 = puVar7 + 1;
          iVar6 = FUN_02178448();
          *puVar7 = *(uint *)(iVar6 + iVar8 + 0xf4);
          iVar8 = iVar8 + 4;
          iVar5 = iVar5 + 1;
          iVar6 = FUN_02178448();
        } while (iVar5 <= (int)(uint)*(byte *)(iVar6 + 0x14));
      }
      iVar8 = FUN_02178448();
      local_118[iVar5] = *(uint *)(iVar8 + 0x1c);
      iVar6 = FUN_02178448();
      iVar8 = iVar5 + 2;
      local_118[iVar5 + 1] = (uint)*(ushort *)(iVar6 + 0x1a);
      FUN_02178434(0xb);
    }
    else if ((iVar2 == 3) && (iVar5 = FUN_02178448(), *(char *)(iVar5 + 0x16) != '\0')) {
      iVar5 = FUN_02178448();
      iVar6 = FUN_02178448();
      if ((*(char *)(iVar5 + 0x14) == *(char *)(iVar6 + 0x16)) &&
         (iVar5 = FUN_02178448(), *(char *)(iVar5 + 0x15) == '\x02')) {
        local_118[0] = 0x10;
        iVar8 = 1;
      }
    }
    if (iVar2 == 0xff) {
      FUN_0217be9e();
    }
    FUN_0217c024(iVar2,param_2,local_134,local_130,local_118,iVar8);
    iVar2 = FUN_0217af70();
    if (iVar2 == 0) {
      FUN_0217be9e();
    }
    return 0;
  }
  uVar3 = param_1;
  if (0x3f < (int)param_1) {
    uVar3 = FUN_0217be54();
  }
  if (0x20 < uVar3) {
    uVar3 = FUN_0217be9e();
  }
  pcVar1 = DAT_021a75a8;
                    /* WARNING: Switch is manually overridden */
  switch(uVar3) {
  case 1:
  case 0xb:
    goto override_jmp_0217b3b8_case_1;
  case 2:
    iVar2 = FUN_02178448();
    if (*(int *)(iVar2 + 0x198) != 4) {
      FUN_0217be9e();
    }
    iVar2 = FUN_02178448();
    if (param_2 != *(int *)(iVar2 + 0x1fc)) {
      FUN_0217be9e();
    }
    iVar2 = FUN_02178448();
    *(undefined4 *)(iVar2 + 0x200) = 0;
    iVar2 = FUN_02178448();
    *(undefined1 *)(iVar2 + 0x19f) = 0;
    iVar2 = FUN_02178448();
    *(undefined4 *)(iVar2 + 0x1c0) = 0;
    iVar2 = FUN_02178448();
    *(undefined4 *)(iVar2 + 0x1b4) = 0;
    iVar2 = FUN_02178448();
    *(int *)(iVar2 + 0x24) = param_5[*param_5 + 1];
    iVar2 = FUN_02178448();
    *(short *)(iVar2 + 0xa4) = (short)param_5[*param_5 + 2];
    iVar2 = FUN_02178448();
    *(int *)(iVar2 + 0x1b0) = param_5[*param_5 + 1];
    iVar2 = FUN_02178448();
    *(short *)(iVar2 + 0x1ac) = (short)param_5[*param_5 + 2];
    iVar2 = FUN_02178448();
    if (*(char *)(iVar2 + 0x15) == '\x01') {
      iVar2 = FUN_0217a2b0(param_5 + 1,*param_5);
      if (iVar2 == 0) {
        FUN_0217aad4(param_2);
        iVar2 = FUN_0217af70();
        if (iVar2 != 0) {
          return 0;
        }
        FUN_0217abc4(0,0,param_2);
        iVar2 = FUN_0217af70();
        if (iVar2 == 0) {
          FUN_0217be9e();
        }
        return 0;
      }
      iVar2 = FUN_02178448();
      if (*(char *)(iVar2 + 0xd) != '\0') {
        FUN_0217af90(param_2,param_5);
      }
    }
    iVar2 = FUN_02178448();
    if (*(char *)(iVar2 + 0x15) != '\0') {
      FUN_02178434(5);
      FUN_0217c498(param_2);
      iVar2 = FUN_021790e4();
      if (iVar2 == 0) {
        FUN_0217be9e();
      }
      return 0;
    }
    iVar2 = FUN_02178448();
    if (*(char *)(iVar2 + 0xd) != '\0') {
      FUN_0217af90(param_2,param_5);
      FUN_0217a7f8();
      iVar2 = FUN_0217af70();
      if (iVar2 != 0) {
        return 0;
      }
    }
    FUN_02178434(6);
    iVar2 = FUN_02178448();
    uVar4 = FUN_0217fc04(*(undefined4 *)(iVar2 + 0xe4),0);
    FUN_0217c1f4(0,0,uVar4);
    iVar2 = FUN_02179000();
    if (iVar2 == 0) {
      FUN_0217be9e();
    }
    return 0;
  case 3:
    iVar2 = FUN_02178448();
    if ((*(int *)(iVar2 + 0x198) == 4) &&
       (iVar2 = FUN_02178448(), param_2 == *(int *)(iVar2 + 0x1fc))) {
      if ((param_6 < 1) || (*param_5 != 0x10)) {
        iVar2 = FUN_02178448();
        uVar4 = FUN_0217ab10(*(undefined4 *)(iVar2 + 0x1fc));
        return uVar4;
      }
      FUN_0217d118(0xd,0);
      return 0;
    }
    break;
  case 4:
    iVar2 = FUN_02178448();
    if ((*(int *)(iVar2 + 0x198) == 4) &&
       (iVar2 = FUN_02178448(), param_2 == *(int *)(iVar2 + 0x1fc))) {
      iVar2 = FUN_02178448();
      uVar10 = OS_GetTick();
      *(undefined8 *)(iVar2 + 0x1c4) = uVar10;
      iVar2 = FUN_02178448();
      if (((*(int *)(iVar2 + 0x200) == 0) ||
          (iVar2 = FUN_02178448(), 0xf < *(byte *)(iVar2 + 0x19f))) &&
         (iVar2 = FUN_02178448(), *(char *)(iVar2 + 0x15) != '\x03')) {
        iVar2 = FUN_02178448();
        *(undefined4 *)(iVar2 + 0x200) = 0;
        iVar2 = FUN_02178448();
        *(undefined1 *)(iVar2 + 0x19f) = 0;
        iVar2 = FUN_02178448();
        if (*(char *)(iVar2 + 0x15) == '\0') {
          FUN_02178434(3);
          iVar2 = FUN_02178448();
          *(undefined4 *)(iVar2 + 0xe8) = 1;
          iVar2 = FUN_02178448();
          uVar10 = OS_GetTick();
          *(undefined8 *)(iVar2 + 0xec) = uVar10;
        }
        else {
          iVar2 = FUN_02178448();
          if (*(char *)(iVar2 + 0x15) == '\x01') {
            FUN_0217abc4(1,0,0);
          }
        }
      }
      else {
        iVar2 = FUN_02178448();
        *(undefined4 *)(iVar2 + 0x1b4) = 1;
        iVar2 = FUN_02178448();
        uVar10 = OS_GetTick();
        *(undefined8 *)(iVar2 + 0x1b8) = uVar10;
        iVar2 = FUN_02178448();
        if (*(char *)(iVar2 + 0x15) != '\x03') {
          iVar2 = FUN_02178448();
          *(char *)(iVar2 + 0x19fU) = *(char *)(iVar2 + 0x19fU) + '\x01';
        }
      }
    }
    break;
  case 5:
    iVar2 = FUN_02178448();
    if ((*(char *)(iVar2 + 0x17) != '\0') &&
       (iVar2 = FUN_02178448(), param_2 == *(int *)(iVar2 + 0x20))) {
      iVar2 = FUN_02178448();
      if ((*(char *)(iVar2 + 0x15) == '\x02') &&
         ((iVar2 = FUN_02178448(), *(char *)(iVar2 + 0xd) == '\x01' &&
          (iVar2 = FUN_02178448(), param_2 == *(int *)(iVar2 + 0xf8))))) {
        iVar2 = FUN_02178448();
        FUN_0218a888(**(undefined4 **)(iVar2 + 4));
      }
      iVar2 = FUN_0217a93c(param_2);
      if (iVar2 == 0) {
        return 0;
      }
    }
    break;
  case 6:
    iVar8 = *param_5;
    uVar3 = param_5[1];
    iVar2 = FUN_02178448();
    if (*(int *)(iVar2 + 0x198) == 1) {
      FUN_02178434(6);
    }
    else {
      iVar2 = FUN_02178448();
      if ((*(int *)(iVar2 + 0x198) != 6) && (iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x198) != 0xb)
         ) {
        return 1;
      }
      iVar2 = FUN_02178448();
      if (param_2 != *(int *)(iVar2 + 0x20)) {
        return 1;
      }
    }
    iVar2 = FUN_02178448();
    *(undefined1 *)(iVar2 + 0x3c4) = 0xff;
    iVar2 = FUN_02178448();
    iVar5 = FUN_02178448();
    if (param_2 != *(int *)(iVar2 + (*(byte *)(iVar5 + 0xd) + 1) * 4 + 0xf4)) {
      iVar2 = FUN_02178448();
      iVar5 = FUN_02178448();
      *(int *)(iVar2 + (*(byte *)(iVar5 + 0xd) + 1) * 4 + 0xf4) = param_2;
    }
    uStack_11e = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff) << 8);
    iStack_11c = iVar8;
    iVar2 = FUN_02178448();
    *(undefined1 *)(iVar2 + 0x18c) = 1;
    iVar2 = FUN_02178448();
    uVar4 = FUN_0218a858(**(undefined4 **)(iVar2 + 4));
    iVar2 = FUN_02178448();
    FUN_021784b8(0,uVar4,auStack_120,iVar2 + 0x18c);
    iVar2 = FUN_02178448();
    *(undefined4 *)(iVar2 + 0x184) = 0;
    *(undefined4 *)(iVar2 + 0x188) = 0;
    break;
  case 7:
    iVar2 = FUN_02178448();
    if ((*(int *)(iVar2 + 0x198) == 1) &&
       (iVar2 = FUN_02178448(), param_2 == *(int *)(iVar2 + 0xf4))) {
      iStack_124 = *param_5;
      iVar2 = param_5[1];
      iVar8 = FUN_02178448();
      if ((*(char *)(iVar8 + 0x15) == '\x01') &&
         (iVar8 = FUN_02178448(), *(char *)(iVar8 + 0x19e) == '\0')) {
        local_118[0] = FUN_0217961c(iStack_124);
        FUN_0217c024(0x20,param_2,param_3,param_4,local_118,1);
        iVar8 = FUN_0217af70();
        if (iVar8 != 0) {
          return 0;
        }
      }
      iVar8 = FUN_02178448();
      iVar5 = FUN_02178448();
      *(int *)(iVar8 + (*(byte *)(iVar5 + 0x14) + 1) * 4 + 0xf4) = iStack_124;
      iVar8 = FUN_02178448();
      iVar5 = FUN_02178448();
      *(char *)(iVar8 + (uint)*(byte *)(iVar5 + 0x14) + 0x2c9) = (char)iVar2;
      iVar2 = FUN_02178448();
      FUN_0218dbe8(*(undefined4 *)(iVar2 + 0x10));
      iVar2 = FUN_02178448();
      if (*(int *)(iVar2 + 0x464) != 0) {
        iVar2 = FUN_02178448();
        uVar4 = FUN_02177f3c(iStack_124);
        iVar8 = FUN_02178448();
        (**(code **)(iVar2 + 0x464))(uVar4,*(undefined4 *)(iVar8 + 0x468));
      }
    }
    break;
  case 8:
    iVar2 = FUN_02178448();
    if ((*(int *)(iVar2 + 0x198) == 1) &&
       (iVar2 = FUN_02178448(), param_2 == *(int *)(iVar2 + 0xf4))) {
      iStack_124 = *param_5;
      if (iStack_124 == 0) {
        iVar5 = param_5[1];
        iVar8 = param_5[2];
        iVar2 = FUN_02178448();
        *(char *)(iVar5 + iVar2 + 0x2c8) = (char)iVar8;
        iVar2 = FUN_02178448();
        iVar8 = FUN_02178448();
        *(undefined4 *)(iVar2 + iVar5 * 4 + 0xf4) = *(undefined4 *)(iVar8 + 0x1f8);
        FUN_0217a320(3);
      }
      else {
        iVar5 = param_5[1];
        iVar2 = param_5[2];
        iVar6 = iVar5 * 4;
        iVar8 = FUN_02178448();
        if ((iStack_124 == *(int *)(iVar8 + iVar6 + 0xf4)) &&
           (iVar8 = FUN_02178448(), iVar5 == *(byte *)(iVar8 + 0xd) - 1)) {
          iVar2 = FUN_02178448();
          iVar8 = FUN_02178448();
          FUN_0217c024(9,param_2,*(undefined4 *)(iVar2 + 0x24),*(undefined2 *)(iVar8 + 0xa4),
                       &iStack_124,1);
          iVar2 = FUN_0217af70();
          if (iVar2 != 0) {
            return 0;
          }
        }
        else {
          iVar8 = FUN_02178448();
          *(int *)(iVar8 + iVar6 + 0xf4) = iStack_124;
          iVar8 = FUN_02178448();
          *(char *)(iVar5 + iVar8 + 0x2c8) = (char)iVar2;
          iVar2 = FUN_02178448();
          *(int *)(iVar2 + iVar6 + 0x24) = param_5[3];
          iVar2 = FUN_02178448();
          *(short *)(iVar2 + iVar5 * 2 + 0xa4) = (short)param_5[4];
          iVar2 = FUN_02178448();
          *(int *)(iVar2 + 0x1b0) = param_5[3];
          iVar2 = FUN_02178448();
          *(short *)(iVar2 + 0x1ac) = (short)param_5[4];
          FUN_02178434(5);
          FUN_0217c498(iStack_124);
          iVar2 = FUN_021790e4();
          if (iVar2 != 0) {
            return 0;
          }
          iVar2 = FUN_02178448();
          *(undefined4 *)(iVar2 + 0x1c0) = 0;
          iVar2 = FUN_02178448();
          *(undefined4 *)(iVar2 + 0x1b4) = 0;
        }
      }
    }
    break;
  case 9:
    iVar2 = FUN_02178448();
    if (*(int *)(iVar2 + 0x198) == 0xd) {
      iVar2 = FUN_02178448();
      iVar8 = FUN_02178448();
      if (*param_5 == *(int *)(iVar2 + (*(byte *)(iVar8 + 0x19c) + 1) * 4 + 0xf4)) {
        iVar2 = FUN_02178448();
        *(char *)(iVar2 + 0x19cU) = *(char *)(iVar2 + 0x19cU) + '\x01';
        FUN_0217a320(0);
      }
    }
    break;
  case 10:
    iVar2 = FUN_02178448();
    if ((*(int *)(iVar2 + 0x198) == 1) || (iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x198) == 0x12))
    {
      iVar2 = FUN_02178448();
      if ((*(char *)(iVar2 + 0x15) == '\0') ||
         (iVar2 = FUN_0217a2b0(param_5 + 1,*param_5), iVar2 != 0)) {
        iVar2 = FUN_02178448();
        *(int *)(iVar2 + 0x200) = param_5[1];
        iVar2 = FUN_02178448();
        *(undefined1 *)(iVar2 + 0x19f) = 0;
      }
      else {
        iVar2 = FUN_02178448();
        *(undefined4 *)(iVar2 + 0x200) = 0;
      }
      iVar2 = FUN_02178448();
      if (*(char *)(iVar2 + 0xd) == '\0') {
        iVar2 = FUN_02179ed4();
        if (iVar2 != 0) {
          return 0;
        }
      }
      else {
        iVar2 = FUN_02178448();
        FUN_0218a888(**(undefined4 **)(iVar2 + 4));
      }
    }
    break;
  case 0xc:
    iVar2 = FUN_02178448();
    if (param_2 == *(int *)(iVar2 + 0xf4)) {
      iVar2 = FUN_02178448();
      if ((*(char *)(iVar2 + 0x15) == '\0') ||
         (iVar2 = FUN_02178448(), *(char *)(iVar2 + 0x15) == '\x01')) {
        iVar2 = FUN_0217a8a4(param_2);
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        iVar2 = FUN_02178448();
        if (*(char *)(iVar2 + 0x15) == '\x03') {
          iVar2 = FUN_02178448();
          *(int *)(iVar2 + 0x204) = param_2;
          FUN_02179e44();
          FUN_02179f88(0);
        }
      }
    }
    break;
  case 0xd:
  case 0xe:
  case 0xf:
    iVar2 = FUN_021798c0(param_2,param_1,*param_5);
    if (iVar2 == 0) {
      return 0;
    }
    break;
  case 0x10:
    iVar2 = FUN_02178448();
    if (param_2 != *(int *)(iVar2 + 0xf4)) {
      return 1;
    }
    iVar2 = 0;
    if (0 < param_6) {
      do {
        iVar8 = FUN_02179534(*param_5,0);
        if (iVar8 != 0xff) {
          FUN_02176754();
        }
        param_5 = param_5 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_6);
    }
    break;
  case 0x11:
    if ((DAT_021a75a8 == (char *)0x0) || (*DAT_021a75a8 == '\0')) {
LAB_0217bce8:
      local_118[0] = 0;
    }
    else {
      lVar9 = OS_GetTick();
      lVar9 = lVar9 - *(longlong *)(pcVar1 + 0x10);
      uVar3 = (uint)lVar9;
      uVar10 = FUN_0200d0c4(uVar3 * 0x40,(int)((ulonglong)lVar9 >> 0x20) * 0x40 | uVar3 >> 0x1a,
                            0x82ea,0);
      uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
      if (uVar3 == 0 && (*(uint *)(pcVar1 + 4) <= (uint)uVar10) <= uVar3) goto LAB_0217bce8;
      local_118[0] = 1;
    }
    FUN_0217c024(0x12,param_2,param_3,param_4,local_118,1);
    iVar2 = FUN_0217af70();
    if (iVar2 != 0) {
      return 0;
    }
    break;
  case 0x12:
    iVar2 = FUN_02178448();
    if ((*(int *)(iVar2 + 0x198) == 0x13) && (uVar3 = FUN_02179534(param_2,0), uVar3 != 0xff)) {
      uVar3 = 1 << (uVar3 & 0xff);
      *(uint *)(DAT_021a75a8 + 8) = *(uint *)(DAT_021a75a8 + 8) | uVar3;
      if (*param_5 != 0) {
        *(uint *)(DAT_021a75a8 + 0xc) = *(uint *)(DAT_021a75a8 + 0xc) | uVar3;
      }
    }
    break;
  case 0x13:
    FUN_0217d118(0xc,0);
    return 0;
  case 0x20:
    iVar2 = FUN_02178448();
    if ((*(char *)(iVar2 + 0x15) == '\x01') &&
       (iVar2 = FUN_02178448(), *(char *)(iVar2 + 0x19e) == '\0')) {
      iVar8 = 1;
      iVar2 = FUN_02178448();
      if (*(char *)(iVar2 + 0xd) != '\0') {
        iVar2 = 4;
        do {
          iVar5 = FUN_02178448();
          if (param_2 == *(int *)(iVar5 + iVar2 + 0xf4)) {
            if (*param_5 != 0) {
              iVar2 = FUN_02178448();
              uVar3 = FUN_02179534(param_2,0);
              *(uint *)(iVar2 + 0x1d4U) = *(uint *)(iVar2 + 0x1d4U) | 1 << (uVar3 & 0xff);
              return 1;
            }
            iVar2 = FUN_02178448();
            if ((*(int *)(iVar2 + 0x198) == 0xb) ||
               (iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x198) == 0xc)) {
              FUN_0217a03c();
              iVar2 = FUN_0217af70();
              if (iVar2 != 0) {
                return 0;
              }
            }
            iVar2 = FUN_02178448();
            if (*(int *)(iVar2 + 0x194) != 0) {
              iVar2 = FUN_02178448();
              FUN_0218c8bc(*(undefined4 *)(iVar2 + 0x194));
              iVar2 = FUN_02178448();
              *(undefined4 *)(iVar2 + 0x194) = 0;
            }
            FUN_02179f60();
            return 1;
          }
          iVar2 = iVar2 + 4;
          iVar8 = iVar8 + 1;
          iVar5 = FUN_02178448();
        } while (iVar8 <= (int)(uint)*(byte *)(iVar5 + 0xd));
      }
    }
  }
  return 1;
}

