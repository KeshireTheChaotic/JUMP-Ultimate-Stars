
void FUN_0214d228(uint param_1,undefined4 param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0216ace4;
  switch(param_2) {
  case 0:
  default:
    FUN_02055684();
    return;
  case 1:
    return;
  case 2:
    if (DAT_0216ace8 == 2) {
      OS_DisableInterrupts();
      DAT_0216acea = DAT_0216acea | (ushort)(1 << (param_1 & 0xff));
      OS_RestoreInterrupts();
      iVar2 = (param_1 - 1) * 0x1e;
      (&DAT_0216ad0c)[iVar2] = (char)param_3[5];
      (&DAT_0216ad0d)[iVar2] = *(undefined1 *)((int)param_3 + 0xb);
      (&DAT_0216ad0e)[iVar2] = (char)param_3[6];
      (&DAT_0216ad0f)[iVar2] = *(undefined1 *)((int)param_3 + 0xd);
      (&DAT_0216ad10)[iVar2] = (char)param_3[7];
      (&DAT_0216ad11)[iVar2] = *(undefined1 *)((int)param_3 + 0xf);
      *(short *)(&DAT_0216ad12 + iVar2) = (short)param_1;
      return;
    }
    return;
  case 3:
    iVar2 = FUN_0214d51c();
    if (iVar2 == 6) {
      return;
    }
    FUN_0214d5d0(param_1);
    FUN_0214d1fc();
    return;
  case 4:
    return;
  case 5:
    return;
  case 6:
    return;
  case 7:
    DAT_0216acf0 = DAT_0216acf0 & ~(ushort)(1 << (param_1 & 0xff));
    DAT_0216acf2 = DAT_0216acf2 | (ushort)(1 << (param_1 & 0xff));
    return;
  case 8:
    return;
  case 9:
    DAT_0216acf2 = DAT_0216acf2 & ~(ushort)(1 << (param_1 & 0xff));
    DAT_0216acf4 = DAT_0216acf4 | (ushort)(1 << (param_1 & 0xff));
    FUN_0214d1fc();
    return;
  case 10:
    if (DAT_0216ace8 != 2) {
      FUN_0214cfc8();
      return;
    }
    DAT_0216acec = DAT_0216acec | (ushort)(1 << (param_1 & 0xff));
    FUN_0214cf9c();
    iVar2 = func_0x021bead8(param_1);
    if (iVar2 == 0) {
      return;
    }
    FUN_02051890(iVar2,&DAT_0216acf6 + (param_1 - 1) * 0x1e,0x16);
    return;
  case 0xb:
    return;
  case 0xc:
    if (DAT_0216ace8 == 4) {
      DAT_0216ace8 = 5;
    }
    else {
      DAT_0216ace8 = 0;
    }
    if (DAT_0216ace4 != 0) {
      iVar3 = FUN_0201a9ec(DAT_0216ace4);
      if (iVar3 == 0) {
        FUN_0201a958(iVar2,1);
      }
      DAT_0216ace4 = 0;
    }
    iVar2 = DAT_0216ace0;
    if (DAT_0216ace0 == 0) {
      return;
    }
    iVar3 = FUN_0201a9ec(DAT_0216ace0);
    if (iVar3 == 0) {
      FUN_0201a958(iVar2,1);
    }
    DAT_0216ace0 = 0;
    return;
  case 0xd:
    break;
  case 0xe:
    DAT_0216acec = DAT_0216acec & ~(ushort)(1 << (param_1 & 0xff));
    DAT_0216acee = DAT_0216acee | (ushort)(1 << (param_1 & 0xff));
    FUN_0214d028();
    return;
  }
  uVar1 = *param_3;
  if (uVar1 < 9) {
    if (7 < uVar1) {
      return;
    }
    if (2 < uVar1) {
      return;
    }
    if (uVar1 == 0) {
      return;
    }
    if (uVar1 != 1 && uVar1 != 2) {
      return;
    }
  }
  else if (uVar1 != 9) {
    return;
  }
  DAT_0216ace8 = 7;
  return;
}

