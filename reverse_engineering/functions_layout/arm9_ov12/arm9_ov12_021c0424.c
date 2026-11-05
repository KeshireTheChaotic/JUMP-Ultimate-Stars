
void FUN_021c0424(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar3 = DAT_021d5258;
  uVar1 = *param_1;
  if (uVar1 < 0x1e) {
    if (0x1c < uVar1) {
      if (param_1[1] != 0) {
        (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
        return;
      }
      DAT_021d5260 = DAT_021d5258 + 0x440;
      if (DAT_021d5264 == 0) {
        DAT_021d5264 = 1;
      }
      if (DAT_021d5266 == 0) {
        DAT_021d5266 = 200;
      }
      DAT_021d5268 = 0xff;
      DAT_021d5269 = 0xff;
      DAT_021d526a = 0xff;
      DAT_021d526b = 0xff;
      DAT_021d526c = 0xff;
      DAT_021d526d = 0xff;
      *(undefined4 *)(DAT_021d5258 + 0x5e4) = 1;
      *(undefined4 *)(iVar3 + 0x5e8) = 1;
      uVar2 = FUN_02059108(0x21c0425);
      FUN_021bfba4(10,uVar2);
      return;
    }
    switch(uVar1) {
    case 0:
      if (param_1[1] == 0) {
        (**(code **)(DAT_021d5258 + 0x51c))(0x15,param_1);
        uVar2 = FUN_0205ab90(0x21c0425,DAT_021d437c,DAT_021d4374,DAT_021d4370,DAT_021d4378);
        FUN_021bfba4(0x1d,uVar2);
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    case 1:
      if (param_1[1] == 0) {
        *(undefined2 *)(DAT_021d5258 + 0x52a) = 0;
        *(undefined2 *)(DAT_021d5258 + 0x528) = 0;
        uVar2 = FUN_02059428(0x21c0425);
        FUN_021bfba4(2,uVar2);
        return;
      }
      *(undefined2 *)(DAT_021d5258 + 0x526) = 0;
      (**(code **)(iVar3 + 0x51c))(0x100,param_1);
      return;
    case 2:
      if (param_1[1] == 0) {
        *(undefined1 *)(DAT_021d5258 + 0x50d) = 0;
        *(undefined2 *)(DAT_021d525c + 0x1316) = 0;
        (**(code **)(iVar3 + 0x51c))(0x11,param_1);
        return;
      }
      *(undefined2 *)(DAT_021d5258 + 0x526) = 0;
      (**(code **)(iVar3 + 0x51c))(0x100,param_1);
      return;
    default:
      goto switchD_021c044a_caseD_3;
    case 10:
      if (param_1[1] != 0) {
        (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
        return;
      }
      uVar1 = param_1[4];
      if (uVar1 != 3) {
        if (uVar1 == 4) {
          (**(code **)(DAT_021d5258 + 0x51c))(5,param_1);
          if (*(int *)(iVar3 + 0x5e4) != 0) {
            if ((*(int *)(iVar3 + 0x5e8) != 0) && (iVar3 = FUN_021c1050(&DAT_021d5260), iVar3 == 0))
            {
              FUN_021bfeb0();
            }
            uVar2 = FUN_02059108(0x21c0425,&DAT_021d5260);
            FUN_021bfba4(10,uVar2);
            return;
          }
        }
        else {
          if (uVar1 != 5) {
            (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
            return;
          }
          iVar4 = DAT_021d5258 + 0x600;
          iVar9 = 0;
          if (*(ushort *)(DAT_021d5258 + 0x5e0) != 0) {
            iVar6 = iVar4;
LAB_021c0570:
            if ((((((char)param_1[5] != *(char *)(iVar6 + 0xca)) ||
                  (*(char *)((int)param_1 + 0xb) != *(char *)(iVar6 + 0xcb))) ||
                 ((char)param_1[6] != *(char *)(iVar6 + 0xcc))) ||
                ((*(char *)((int)param_1 + 0xd) != *(char *)(iVar6 + 0xcd) ||
                 ((char)param_1[7] != *(char *)(iVar6 + 0xce))))) ||
               (*(char *)((int)param_1 + 0xf) != *(char *)(iVar6 + 0xcf))) goto LAB_021c0606;
            iVar4 = iVar4 + iVar9 * 0x180;
            *(ushort *)(iVar4 + 0xf6) = param_1[0x1b];
            puVar7 = param_1 + 0x1c;
            puVar8 = (undefined4 *)(iVar4 + 0xf8);
            iVar4 = 0x10;
            do {
              uVar2 = *(undefined4 *)puVar7;
              uVar5 = *(undefined4 *)(puVar7 + 2);
              puVar7 = puVar7 + 4;
              *puVar8 = uVar2;
              puVar8[1] = uVar5;
              puVar8 = puVar8 + 2;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            iVar4 = iVar3 + 0x600 + iVar9 * 0x180;
            DC_InvalidateRange(iVar4,0xc0);
            FUN_02051504(DAT_021d5250,iVar3 + 0x440,iVar4,0xc0);
            *(int *)(iVar3 + 0x5ec) = iVar9;
            goto LAB_021c0650;
          }
LAB_021c0610:
          if (iVar9 < 0x10) {
            *(short *)(DAT_021d5258 + 0x5e0) = (short)iVar9 + 1;
            MIi_CpuCopy16(param_1,iVar4 + iVar9 * 0x180 + 0xc0,0xb8);
            iVar4 = iVar3 + 0x600 + iVar9 * 0x180;
            DC_InvalidateRange(iVar4,0xc0);
            FUN_02051504(DAT_021d5250,iVar3 + 0x440,iVar4,0xc0);
            *(int *)(iVar3 + 0x5ec) = iVar9;
          }
LAB_021c0650:
          (**(code **)(iVar3 + 0x51c))(4,param_1);
          if (*(int *)(iVar3 + 0x5e4) != 0) {
            if ((*(int *)(iVar3 + 0x5e8) != 0) && (iVar3 = FUN_021c1050(&DAT_021d5260), iVar3 == 0))
            {
              FUN_021bfeb0();
            }
            uVar2 = FUN_02059108(0x21c0425,&DAT_021d5260);
            FUN_021bfba4(10,uVar2);
            return;
          }
        }
      }
      break;
    case 0xb:
      if (param_1[1] == 0) {
        uVar2 = FUN_02058e64(0x21c0425,*(undefined4 *)(DAT_021d5258 + 0x520),0,1,0);
        FUN_021bfba4(0xc,uVar2);
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    case 0xc:
      if (param_1[1] != 0) {
        *(undefined2 *)(DAT_021d5258 + 0x5e0) = 0;
        (**(code **)(iVar3 + 0x51c))(0xb,param_1);
        return;
      }
      uVar1 = param_1[4];
      if (uVar1 < 10) {
        if (5 < uVar1) {
          if (uVar1 == 6) {
            *(undefined2 *)(DAT_021d5258 + 0x52a) = 0;
            *(undefined2 *)(iVar3 + 0x528) = 1;
            return;
          }
          if (uVar1 == 7) {
            *(ushort *)(DAT_021d5258 + 0x5e2) = param_1[5];
            (**(code **)(iVar3 + 0x51c))(6,param_1);
            *(undefined2 *)(iVar3 + 0x52a) = 1;
            iVar4 = FUN_02058b94(1,0x21c09f5,0);
            if (iVar4 == 0) {
              uVar2 = FUN_020598d0(0x21c0425,*(undefined4 *)(iVar3 + 0x504),
                                   *(undefined2 *)(iVar3 + 0x51a),iVar3 + 0x40,
                                   *(undefined2 *)(iVar3 + 0x518),*(short *)(iVar3 + 0x52c) == 0,0,0
                                   ,0,1,1);
              FUN_021bfba4(0xe,uVar2);
              return;
            }
            return;
          }
          if (uVar1 == 9) {
            (**(code **)(DAT_021d5258 + 0x51c))(10,param_1);
            *(undefined2 *)(iVar3 + 0x52a) = 0;
            *(undefined2 *)(iVar3 + 0x528) = 0;
            return;
          }
        }
      }
      else if (uVar1 == 0x1a) {
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    case 0xe:
      uVar1 = param_1[2];
      if (uVar1 == 10) {
        *(undefined2 *)(DAT_021d5258 + 0x528) = 1;
        iVar4 = FUN_021c0ff8();
        if (iVar4 != 0) {
          (**(code **)(iVar3 + 0x51c))(0x19,0);
          return;
        }
      }
      else if ((uVar1 != 0xc) && (uVar1 != 0xd)) {
        (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
        return;
      }
      break;
    case 0xf:
      *(undefined1 *)(DAT_021d5258 + 0x50c) = 0;
      if (param_1[1] == 0) {
        (**(code **)(iVar3 + 0x51c))(8,param_1);
      }
      else if (param_1[1] == 9) {
        (**(code **)(iVar3 + 0x51c))(0x29,param_1);
      }
      else {
        (**(code **)(iVar3 + 0x51c))(0x12,param_1);
      }
      (**(code **)(iVar3 + 0x51c))(0x19,0);
      return;
    case 0x15:
      iVar4 = FUN_021c0ff8();
      if (iVar4 != 0) {
        (**(code **)(iVar3 + 0x51c))(0x19,0);
        return;
      }
    }
  }
  else {
    if (uVar1 == 0x80) {
      if (param_1[2] == 0x16) {
        FUN_02055684();
        return;
      }
      return;
    }
switchD_021c044a_caseD_3:
    (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
  }
  return;
LAB_021c0606:
  iVar6 = iVar6 + 0x180;
  iVar9 = iVar9 + 1;
  if ((int)(uint)*(ushort *)(DAT_021d5258 + 0x5e0) <= iVar9) goto LAB_021c0610;
  goto LAB_021c0570;
}

