
int FUN_0219d6f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_0219b19c();
  if (iVar1 != 0) {
    param_2 = param_1 + param_2;
    for (; param_1 < param_2; param_1 = param_1 + 1) {
      if (*(char *)(DAT_0214ccf8 + param_1 + 0xa53) == '\x01') {
        iVar1 = FUN_021a1f34(DAT_0214ccf8 + 0x88,2);
        if (iVar1 != 0) {
          uVar2 = thunk_FUN_02069718(*(undefined4 *)(DAT_0214ccf8 + 0x14),
                                     param_1 * 0xc + *(int *)(DAT_0214ccf8 + 0x18));
          iVar1 = FUN_021a20ac(DAT_0214ccf8 + 0x88,uVar2);
          if (iVar1 != 0) goto LAB_0219d77c;
        }
        iVar3 = iVar3 + 1;
      }
LAB_0219d77c:
    }
  }
  return iVar3;
}

