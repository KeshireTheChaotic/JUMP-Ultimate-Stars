
undefined4 FUN_021a2978(int param_1,uint param_2,int *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*param_3 == 0x5443565f) {
    bVar1 = true;
  }
  else if (*param_3 == 0x5f564354) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 1;
  }
  if (param_4 < 4) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_020024cc(param_3,s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0 + 4,4,param_4,param_4);
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    return 1;
  }
  if (param_4 == 6) {
    iVar2 = FUN_020024cc(param_3,s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0 + 0x14,4);
    if (iVar2 == 0) {
      FUN_0219dbb4(param_2,CONCAT11((char)param_3[1],*(undefined1 *)((int)param_3 + 5)));
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 1;
  }
  if (param_4 == 8) {
    iVar2 = FUN_020024cc(param_3,&DAT_021a370c,4);
    if (iVar2 == 0) {
      FUN_0219da10(param_2,(ushort)param_3[1] & 0x7fff);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 1;
  }
  if (param_4 == 4) {
    iVar2 = FUN_020024cc(param_3,s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0 + 8,4);
    if (iVar2 == 0) {
      FUN_0219db20(param_2);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 1;
  }
  if (param_4 < 5) {
    bVar1 = false;
  }
  else {
    iVar2 = thunk_FUN_020024cc(param_3,s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0 + 0xc,4);
    if (iVar2 == 0) {
      WiFiGame::WiFiGame_SendMess_ONEWAY((int)(char)param_3[1],param_3 + 2,param_4 - 8);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (bVar1) {
    return 1;
  }
  if (param_4 == 4) {
    iVar2 = FUN_020024cc(param_3,s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0 + 0x10,4);
    if (iVar2 == 0) {
      *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) | (byte)(1 << (param_2 & 0xff));
      iVar2 = FUN_021a2cfc(param_1);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 1;
  }
  iVar2 = FUN_021a1f04(param_3);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + param_2 * 4);
    if (iVar2 != 0) {
      uVar3 = *(uint *)(param_1 + param_2 * 4 + 0x10);
      uVar4 = param_4;
      if ((int)uVar3 < (int)param_4) {
        uVar4 = uVar3;
      }
      FUN_02051890(param_3,iVar2,uVar4);
    }
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x24));
    }
  }
  else {
    FUN_0219c684(param_3,param_2);
  }
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | (byte)(1 << (param_2 & 0xff));
  *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & ~(byte)(1 << (param_2 & 0xff));
  FUN_021a2d98(param_1,param_2);
  return 1;
}

