
bool FUN_0215807c(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
                 short param_7,short param_8,short param_9)

{
  int iVar1;
  
  if (param_4 < 0x44) {
    if (param_4 < 0x43) {
      if (param_4 < 0x41) {
        if (0x3f < param_4) {
          if (*(int *)(param_2 + 0x1ac) == 0) {
            return true;
          }
          return (*(byte *)(*(int *)(param_2 + 0x1ac) + 0x3a) & 2) != 0;
        }
        switch(param_4) {
        case 0:
          FUN_02078a04(*(undefined4 *)(param_2 + 0x1b4),param_5);
          break;
        case 1:
          break;
        case 2:
          FUN_02158470(param_1,*(undefined4 *)(param_3 + 0xc),param_5,param_6,(int)param_7,
                       (int)*(char *)(param_2 + 0x1e5),0,param_4);
          break;
        case 3:
          FUN_0215857c();
          break;
        case 4:
          FUN_0206c650(*(undefined4 *)(param_1 + 0x88));
          break;
        case 5:
          FUN_0206c760(*(undefined4 *)(param_1 + 0x88));
          break;
        case 6:
          iVar1 = FUN_0215793c(*(undefined4 *)(param_1 + 0x7c));
          if (iVar1 == 0) {
            FUN_02083950(*(undefined4 *)(param_1 + 0x7c),1);
          }
          else {
            FUN_02083950(*(undefined4 *)(param_1 + 0x7c),0);
          }
          break;
        case 7:
          break;
        case 8:
          break;
        case 9:
          break;
        case 10:
          FUN_02158ed0(param_2,(&DAT_0217215c)[param_5 & 0xffff]);
          break;
        case 0xb:
          FUN_021585d4(param_1,param_5,param_6,(int)param_7,(int)param_8,(int)param_9);
          break;
        case 0xc:
          FUN_02157fb0(DAT_02172960,(int)*(char *)(param_2 + 0x1e0),param_5);
          FUN_02157fd8(DAT_02172960,(int)*(char *)(param_2 + 0x1e0),param_5);
          break;
        case 0xd:
          break;
        case 0xe:
          break;
        case 0xf:
          if (*(char *)(param_2 + 0x18) == '\n') {
            FUN_02158ed0(param_2,(&DAT_0217215c)[param_5 & 0xffff]);
          }
          break;
        case 0x10:
          FUN_02159c7c(param_2,param_3,param_5);
          break;
        case 0x11:
          break;
        case 0x12:
          break;
        case 0x13:
          FUN_02078618(*(undefined4 *)(param_2 + 0x1b4));
          break;
        case 0x14:
          FUN_0216650c(*(undefined4 *)(param_2 + 0x1a8),(&DAT_021710e4)[param_5]);
          break;
        case 0x15:
          break;
        case 0x16:
          break;
        case 0x17:
          FUN_020783cc(*(undefined4 *)(param_2 + 0x1b4),param_5);
          break;
        case 0x18:
          FUN_020781e4(*(undefined4 *)(param_2 + 0x1b4),param_5);
          break;
        case 0x19:
          break;
        case 0x1a:
          break;
        case 0x1b:
          iVar1 = *(int *)(param_2 + 0x1ac);
          if (iVar1 != 0) {
            *(short *)(iVar1 + 0x34) = (short)param_5;
            *(short *)(iVar1 + 0x36) = (short)param_6;
          }
          break;
        case 0x1c:
          iVar1 = *(int *)(param_2 + 0x1ac);
          if (iVar1 != 0) {
            *(byte *)(iVar1 + 0x3a) = *(byte *)(iVar1 + 0x3a) | 0x10;
          }
          break;
        case 0x1d:
          break;
        case 0x1e:
          if (param_5 == 0) {
            FUN_02078428(*(undefined4 *)(param_2 + 0x1b4),0,100);
          }
          else {
            FUN_02078428(*(undefined4 *)(param_2 + 0x1b4),1,param_6);
          }
          break;
        case 0x1f:
          if (*(char *)(param_2 + 0x18) == '\b') {
            FUN_02159b8c(param_2,0x220003);
            FUN_0207342c(0x7a,9);
            FUN_020781e4(*(undefined4 *)(param_2 + 0x1b4),(uint)*(ushort *)(param_2 + 0x112) * 0x600
                        );
          }
        }
      }
      else if ((param_4 == 0x41) &&
              (iVar1 = FUN_0215793c(*(undefined4 *)(param_1 + 0x7c)), iVar1 != 0)) {
        return true;
      }
    }
    else {
      if (*(int *)(param_1 + 0x80) != 0) {
        return (*(ushort *)(*(int *)(param_1 + 0x80) + 0x26) & 0x80) != 0;
      }
      if (*(int *)(param_1 + 0x84) != 0) {
        return (*(ushort *)(*(int *)(param_1 + 0x84) + 0x26) & 0x80) != 0;
      }
    }
  }
  else if (param_4 < 0x47) {
    if (param_4 < 0x46) {
      if ((param_4 == 0x44) && (*(int *)(param_2 + 0x1ac) != 0)) {
        return (*(byte *)(*(int *)(param_2 + 0x1ac) + 0x3a) & 8) != 0;
      }
    }
    else if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x158) &
             1 << (uint)*(byte *)(param_2 + 0x1e0)) != 0) {
      return true;
    }
  }
  else if ((param_4 == 0x49) && ((int)param_5 <= (int)*(char *)(*(int *)(param_2 + 0x1b4) + 0x5de)))
  {
    return true;
  }
  return false;
}

