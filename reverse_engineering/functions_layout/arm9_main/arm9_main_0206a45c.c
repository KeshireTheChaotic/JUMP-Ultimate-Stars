
undefined4 FUN_0206a45c(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = DAT_020afc00;
  FUN_02069cf4();
  FUN_02050fcc(param_2 + 0x200,0xa001);
  iVar4 = 0;
  do {
    iVar2 = FUN_02069e64(iVar3,0x100,param_2);
    if (iVar2 == 0) {
      FUN_02055684();
      return 0;
    }
    FUN_02051890(&DAT_020afc04,param_2 + 0xf0,0xe);
    uVar1 = FUN_02050e94(param_2 + 0x200,param_2,0xfe);
    *(undefined2 *)(param_2 + 0xfe) = uVar1;
    do {
      FUN_02069e14(iVar3,0x100,param_2);
      iVar2 = FUN_02069de4(param_2,iVar3,0x100,param_2 + 0x100);
    } while (iVar2 == 0);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x100;
  } while (iVar4 < 2);
  iVar3 = FUN_02069da0();
  if (iVar3 == 0) {
    return 0;
  }
  return 1;
}

