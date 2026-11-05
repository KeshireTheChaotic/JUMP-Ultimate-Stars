
undefined4 FUN_0217b128(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 unaff_r4;
  
  iVar2 = FUN_02178448();
  cVar1 = *(char *)(iVar2 + 0x15);
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return unaff_r4;
      }
      puVar3 = (undefined4 *)FUN_02178448();
      iVar2 = FUN_02181d98(*puVar3,param_1);
      if (iVar2 == 0) {
        return 0xff;
      }
      if (param_4 == 3) {
        iVar2 = FUN_02178448();
        iVar4 = FUN_02178448();
        if (*(char *)(iVar2 + 0x14) != *(char *)(iVar4 + 0x16)) {
          if ((DAT_021a75b0 == '\x01') && (DAT_021a75b1 == '\x01')) {
            return 0x13;
          }
          iVar2 = FUN_02178448();
          if (((*(int *)(iVar2 + 0x198) == 10) &&
              ((iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x1c) != 0 ||
               (iVar2 = FUN_02178448(), *(short *)(iVar2 + 0x1a) != 0)))) &&
             ((param_2 != 0 || (param_3 != 0)))) {
            return 2;
          }
          return 4;
        }
      }
      return 3;
    }
    puVar3 = (undefined4 *)FUN_02178448();
    iVar2 = FUN_02181d98(*puVar3,param_1);
    if (iVar2 == 0) {
      return 0xff;
    }
    iVar2 = FUN_0217961c(param_1);
    if (iVar2 == 0) {
      return 3;
    }
  }
  iVar2 = FUN_02178448();
  if ((param_4 == *(byte *)(iVar2 + 0x15)) &&
     (iVar2 = FUN_02178448(), *(char *)(iVar2 + 0x1a1) == '\0')) {
    iVar2 = FUN_02178448();
    iVar4 = FUN_02178448();
    if (*(char *)(iVar2 + 0x14) != *(char *)(iVar4 + 0x16)) {
      iVar2 = FUN_02178448();
      if (*(char *)(iVar2 + 0x17) != '\0') {
        iVar2 = FUN_02178448();
        iVar4 = FUN_02178448();
        if (*(int *)(iVar2 + 0x20) == *(int *)(iVar4 + 0x1f8)) goto LAB_0217b1b4;
      }
      iVar2 = FUN_02178448();
      if ((((*(int *)(iVar2 + 0x198) != 3) && (iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x198) != 4)
           ) || ((iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x1c) == 0 &&
                 (iVar2 = FUN_02178448(), *(short *)(iVar2 + 0x1a) == 0)))) ||
         ((param_2 == 0 && (param_3 == 0)))) {
        return 4;
      }
      iVar2 = FUN_02178448();
      if (*(int *)(iVar2 + 0x1fc) == 0) {
        return 2;
      }
      iVar2 = FUN_02178448();
      if (param_1 == *(int *)(iVar2 + 0x1fc)) {
        if ((param_5 == 0) &&
           ((iVar2 = FUN_02178448(), param_1 <= *(int *)(iVar2 + 0x1f8) ||
            (iVar2 = FUN_02178448(), param_1 == *(int *)(iVar2 + 0x200))))) {
          return 0xff;
        }
        return 2;
      }
      if ((param_5 == 0) &&
         ((iVar2 = FUN_02178448(), param_1 <= *(int *)(iVar2 + 0x1f8) ||
          (iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x200) != 0)))) {
        return 3;
      }
      iVar2 = FUN_02178448();
      FUN_0217aad4(*(undefined4 *)(iVar2 + 0x1fc));
      iVar2 = FUN_0217af70();
      if (iVar2 == 0) {
        return 2;
      }
      return 0xff;
    }
  }
LAB_0217b1b4:
  iVar2 = FUN_02178448();
  if (((*(char *)(iVar2 + 0x15) == '\0') &&
      (iVar2 = FUN_02178448(), *(int *)(*(int *)(iVar2 + 0x10) + 0xb4) == 0)) &&
     (iVar2 = FUN_02178448(), *(char *)(iVar2 + 0x17) != '\0')) {
    iVar2 = FUN_02178448();
    iVar4 = FUN_02178448();
    if (*(int *)(iVar2 + 0x20) == *(int *)(iVar4 + 0x1f8)) {
      iVar2 = FUN_02178448();
      FUN_0218dbe8(*(undefined4 *)(iVar2 + 0x10));
    }
  }
  return 3;
}

