
/* WARNING: Removing unreachable block (ram,0x0218b31a) */
/* WARNING: Removing unreachable block (ram,0x0218b324) */
/* WARNING: Removing unreachable block (ram,0x0218b32a) */

undefined4 FUN_0218b1c4(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  
  local_1c = FUN_0218c278(param_1,param_4,param_5);
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     (iVar3 = FUN_02189f98(param_1,local_1c,param_4,param_5,0,param_2,param_3,0), iVar3 == 0)) {
    return 0;
  }
  if ((param_3 < 3) || (iVar3 = FUN_020024cc(param_2,&DAT_021a66a8,2), iVar3 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (local_1c == 0) {
    iVar3 = FUN_02189f0c(param_1,param_4,param_5,param_2,param_3,&local_18);
    if (iVar3 == 0) {
      return 0;
    }
    if (local_18 != 0) {
      return 1;
    }
    if ((!bVar2) || (*(char *)(param_2 + 2) != '\x01')) {
      if (((bVar2) && (*(char *)(param_2 + 2) == 'h')) ||
         (iVar3 = FUN_0218aacc(param_1,param_4,param_5), iVar3 != 0)) {
        return 1;
      }
      return 0;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      return 1;
    }
    iVar3 = FUN_0218a7cc(param_1,&local_1c,param_4,param_5);
    if (iVar3 != 0) {
      if ((iVar3 == 5) || (iVar3 = FUN_0218aacc(param_1,param_4,param_5), iVar3 != 0)) {
        return 1;
      }
      return 0;
    }
  }
  iVar3 = local_1c;
  if (*(int *)(local_1c + 0xc) == 7) {
    if (((bVar2) && (*(char *)(param_2 + 2) == 'h')) || (iVar3 = FUN_0218ab00(local_1c), iVar3 != 0)
       ) {
      return 1;
    }
    return 0;
  }
  if (((bVar2) && (3 < param_3)) && (iVar4 = FUN_020024cc(param_2 + 2,&DAT_021a66a8,2), iVar4 == 0))
  {
    param_2 = param_2 + 2;
    param_3 = param_3 + -2;
    bVar2 = false;
  }
  if (bVar2) {
    bVar1 = *(byte *)(param_2 + 2);
    if (7 < bVar1) {
      iVar3 = FUN_0218b36c(iVar3,bVar1,param_2,param_3);
      if (iVar3 == 0) {
        return 0;
      }
      return 1;
    }
    iVar3 = FUN_0218b550(iVar3,bVar1,param_2,param_3);
    if (iVar3 == 0) {
      return 0;
    }
    return 1;
  }
  iVar3 = FUN_0218bb98(iVar3,param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  return 1;
}

