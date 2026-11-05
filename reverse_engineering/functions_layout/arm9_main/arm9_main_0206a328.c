
undefined4 FUN_0206a328(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  
  local_18 = 0;
  iVar3 = param_1;
  iVar4 = DAT_020afc00;
  do {
    uVar1 = FUN_02050e94(param_1 + 0x500,iVar3,0xfe);
    *(undefined2 *)(iVar3 + 0xfe) = uVar1;
    do {
      FUN_02069e14(iVar4,0x100,iVar3);
      iVar2 = FUN_02069de4(iVar3,iVar4,0x100,param_1 + 0x400);
    } while (iVar2 == 0);
    iVar3 = iVar3 + 0x100;
    local_18 = local_18 + 1;
    iVar4 = iVar4 + 0x100;
  } while (local_18 < 4);
  iVar3 = FUN_02069da0();
  if (iVar3 == 0) {
    return 0;
  }
  return 1;
}

