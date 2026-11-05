
/* WARNING: Removing unreachable block (ram,0x021c0b8c) */

void FUN_021c0a4c(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  if (uVar1 < 0x1a) {
    if (0x18 < uVar1) {
      if (param_1[1] == 0) {
        uVar2 = FUN_02059260(0x21c0a4d,DAT_021d4384);
        FUN_021bfba4(8,uVar2);
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    }
    switch(uVar1) {
    case 0:
      if (param_1[1] == 0) {
        FUN_021c0fac();
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    case 1:
      if (*(int *)(DAT_021d525c + 0x1320) == 0) {
        if (param_1[1] == 0) {
          *(undefined2 *)(DAT_021d5258 + 0x52a) = 0;
          *(undefined2 *)(DAT_021d5258 + 0x528) = 0;
          uVar2 = FUN_02059428(0x21c0a4d);
          FUN_021bfba4(2,uVar2);
          return;
        }
        *(undefined2 *)(DAT_021d5258 + 0x526) = 0;
        (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
        return;
      }
      FUN_02058b94(1,0,0);
      FUN_02058c74(0);
    case 2:
      if (param_1[1] == 0) {
        *(undefined1 *)(DAT_021d5258 + 0x50d) = 0;
        *(undefined2 *)(DAT_021d525c + 0x1316) = 0;
        (**(code **)(DAT_021d5258 + 0x51c))(0x11,param_1);
        return;
      }
      *(undefined2 *)(DAT_021d5258 + 0x526) = 0;
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    case 7:
      (**(code **)(DAT_021d5258 + 0x51c))(0x15,param_1);
      uVar2 = FUN_0205abfc(0x21c0a4d,1);
      FUN_021bfba4(0x19,uVar2);
      return;
    case 8:
      if (param_1[1] != 0) {
        (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
        return;
      }
      uVar1 = param_1[4];
      if (uVar1 < 8) {
        if (6 < uVar1) {
          if (*(short *)(DAT_021d5258 + 0x526) == 1) {
            return;
          }
          *(ushort *)(DAT_021d5258 + 0x52a) =
               *(ushort *)(DAT_021d5258 + 0x52a) | (ushort)(1 << (param_1[8] & 0xff));
          (**(code **)(DAT_021d5258 + 0x51c))(0,param_1);
          if ((*(short *)(DAT_021d5258 + 0x528) == 0) && (*(int *)(DAT_021d525c + 0x131c) == 0)) {
            *(int *)(DAT_021d525c + 0x131c) = 1;
            uVar2 = FUN_020598d0(0x21c0a4d,*(undefined4 *)(DAT_021d5258 + 0x504),
                                 *(undefined2 *)(DAT_021d5258 + 0x51a),DAT_021d5258 + 0x40,
                                 *(undefined2 *)(DAT_021d5258 + 0x518),
                                 *(short *)(DAT_021d5258 + 0x52c) == 0,0,0,0,1,1);
            FUN_021bfba4(0xe,uVar2);
            return;
          }
          iVar3 = FUN_021c0ff8();
          if (iVar3 == 0) {
            return;
          }
          (**(code **)(DAT_021d5258 + 0x51c))(0x19,0);
          return;
        }
        if (uVar1 < 3) {
          if (uVar1 == 0) {
            *(undefined2 *)(DAT_021d5258 + 0x52a) = 0;
            *(undefined2 *)(DAT_021d5258 + 0x528) = 0;
            return;
          }
          if (uVar1 == 2) {
            if (*(short *)(DAT_021d5258 + 0x526) == 1) {
              return;
            }
            (**(code **)(DAT_021d5258 + 0x51c))(0x1c,param_1);
            return;
          }
        }
      }
      else if (uVar1 < 10) {
        if (uVar1 == 9) {
          *(ushort *)(DAT_021d5258 + 0x52a) =
               *(ushort *)(DAT_021d5258 + 0x52a) & ~(ushort)(1 << (param_1[8] & 0xff));
          (**(code **)(DAT_021d5258 + 0x51c))(1,param_1);
          return;
        }
      }
      else if (uVar1 == 0x1a) {
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    case 0xd:
      if (param_1[1] == 0) {
        *(ushort *)(DAT_021d5258 + 0x52a) = *(ushort *)(DAT_021d5258 + 0x52a) & ~param_1[5];
        return;
      }
      return;
    case 0xe:
      *(undefined4 *)(DAT_021d525c + 0x131c) = 0;
      if (param_1[2] == 10) {
        *(undefined2 *)(DAT_021d5258 + 0x528) = 1;
        (**(code **)(DAT_021d5258 + 0x51c))(0x19);
        return;
      }
      if (param_1[2] == 0xb) {
        (**(code **)(DAT_021d5258 + 0x51c))(3,*(undefined4 *)(param_1 + 4));
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    case 0xf:
      if (*(int *)(DAT_021d525c + 0x74c8) != 0) {
        uVar5 = 0;
        uVar4 = 0;
        iVar3 = DAT_021d525c;
        do {
          if ((*(int *)(iVar3 + 0x14e8) != 0) && (uVar5 = uVar5 + 1, 1 < uVar5)) break;
          iVar3 = iVar3 + 4;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0xf);
        if (uVar5 == 1) {
          FUN_0205529c(13000);
        }
      }
      *(undefined1 *)(DAT_021d5258 + 0x50c) = 0;
      if (param_1[1] == 0) {
        (**(code **)(DAT_021d5258 + 0x51c))(2,param_1);
        (**(code **)(DAT_021d5258 + 0x51c))(0x19,0);
        return;
      }
      if (param_1[1] == 10) {
        (**(code **)(DAT_021d5258 + 0x51c))(0x2a,param_1);
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x13,param_1);
      (**(code **)(DAT_021d5258 + 0x51c))(0x19,0);
      return;
    }
  }
  else if (uVar1 < 0x1e) {
    if (uVar1 == 0x1d) {
      if (param_1[1] == 0) {
        uVar2 = FUN_02059320(0x21c0a4d,DAT_021d5258);
        FUN_021bfba4(7,uVar2);
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    }
  }
  else if (uVar1 == 0x80) {
    switch(param_1[2]) {
    case 0x10:
      (**(code **)(DAT_021d5258 + 0x51c))(0x1d,param_1);
      return;
    case 0x11:
      (**(code **)(DAT_021d5258 + 0x51c))(0x1f,param_1);
      return;
    case 0x12:
      (**(code **)(DAT_021d5258 + 0x51c))(0x20,param_1);
      return;
    case 0x13:
      (**(code **)(DAT_021d5258 + 0x51c))(0x21,param_1);
      return;
    default:
      return;
    case 0x16:
      FUN_02055684();
      return;
    }
  }
  (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
  return;
}

