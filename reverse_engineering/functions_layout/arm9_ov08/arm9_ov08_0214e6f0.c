
undefined4 FUN_0214e6f0(int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r1;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int local_d0;
  int local_cc;
  undefined4 local_c4;
  short local_b0;
  short local_ae;
  short local_ac;
  short local_aa;
  undefined4 local_a8;
  int local_a4;
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined1 auStack_94 [8];
  undefined4 local_8c;
  int local_88;
  undefined1 uStack_84;
  undefined1 local_83;
  undefined2 local_82;
  undefined4 local_80;
  undefined1 auStack_7c [24];
  undefined1 auStack_64 [60];
  undefined4 local_28 [4];
  undefined4 local_18;
  
  local_cc = 0;
  local_a8 = 1;
  local_a4 = 0;
  local_c4 = 0;
  FUN_0214cf04(auStack_7c,0,0x18);
  local_b0 = *(short *)(param_1 + 0x106);
  if (local_b0 == -1) {
    local_b0 = 10;
  }
  local_ac = *(short *)(param_1 + 0x10a);
  if (local_ac == -1) {
    local_ac = 10;
  }
  local_ae = *(short *)(param_1 + 0x108);
  if (local_ae == -1) {
    local_ae = 100;
  }
  local_aa = *(short *)(param_1 + 0x10c);
  if (local_aa == -1) {
    local_aa = 100;
  }
  local_d0 = (int)*(short *)(param_1 + 0x10e);
  if (local_d0 == -1) {
    local_d0 = 2000;
  }
  FUN_0214e644(param_1);
  if ((DAT_0216c1f4 & 1) != 1) {
    FUN_0214e638(0x13);
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
  iVar7 = 0;
  FUN_0214e2b4(0);
  iVar8 = (int)local_ae;
  while( true ) {
    if (DAT_0216c1c4 != 0) {
      FUN_0214f2e4();
      DAT_0216c1c4 = 0;
    }
    iVar3 = FUN_0214f514(&DAT_0216c1c4);
    if (iVar3 == -1) {
      *(undefined1 *)(param_1 + 0x116) = 0xf;
      FUN_0214e698();
      return 0xffffffff;
    }
    iVar3 = FUN_0214e370(DAT_0216c1c4);
    if (iVar3 == 4) {
      *(undefined1 *)(param_1 + 0x116) = 2;
      FUN_0214e698();
      return 0xffffffff;
    }
    if (iVar3 == 0) break;
    if (local_b0 <= iVar7) {
      *(undefined1 *)(param_1 + 0x116) = 1;
      FUN_0214e698();
      return 0xffffffff;
    }
    thunk_FUN_02052ea0(iVar8);
    iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
  }
  FUN_0214e2b4(1);
  FUN_0214cf04(auStack_64,0,0x3c);
  iVar7 = FUN_0214e324(auStack_64);
  if (iVar7 != 0) {
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
  DAT_0216c1cc = (int *)FUN_0214f2f8(0x58);
  if (DAT_0216c1cc == (int *)0x0) {
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
  FUN_0214cf04(DAT_0216c1cc,0,0x58);
  iVar7 = 0;
  if (0 < local_b0) {
    do {
      iVar3 = FUN_0214f330(auStack_64,DAT_0216c1cc);
      if (iVar3 == -1) {
        *(undefined1 *)(param_1 + 0x116) = 0xf;
        FUN_0214e698();
        return 0xffffffff;
      }
      if ((iVar3 == 0) && (*DAT_0216c1cc == 1)) break;
      thunk_FUN_02052ea0(iVar8);
      iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
    } while (iVar7 < local_b0);
  }
  if (iVar7 == local_b0) {
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
  iVar3 = FUN_0214cf74(0xc0a80b65,0xffffff00,0xc0a80b65);
  if (iVar3 != 0) {
    FUN_0214e638(0xc);
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
  FUN_0214e698();
  FUN_0214e2ec(3,auStack_7c,param_1 + 0x110);
  DAT_0216af24 = thunk_EXT_FUN_02193b80(2,2,0);
  if (DAT_0216af24 < 0) {
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
  iVar3 = FUN_0214ce80(DAT_0216af24,0xffff,1,&local_a8,4);
  if (iVar3 < 0) {
    FUN_0214e638(0xb);
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
  FUN_0214cf04(&uStack_84,0,8);
  local_83 = 2;
  local_80 = FUN_0214ce2c(0xc0a80b65);
  local_82 = FUN_0214ce14(0x5790);
  iVar3 = FUN_0214ce6c(DAT_0216af24,&uStack_84,8);
  if (iVar3 < 0) {
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
LAB_0214ea2c:
  piVar1 = DAT_0216c1d4;
  FUN_0214cf04(local_28,0,0x14);
  local_18 = 0xc0a80b65;
  local_28[0] = 0xc0a80b01;
  uVar4 = FUN_0200d12c(local_d0,1000);
  FUN_0200d12c(local_d0,1000);
  do {
    if ((local_cc == 1) && (DAT_0216c204 != '\x01')) {
      if (DAT_0216af24 != -1) {
        thunk_EXT_FUN_021939fc();
      }
      DAT_0216af24 = 0xffffffff;
      iVar3 = FUN_0214cf48();
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 0x116) = 0xf;
        FUN_0214e698();
        return 0xffffffff;
      }
      DAT_0216c1c4 = FUN_0214f2f8(0x58);
      if (DAT_0216c1c4 == 0) {
        *(undefined1 *)(param_1 + 0x116) = 0xf;
        FUN_0214e698();
        return 0xffffffff;
      }
      while( true ) {
        if (DAT_0216c1c4 != 0) {
          FUN_0214f2e4();
          DAT_0216c1c4 = 0;
        }
        iVar3 = FUN_0214f514(&DAT_0216c1c4);
        if (iVar3 == -1) {
          *(undefined1 *)(param_1 + 0x116) = 0xf;
          FUN_0214e698();
          return 0xffffffff;
        }
        iVar5 = FUN_0214e370(DAT_0216c1c4);
        if (iVar5 == 4) {
          *(undefined1 *)(param_1 + 0x116) = 2;
          FUN_0214e698();
          return 0xffffffff;
        }
        if (iVar5 == 0) break;
        if (local_b0 <= iVar7) {
          *(undefined1 *)(param_1 + 0x116) = 1;
          FUN_0214e698();
          return 0xffffffff;
        }
        thunk_FUN_02052ea0(iVar8);
        iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
      }
      if (iVar3 == -1) {
        *(undefined1 *)(param_1 + 0x116) = 0xf;
        FUN_0214e698();
        return 0xffffffff;
      }
      DAT_0216c1cc = (int *)FUN_0214f2f8(0x58);
      if (DAT_0216c1cc == (int *)0x0) {
        *(undefined1 *)(param_1 + 0x116) = 0xf;
        FUN_0214e698();
        return 0xffffffff;
      }
      FUN_0214cf04(DAT_0216c1cc,0,0x58);
      iVar7 = 0;
      if (0 < local_b0) {
        do {
          iVar3 = FUN_0214f330(auStack_64,DAT_0216c1cc);
          if (iVar3 == -1) {
            *(undefined1 *)(param_1 + 0x116) = 0xf;
            FUN_0214e698();
            return 0xffffffff;
          }
          if ((iVar3 == 0) && (*DAT_0216c1cc == 1)) break;
          thunk_FUN_02052ea0(iVar8);
          iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
        } while (iVar7 < local_b0);
      }
      if (iVar7 == local_b0) {
        *(undefined1 *)(param_1 + 0x116) = 0xf;
        FUN_0214e698();
        return 0xffffffff;
      }
      local_c4 = FUN_0214e6d0(DAT_0216c1fc,DAT_0216c200);
      iVar3 = FUN_0214cf74(local_c4,DAT_0216c200,local_c4);
      if (iVar3 != 0) {
        FUN_0214e638(0xc);
        *(undefined1 *)(param_1 + 0x116) = 0xf;
        FUN_0214e698();
        return 0xffffffff;
      }
      DAT_0216c204 = '\x01';
      FUN_0214e698();
      DAT_0216af24 = thunk_EXT_FUN_02193b80(2,2,0);
      if (DAT_0216af24 < 0) {
        *(undefined1 *)(param_1 + 0x116) = 0xf;
        FUN_0214e698();
        return 0xffffffff;
      }
      iVar3 = FUN_0214ce80(DAT_0216af24,0xffff,1,&local_a8,4);
      if (iVar3 < 0) {
        FUN_0214e638(0xb);
        *(undefined1 *)(param_1 + 0x116) = 0xf;
        FUN_0214e698();
        return 0xffffffff;
      }
      FUN_0214cf04(&uStack_84,0,8);
      local_83 = 2;
      local_80 = FUN_0214ce2c(local_c4);
      local_82 = FUN_0214ce14(0x5790);
      iVar3 = FUN_0214ce6c(DAT_0216af24,&uStack_84,8);
      if (iVar3 < 0) {
        *(undefined1 *)(param_1 + 0x116) = 0xf;
        FUN_0214e698();
        return 0xffffffff;
      }
    }
    iVar3 = FUN_0214d864(local_cc,local_28,auStack_7c,DAT_0216af24);
    if (iVar3 == -1) {
      FUN_0214e638(local_cc + 0x1000);
      *(undefined1 *)(param_1 + 0x116) = 0xf;
      FUN_0214e698();
      return 0xffffffff;
    }
    FUN_0214cf04(piVar1,0,0x5f8);
    FUN_0214cd28(auStack_94);
    FUN_0214cd20(DAT_0216af24,auStack_94);
    local_8c = uVar4;
    local_88 = extraout_r1 * 1000;
    iVar3 = FUN_0214ce9c(DAT_0216af24 + 1,auStack_94,0,0,&local_8c);
    if (0 < iVar3) break;
    local_a4 = local_a4 + 1;
    if (local_ac < local_a4) {
      if (local_cc == 0) {
        FUN_0214e638(0xf);
      }
      else if (local_cc == 1) {
        FUN_0214e638(0x10);
      }
      else {
        FUN_0214e638(0x11);
      }
      iVar7 = -1;
      goto LAB_0214f10a;
    }
    thunk_FUN_02052ea0((int)local_aa);
  } while( true );
  local_98 = 8;
  uVar2 = FUN_0214cee8(DAT_0216af24,piVar1 + 3,0x5dc,0,auStack_a0,&local_98);
  *piVar1 = DAT_0216af24;
  iVar3 = FUN_0214cdc4(uVar2);
  piVar1[1] = iVar3;
  iVar3 = FUN_0214e1f8(local_cc,piVar1,&local_a4,auStack_7c,DAT_0216af24);
  if (iVar3 == 100) {
    iVar7 = 0;
  }
  else if (iVar3 == -1) {
    iVar7 = -1;
  }
  else {
    if (local_cc != iVar3) {
      if (iVar3 == 2) {
        if (DAT_0216af24 != -1) {
          thunk_EXT_FUN_021939fc();
        }
        DAT_0216af24 = 0xffffffff;
        iVar7 = FUN_0214cf48();
        if (iVar7 != 0) {
          *(undefined1 *)(param_1 + 0x116) = 0xf;
          FUN_0214e698();
          return 0xffffffff;
        }
        iVar7 = 0;
        FUN_0214e2b4(4);
        while( true ) {
          if (DAT_0216c1c4 != 0) {
            FUN_0214f2e4();
            DAT_0216c1c4 = 0;
          }
          iVar5 = FUN_0214f514(&DAT_0216c1c4);
          if (iVar5 == -1) {
            *(undefined1 *)(param_1 + 0x116) = 0xf;
            FUN_0214e698();
            return 0xffffffff;
          }
          iVar5 = FUN_0214e370(DAT_0216c1c4);
          if (iVar5 == 4) {
            *(undefined1 *)(param_1 + 0x116) = 2;
            FUN_0214e698();
            return 0xffffffff;
          }
          if (iVar5 == 0) break;
          if (local_b0 <= iVar7) {
            *(undefined1 *)(param_1 + 0x116) = 1;
            FUN_0214e698();
            return 0xffffffff;
          }
          thunk_FUN_02052ea0(iVar8);
          iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
        }
        DAT_0216c1cc = (int *)FUN_0214f2f8(0x58);
        if (DAT_0216c1cc == (int *)0x0) {
          *(undefined1 *)(param_1 + 0x116) = 0xf;
          FUN_0214e698();
          return 0xffffffff;
        }
        FUN_0214cf04(DAT_0216c1cc,0,0x58);
        iVar7 = 0;
        if (0 < local_b0) {
          do {
            iVar5 = FUN_0214f330(auStack_64,DAT_0216c1cc);
            if (iVar5 == -1) {
              *(undefined1 *)(param_1 + 0x116) = 0xf;
              FUN_0214e698();
              return 0xffffffff;
            }
            if ((iVar5 == 0) && (*DAT_0216c1cc == 1)) break;
            thunk_FUN_02052ea0(iVar8);
            iVar7 = (iVar7 + 1) * 0x10000 >> 0x10;
          } while (iVar7 < local_b0);
        }
        if (iVar7 == local_b0) {
          *(undefined1 *)(param_1 + 0x116) = 0xf;
          FUN_0214e698();
          return 0xffffffff;
        }
        iVar5 = FUN_0214cf74(local_c4,DAT_0216c200,local_c4);
        if (iVar5 != 0) {
          FUN_0214e638(0xc);
          *(undefined1 *)(param_1 + 0x116) = 0xf;
          FUN_0214e698();
          return 0xffffffff;
        }
        FUN_0214e698();
        DAT_0216af24 = thunk_EXT_FUN_02193b80(2,2,0);
        if (DAT_0216af24 < 0) {
          *(undefined1 *)(param_1 + 0x116) = 0xf;
          FUN_0214e698();
          return 0xffffffff;
        }
        iVar5 = FUN_0214ce80(DAT_0216af24,0xffff,1,&local_a8,4);
        if (iVar5 < 0) {
          FUN_0214e638(0xb);
          *(undefined1 *)(param_1 + 0x116) = 0xf;
          FUN_0214e698();
          return 0xffffffff;
        }
        FUN_0214cf04(&uStack_84,0,8);
        local_83 = 2;
        local_80 = FUN_0214ce2c(local_c4);
        local_82 = FUN_0214ce14(0x5790);
        iVar5 = FUN_0214ce6c(DAT_0216af24,&uStack_84,8);
        if (iVar5 < 0) {
          *(undefined1 *)(param_1 + 0x116) = 0xf;
          FUN_0214e698();
          return 0xffffffff;
        }
      }
      local_cc = iVar3;
      goto LAB_0214ea2c;
    }
    if (local_a4 <= local_ac) {
      thunk_FUN_02052ea0((int)local_aa);
      local_cc = iVar3;
      goto LAB_0214ea2c;
    }
    if (iVar3 == 0) {
      FUN_0214e638(0xf);
    }
    else if (iVar3 == 1) {
      FUN_0214e638(0x10);
    }
    else {
      FUN_0214e638(0x11);
    }
    iVar7 = -1;
  }
LAB_0214f10a:
  if (DAT_0216af24 != -1) {
    thunk_EXT_FUN_021939fc();
  }
  DAT_0216af24 = 0xffffffff;
  iVar8 = FUN_0214cf48();
  if (iVar8 != 0) {
    *(undefined1 *)(param_1 + 0x116) = 0xf;
    FUN_0214e698();
    return 0xffffffff;
  }
  if (iVar7 != 0) {
    uVar4 = FUN_0214e62c();
    switch(uVar4) {
    case 0xf:
      uVar6 = 3;
      break;
    case 0x10:
      uVar6 = 4;
      break;
    case 0x11:
      uVar6 = 5;
      break;
    default:
      uVar6 = 0xf;
      break;
    case 0x14:
      uVar6 = 7;
      break;
    case 0x15:
      uVar6 = 8;
    }
    *(undefined1 *)(param_1 + 0x116) = uVar6;
    FUN_0214e698();
    return 0xffffffff;
  }
  iVar7 = FUN_0214e41c(param_1);
  if (iVar7 == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x116) = 6;
  FUN_0214e698();
  return 0xffffffff;
}

