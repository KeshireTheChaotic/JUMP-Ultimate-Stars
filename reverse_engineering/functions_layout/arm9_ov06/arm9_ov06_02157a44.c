
bool FUN_02157a44(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5,int param_6,
                 short param_7,short param_8)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  switch(param_3) {
  case 0:
    break;
  case 1:
    *(undefined1 *)(param_2 + 0xf3) = 1;
    break;
  case 2:
    FUN_02158470(param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x1a0) + 0x174) + 0xc),param_4,
                 param_5,param_6,0xffffffff,param_2 + 0xe4 + (int)*(char *)(param_2 + 0xca),param_4)
    ;
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
    iVar3 = FUN_0215793c(*(undefined4 *)(param_2 + 0x1a8));
    if (iVar3 == 0) {
      FUN_02083950(*(undefined4 *)(param_2 + 0x1a8),1);
    }
    else {
      FUN_02083950(*(undefined4 *)(param_2 + 0x1a8),0);
    }
    break;
  case 7:
    *(short *)(param_2 + 0xce) = (short)param_4;
    break;
  case 8:
    FUN_0214e22c(param_4,(int)*(char *)(param_2 + 0x1e0));
    break;
  case 9:
    FUN_0215c034(param_2,param_4);
    break;
  case 10:
    FUN_02158ed0(param_2,(&DAT_0217215c)[param_4 & 0xffff]);
    break;
  case 0xb:
    FUN_021585d4(param_1,param_4,param_5,param_6,(int)param_7,(int)param_8);
    break;
  case 0xc:
    FUN_02157fb0(DAT_02172960,(int)*(char *)(param_2 + 0x1e0),param_4);
    FUN_02157fd8(DAT_02172960,(int)*(char *)(param_2 + 0x1e0),param_4);
    bVar5 = *(char *)(DAT_02172960 + 200) != '\0';
    cVar1 = '\0';
    if (bVar5) {
      cVar1 = *(char *)(DAT_02172960 + 0xcb);
    }
    if (bVar5 && cVar1 != '\0') {
      FUN_0215f744(param_2,0);
    }
    break;
  case 0xd:
    FUN_021617a0(*(undefined4 *)(param_2 + 0x1b8),param_4,param_5);
    break;
  case 0xe:
    FUN_0216186c(*(undefined4 *)(param_2 + 0x1b8),param_4,param_5,param_6 != 0);
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    if (param_4 == 0) {
      *(short *)(param_2 + 0xe2) = (short)param_5;
    }
    break;
  case 0x12:
    iVar3 = FUN_02078660(*(undefined4 *)(param_2 + 0x1b4),1,1);
    if (iVar3 != 0) {
      iVar3 = FUN_0215dec8(param_2);
      if (iVar3 == 0) {
        FUN_0215d2e4(param_2);
      }
      *(short *)(param_2 + 0xce) = (short)param_4;
    }
    break;
  case 0x13:
    FUN_02078618(*(undefined4 *)(param_2 + 0x1b4));
    break;
  case 0x14:
    FUN_0216650c(*(undefined4 *)(param_2 + 0x1a8),(&DAT_021710e4)[param_4]);
    break;
  case 0x15:
    *(undefined1 *)(param_2 + 0xf4) = 1;
    break;
  case 0x16:
    FUN_0215a968(param_2,param_4,param_5 == 0,param_6 == 0);
    break;
  case 0x17:
    FUN_020783cc(*(undefined4 *)(param_2 + 0x1b4),param_4);
    break;
  case 0x18:
    FUN_020781e4(*(undefined4 *)(param_2 + 0x1b4),param_4);
    break;
  case 0x19:
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_0216fa9c(*(int *)(param_1 + 0x84),*(undefined4 *)(param_2 + 0x1a8));
    }
    break;
  case 0x1a:
    if (*(int *)(param_1 + 0x84) != 0) {
      FUN_0216fb04();
    }
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    *(undefined1 *)(param_2 + 200) = 0;
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    FUN_020783dc(*(undefined4 *)(param_2 + 0x1b4),param_4);
    break;
  case 0x21:
    if (*(int *)(param_1 + 0x84) != 0) {
      iVar3 = FUN_02158000();
      if (*(int *)(iVar3 + 0x18) != 0) {
        piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(iVar3 + 0x18) + 0x88) + 4) + 0x68);
        (**(code **)(*piVar2 + 0xec))(piVar2,param_4);
      }
    }
    break;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    break;
  case 0x26:
    break;
  case 0x27:
    break;
  case 0x28:
    break;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
    break;
  case 0x2d:
    break;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    break;
  case 0x36:
    break;
  case 0x37:
    break;
  case 0x38:
    break;
  case 0x39:
    break;
  case 0x3a:
    break;
  case 0x3b:
    break;
  case 0x3c:
    break;
  case 0x3d:
    break;
  case 0x3e:
    break;
  case 0x3f:
    break;
  case 0x40:
    break;
  case 0x41:
    iVar3 = FUN_0215793c(*(undefined4 *)(param_1 + 0x7c));
    if (iVar3 != 0) {
      return true;
    }
    break;
  case 0x42:
    if ((int)param_4 <= (int)*(char *)(*(int *)(param_2 + 0x1b4) + 0x5df)) {
      return true;
    }
    break;
  case 0x43:
    if (*(int *)(param_1 + 0x80) != 0) {
      return (*(ushort *)(*(int *)(param_1 + 0x80) + 0x26) & 0x80) != 0;
    }
    if (*(int *)(param_1 + 0x84) != 0) {
      return (*(ushort *)(*(int *)(param_1 + 0x84) + 0x26) & 0x80) != 0;
    }
    break;
  case 0x44:
    break;
  case 0x45:
    if (*(short *)(param_2 + 0x88) == (short)(char)(&DAT_021710e0)[param_4]) {
      return true;
    }
    break;
  case 0x46:
    break;
  case 0x47:
    for (iVar3 = 0; iVar3 < *(int *)(DAT_02172960 + 0x158); iVar3 = iVar3 + 1) {
      if (iVar3 != *(char *)(param_2 + 0x1e0)) {
        iVar4 = iVar3 * 0x30 + *(char *)(param_2 + 0x1e0) * 0xc0 + DAT_0214be10;
        if (*(int *)(iVar4 + 0x158) != 0) {
          return true;
        }
        if (*(int *)(iVar4 + 0x170) != 0) {
          return true;
        }
      }
    }
    break;
  case 0x48:
    if (*(int *)(param_1 + 0x84) != 0) {
      iVar3 = FUN_02158000();
      if (iVar3 == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = *(int *)(*(int *)(iVar3 + 0x10) + 0x28) != 0;
      }
      if (bVar5) {
        return true;
      }
    }
  }
  return false;
}

