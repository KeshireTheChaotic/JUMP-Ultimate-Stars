
undefined2 FUN_02163874(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 1;
  do {
    if (((uint)*(ushort *)(DAT_0216e808 + 2) & 1 << (uVar3 & 0xff)) != 0) {
      iVar2 = (uVar3 - 1) * 0x1e;
      iVar1 = DAT_0216e808 + 0x24 + iVar2;
      if ((((*param_1 == *(char *)(DAT_0216e808 + 0x24 + iVar2)) &&
           (param_1[1] == *(char *)(iVar1 + 1))) && (param_1[2] == *(char *)(iVar1 + 2))) &&
         (((param_1[3] == *(char *)(iVar1 + 3) && (param_1[4] == *(char *)(iVar1 + 4))) &&
          (param_1[5] == *(char *)(iVar1 + 5))))) {
        return *(undefined2 *)(DAT_0216e808 + iVar2 + 0x2a);
      }
    }
    uVar3 = uVar3 + 1 & 0xffff;
    if (1 < uVar3) {
      return 0;
    }
  } while( true );
}

