
void FUN_020708e4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = FUN_02071f10(param_3);
    FUN_02051890(uVar1,&DAT_020b0134 + param_1 * 0x5c);
    uVar1 = FUN_02071f08();
    FUN_02051890(uVar1,&DAT_020b0004 + param_1 * 0x4c);
    return;
  case 1:
    uVar1 = FUN_02071f10(param_3);
    FUN_02051890(uVar1,&DAT_020b0134 + param_1 * 0x5c);
    FUN_02070a28(&DAT_020b0134 + param_1 * 0x5c,param_2,param_3);
    FUN_02070b5c(&DAT_020b0004 + param_1 * 0x4c,param_2,param_3);
    return;
  case 2:
    uVar1 = FUN_02072070(param_3);
    FUN_02051890(uVar1,&DAT_020b0134 + param_1 * 0x5c);
    uVar1 = FUN_02072050(param_3);
    FUN_02051890(uVar1,&DAT_020b0004 + param_1 * 0x4c);
    return;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    FUN_02070a28(&DAT_020affa8);
    return;
  case 7:
    goto LAB_020709e4;
  case 8:
LAB_020709e4:
    FUN_02070a28(&DAT_020b0134 + param_1 * 0x5c);
    FUN_02070b5c(&DAT_020b0004 + param_1 * 0x4c,param_2,param_3);
    return;
  default:
    return;
  }
  FUN_02070a28(&DAT_020b0134 + param_1 * 0x5c);
  return;
}

