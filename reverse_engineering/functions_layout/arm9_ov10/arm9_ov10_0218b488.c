
undefined4 FUN_0218b488(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  
  uVar1 = FUN_0218bd38(param_2,0);
  if (param_3 == 2) {
    local_20 = uVar1;
  }
  else {
    if (param_3 != 4) {
      iVar2 = FUN_0218bcc0(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      return 1;
    }
    local_20 = FUN_0218bd38(param_2,2);
  }
  iVar2 = FUN_0200131c(*(undefined4 *)(param_1 + 0x60));
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = FUN_020012d8(*(undefined4 *)(param_1 + 0x60),iVar5);
      iVar4 = FUN_0218bd24(*(undefined2 *)(iVar3 + 8),uVar1);
      if (((-1 < iVar4) && (iVar4 = FUN_0218bd24(*(undefined2 *)(iVar3 + 8),local_20), iVar4 < 1))
         && (iVar3 = FUN_0218aa78(param_1,iVar3), iVar3 == 0)) {
        return 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return 1;
}

